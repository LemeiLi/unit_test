 /* Read cpu id into x1.
     * TODO: cores beyond 4th?
     * Mnemonic: Main Processor ID Register
     */
    mrs x1, mpidr_el1
    ands x1, x1, 3
    beq cpu0_only
cpu1_only:
    /* Only CPU 1 reaches this point and sets the spinlock. */
    mov x0, 1
    ldr x1, =spinlock
    str x0, [x1]
    /* Ensure that CPU 0 sees the write right now.
     * Optional, but could save some useless CPU 1 loops.
     */
    dmb sy
    /* Wake up CPU 0 if it is sleeping on wfe.
     * Optional, but could save power on a real system.
     */
    sev
cpu1_sleep_forever:
    /* Hint CPU 1 to enter low power mode.
     * Optional, but could save power on a real system.
     */
    wfe
    b cpu1_sleep_forever
cpu0_only:
    /* Only CPU 0 reaches this point. */

    /* Wake up CPU 1 from initial sleep!
     * See:https://github.com/cirosantilli/linux-kernel-module-cheat#psci
     */
    /* PCSI function identifier: CPU_ON. */
    ldr w0, =0xc4000003
    /* Argument 1: target_cpu */
    mov x1, 1
    /* Argument 2: entry_point_address */
    ldr x2, =cpu1_only
    /* Argument 3: context_id */
    mov x3, 0
    /* Unused hvc args: the Linux kernel zeroes them,
     * but I don't think it is required.
     */
    hvc 0

spinlock_start:
    ldr x0, spinlock
    /* Hint CPU 0 to enter low power mode. */
    wfe
    cbz x0, spinlock_start

    /* Semihost exit. */
    mov x1, 0x26
    movk x1, 2, lsl 16
    str x1, [sp, 0]
    mov x0, 0
    str x0, [sp, 8]
    mov x1, sp
    mov w0, 0x18
    hlt 0xf000

spinlock:
    .skip 8


