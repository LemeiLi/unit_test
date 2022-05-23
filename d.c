
a.out:     file format elf32-littlearm


Disassembly of section .interp:

00010154 <.interp>:
   10154:	62696c2f 	rsbvs	r6, r9, #12032	; 0x2f00
   10158:	2d646c2f 	stclcs	12, cr6, [r4, #-188]!	; 0xffffff44
   1015c:	756e696c 	strbvc	r6, [lr, #-2412]!	; 0xfffff694
   10160:	72612d78 	rsbvc	r2, r1, #120, 26	; 0x1e00
   10164:	2e66686d 	cdpcs	8, 6, cr6, cr6, cr13, {3}
   10168:	332e6f73 			; <UNDEFINED> instruction: 0x332e6f73
	...

Disassembly of section .note.ABI-tag:

00010170 <.note.ABI-tag>:
   10170:	00000004 	andeq	r0, r0, r4
   10174:	00000010 	andeq	r0, r0, r0, lsl r0
   10178:	00000001 	andeq	r0, r0, r1
   1017c:	00554e47 	subseq	r4, r5, r7, asr #28
   10180:	00000000 	andeq	r0, r0, r0
   10184:	00000003 	andeq	r0, r0, r3
   10188:	00000002 	andeq	r0, r0, r2
   1018c:	00000000 	andeq	r0, r0, r0

Disassembly of section .hash:

00010190 <.hash>:
   10190:	00000003 	andeq	r0, r0, r3
   10194:	00000005 	andeq	r0, r0, r5
   10198:	00000001 	andeq	r0, r0, r1
   1019c:	00000004 	andeq	r0, r0, r4
   101a0:	00000003 	andeq	r0, r0, r3
	...
   101b0:	00000002 	andeq	r0, r0, r2
   101b4:	00000000 	andeq	r0, r0, r0

Disassembly of section .gnu.hash:

000101b8 <.gnu.hash>:
   101b8:	00000003 	andeq	r0, r0, r3
   101bc:	00000002 	andeq	r0, r0, r2
   101c0:	00000001 	andeq	r0, r0, r1
   101c4:	00000005 	andeq	r0, r0, r5
   101c8:	21024800 	tstcs	r2, r0, lsl #16
   101cc:	00000000 	andeq	r0, r0, r0
   101d0:	00000002 	andeq	r0, r0, r2
   101d4:	00000004 	andeq	r0, r0, r4
   101d8:	156b2bb8 	strbne	r2, [fp, #-3000]!	; 0xfffff448
   101dc:	0f11ed7d 	svceq	0x0011ed7d
   101e0:	f63d4e2f 			; <UNDEFINED> instruction: 0xf63d4e2f

Disassembly of section .dynsym:

000101e4 <.dynsym>:
	...
   101f4:	00000034 	andeq	r0, r0, r4, lsr r0
	...
   10200:	00000020 	andeq	r0, r0, r0, lsr #32
   10204:	00000011 	andeq	r0, r0, r1, lsl r0
	...
   10210:	00000012 	andeq	r0, r0, r2, lsl r0
   10214:	0000000b 	andeq	r0, r0, fp
	...
   10220:	00000012 	andeq	r0, r0, r2, lsl r0
   10224:	00000018 	andeq	r0, r0, r8, lsl r0
	...
   10230:	00000012 	andeq	r0, r0, r2, lsl r0

Disassembly of section .dynstr:

00010234 <.dynstr>:
   10234:	62696c00 	rsbvs	r6, r9, #0, 24
   10238:	6f732e63 	svcvs	0x00732e63
   1023c:	6100362e 	tstvs	r0, lr, lsr #12
   10240:	74726f62 	ldrbtvc	r6, [r2], #-3938	; 0xfffff09e
   10244:	69727000 	ldmdbvs	r2!, {ip, sp, lr}^
   10248:	0066746e 	rsbeq	r7, r6, lr, ror #8
   1024c:	696c5f5f 	stmdbvs	ip!, {r0, r1, r2, r3, r4, r6, r8, r9, sl, fp, ip, lr}^
   10250:	735f6362 	cmpvc	pc, #-2013265919	; 0x88000001
   10254:	74726174 	ldrbtvc	r6, [r2], #-372	; 0xfffffe8c
   10258:	69616d5f 	stmdbvs	r1!, {r0, r1, r2, r3, r4, r6, r8, sl, fp, sp, lr}^
   1025c:	4c47006e 	mcrrmi	0, 6, r0, r7, cr14
   10260:	5f434249 	svcpl	0x00434249
   10264:	00342e32 	eorseq	r2, r4, r2, lsr lr
   10268:	6d675f5f 	stclvs	15, cr5, [r7, #-380]!	; 0xfffffe84
   1026c:	735f6e6f 	cmpvc	pc, #1776	; 0x6f0
   10270:	74726174 	ldrbtvc	r6, [r2], #-372	; 0xfffffe8c
   10274:	Address 0x0000000000010274 is out of bounds.


Disassembly of section .gnu.version:

00010278 <.gnu.version>:
   10278:	00000000 	andeq	r0, r0, r0
   1027c:	00020002 	andeq	r0, r2, r2
   10280:	Address 0x0000000000010280 is out of bounds.


Disassembly of section .gnu.version_r:

00010284 <.gnu.version_r>:
   10284:	00010001 	andeq	r0, r1, r1
   10288:	00000001 	andeq	r0, r0, r1
   1028c:	00000010 	andeq	r0, r0, r0, lsl r0
   10290:	00000000 	andeq	r0, r0, r0
   10294:	0d696914 			; <UNDEFINED> instruction: 0x0d696914
   10298:	00020000 	andeq	r0, r2, r0
   1029c:	0000002a 	andeq	r0, r0, sl, lsr #32
   102a0:	00000000 	andeq	r0, r0, r0

Disassembly of section .rel.dyn:

000102a4 <.rel.dyn>:
   102a4:	0002101c 	andeq	r1, r2, ip, lsl r0
   102a8:	00000115 	andeq	r0, r0, r5, lsl r1

Disassembly of section .rel.plt:

000102ac <.rel.plt>:
   102ac:	0002100c 	andeq	r1, r2, ip
   102b0:	00000216 	andeq	r0, r0, r6, lsl r2
   102b4:	00021010 	andeq	r1, r2, r0, lsl r0
   102b8:	00000416 	andeq	r0, r0, r6, lsl r4
   102bc:	00021014 	andeq	r1, r2, r4, lsl r0
   102c0:	00000116 	andeq	r0, r0, r6, lsl r1
   102c4:	00021018 	andeq	r1, r2, r8, lsl r0
   102c8:	00000316 	andeq	r0, r0, r6, lsl r3

Disassembly of section .init:

000102cc <_init>:
   102cc:	e92d4008 	push	{r3, lr}
   102d0:	eb00001d 	bl	1034c <call_weak_fn>
   102d4:	e8bd8008 	pop	{r3, pc}

Disassembly of section .plt:

000102d8 <.plt>:
   102d8:	e52de004 	push	{lr}		; (str lr, [sp, #-4]!)
   102dc:	e59fe004 	ldr	lr, [pc, #4]	; 102e8 <.plt+0x10>
   102e0:	e08fe00e 	add	lr, pc, lr
   102e4:	e5bef008 	ldr	pc, [lr, #8]!
   102e8:	00010d18 	andeq	r0, r1, r8, lsl sp

000102ec <printf@plt>:
   102ec:	e28fc600 	add	ip, pc, #0, 12
   102f0:	e28cca10 	add	ip, ip, #16, 20	; 0x10000
   102f4:	e5bcfd18 	ldr	pc, [ip, #3352]!	; 0xd18

000102f8 <__libc_start_main@plt>:
   102f8:	e28fc600 	add	ip, pc, #0, 12
   102fc:	e28cca10 	add	ip, ip, #16, 20	; 0x10000
   10300:	e5bcfd10 	ldr	pc, [ip, #3344]!	; 0xd10

00010304 <__gmon_start__@plt>:
   10304:	e28fc600 	add	ip, pc, #0, 12
   10308:	e28cca10 	add	ip, ip, #16, 20	; 0x10000
   1030c:	e5bcfd08 	ldr	pc, [ip, #3336]!	; 0xd08

00010310 <abort@plt>:
   10310:	e28fc600 	add	ip, pc, #0, 12
   10314:	e28cca10 	add	ip, ip, #16, 20	; 0x10000
   10318:	e5bcfd00 	ldr	pc, [ip, #3328]!	; 0xd00

Disassembly of section .text:

0001031c <_start>:
   1031c:	f04f 0b00 	mov.w	fp, #0
   10320:	f04f 0e00 	mov.w	lr, #0
   10324:	bc02      	pop	{r1}
   10326:	466a      	mov	r2, sp
   10328:	b404      	push	{r2}
   1032a:	b401      	push	{r0}
   1032c:	f8df c010 	ldr.w	ip, [pc, #16]	; 10340 <_start+0x24>
   10330:	f84d cd04 	str.w	ip, [sp, #-4]!
   10334:	4803      	ldr	r0, [pc, #12]	; (10344 <_start+0x28>)
   10336:	4b04      	ldr	r3, [pc, #16]	; (10348 <_start+0x2c>)
   10338:	f7ff efde 	blx	102f8 <__libc_start_main@plt>
   1033c:	f7ff efe8 	blx	10310 <abort@plt>
   10340:	000104c1 	andeq	r0, r1, r1, asr #9
   10344:	00010449 	andeq	r0, r1, r9, asr #8
   10348:	00010481 	andeq	r0, r1, r1, lsl #9

0001034c <call_weak_fn>:
   1034c:	e59f3014 	ldr	r3, [pc, #20]	; 10368 <call_weak_fn+0x1c>
   10350:	e59f2014 	ldr	r2, [pc, #20]	; 1036c <call_weak_fn+0x20>
   10354:	e08f3003 	add	r3, pc, r3
   10358:	e7932002 	ldr	r2, [r3, r2]
   1035c:	e3520000 	cmp	r2, #0
   10360:	012fff1e 	bxeq	lr
   10364:	eaffffe6 	b	10304 <__gmon_start__@plt>
   10368:	00010ca4 	andeq	r0, r1, r4, lsr #25
   1036c:	0000001c 	andeq	r0, r0, ip, lsl r0

00010370 <deregister_tm_clones>:
   10370:	f241 0030 	movw	r0, #4144	; 0x1030
   10374:	f2c0 0002 	movt	r0, #2
   10378:	f241 0330 	movw	r3, #4144	; 0x1030
   1037c:	f2c0 0302 	movt	r3, #2
   10380:	4283      	cmp	r3, r0
   10382:	d005      	beq.n	10390 <deregister_tm_clones+0x20>
   10384:	f240 0300 	movw	r3, #0
   10388:	f2c0 0300 	movt	r3, #0
   1038c:	b103      	cbz	r3, 10390 <deregister_tm_clones+0x20>
   1038e:	4718      	bx	r3
   10390:	4770      	bx	lr
   10392:	bf00      	nop

00010394 <register_tm_clones>:
   10394:	f241 0030 	movw	r0, #4144	; 0x1030
   10398:	f2c0 0002 	movt	r0, #2
   1039c:	f241 0130 	movw	r1, #4144	; 0x1030
   103a0:	f2c0 0102 	movt	r1, #2
   103a4:	1a0b      	subs	r3, r1, r0
   103a6:	0fd9      	lsrs	r1, r3, #31
   103a8:	eb01 01a3 	add.w	r1, r1, r3, asr #2
   103ac:	1049      	asrs	r1, r1, #1
   103ae:	d005      	beq.n	103bc <register_tm_clones+0x28>
   103b0:	f240 0300 	movw	r3, #0
   103b4:	f2c0 0300 	movt	r3, #0
   103b8:	b103      	cbz	r3, 103bc <register_tm_clones+0x28>
   103ba:	4718      	bx	r3
   103bc:	4770      	bx	lr
   103be:	bf00      	nop

000103c0 <__do_global_dtors_aux>:
   103c0:	b510      	push	{r4, lr}
   103c2:	f241 0430 	movw	r4, #4144	; 0x1030
   103c6:	f2c0 0402 	movt	r4, #2
   103ca:	7823      	ldrb	r3, [r4, #0]
   103cc:	b91b      	cbnz	r3, 103d6 <__do_global_dtors_aux+0x16>
   103ce:	f7ff ffcf 	bl	10370 <deregister_tm_clones>
   103d2:	2301      	movs	r3, #1
   103d4:	7023      	strb	r3, [r4, #0]
   103d6:	bd10      	pop	{r4, pc}

000103d8 <frame_dummy>:
   103d8:	e7dc      	b.n	10394 <register_tm_clones>
   103da:	bf00      	nop

000103dc <add>:
   103dc:	b580      	push	{r7, lr}
   103de:	b082      	sub	sp, #8
   103e0:	af00      	add	r7, sp, #0
   103e2:	6078      	str	r0, [r7, #4]
   103e4:	6039      	str	r1, [r7, #0]
   103e6:	f241 0328 	movw	r3, #4136	; 0x1028
   103ea:	f2c0 0302 	movt	r3, #2
   103ee:	681b      	ldr	r3, [r3, #0]
   103f0:	461a      	mov	r2, r3
   103f2:	f240 41e4 	movw	r1, #1252	; 0x4e4
   103f6:	f2c0 0101 	movt	r1, #1
   103fa:	f240 40d0 	movw	r0, #1232	; 0x4d0
   103fe:	f2c0 0001 	movt	r0, #1
   10402:	f7ff ef74 	blx	102ec <printf@plt>
   10406:	687a      	ldr	r2, [r7, #4]
   10408:	683b      	ldr	r3, [r7, #0]
   1040a:	441a      	add	r2, r3
   1040c:	f241 0328 	movw	r3, #4136	; 0x1028
   10410:	f2c0 0302 	movt	r3, #2
   10414:	601a      	str	r2, [r3, #0]
   10416:	f241 0328 	movw	r3, #4136	; 0x1028
   1041a:	f2c0 0302 	movt	r3, #2
   1041e:	681b      	ldr	r3, [r3, #0]
   10420:	461a      	mov	r2, r3
   10422:	f240 41e4 	movw	r1, #1252	; 0x4e4
   10426:	f2c0 0101 	movt	r1, #1
   1042a:	f240 40d0 	movw	r0, #1232	; 0x4d0
   1042e:	f2c0 0001 	movt	r0, #1
   10432:	f7ff ef5c 	blx	102ec <printf@plt>
   10436:	f241 0328 	movw	r3, #4136	; 0x1028
   1043a:	f2c0 0302 	movt	r3, #2
   1043e:	681b      	ldr	r3, [r3, #0]
   10440:	4618      	mov	r0, r3
   10442:	3708      	adds	r7, #8
   10444:	46bd      	mov	sp, r7
   10446:	bd80      	pop	{r7, pc}

00010448 <main>:
   10448:	b598      	push	{r3, r4, r7, lr}
   1044a:	af00      	add	r7, sp, #0
   1044c:	f241 032c 	movw	r3, #4140	; 0x102c
   10450:	f2c0 0302 	movt	r3, #2
   10454:	681c      	ldr	r4, [r3, #0]
   10456:	2102      	movs	r1, #2
   10458:	2001      	movs	r0, #1
   1045a:	f7ff ffbf 	bl	103dc <add>
   1045e:	4602      	mov	r2, r0
   10460:	f241 032c 	movw	r3, #4140	; 0x102c
   10464:	f2c0 0302 	movt	r3, #2
   10468:	681b      	ldr	r3, [r3, #0]
   1046a:	4621      	mov	r1, r4
   1046c:	f240 40e8 	movw	r0, #1256	; 0x4e8
   10470:	f2c0 0001 	movt	r0, #1
   10474:	f7ff ef3a 	blx	102ec <printf@plt>
   10478:	2300      	movs	r3, #0
   1047a:	4618      	mov	r0, r3
   1047c:	bd98      	pop	{r3, r4, r7, pc}
	...

00010480 <__libc_csu_init>:
   10480:	e92d 43f8 	stmdb	sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
   10484:	4607      	mov	r7, r0
   10486:	4e0c      	ldr	r6, [pc, #48]	; (104b8 <__libc_csu_init+0x38>)
   10488:	4688      	mov	r8, r1
   1048a:	4d0c      	ldr	r5, [pc, #48]	; (104bc <__libc_csu_init+0x3c>)
   1048c:	4691      	mov	r9, r2
   1048e:	447e      	add	r6, pc
   10490:	f7ff ef1c 	blx	102cc <_init>
   10494:	447d      	add	r5, pc
   10496:	1b76      	subs	r6, r6, r5
   10498:	10b6      	asrs	r6, r6, #2
   1049a:	d00a      	beq.n	104b2 <__libc_csu_init+0x32>
   1049c:	3d04      	subs	r5, #4
   1049e:	2400      	movs	r4, #0
   104a0:	f855 3f04 	ldr.w	r3, [r5, #4]!
   104a4:	3401      	adds	r4, #1
   104a6:	464a      	mov	r2, r9
   104a8:	4641      	mov	r1, r8
   104aa:	4638      	mov	r0, r7
   104ac:	4798      	blx	r3
   104ae:	42a6      	cmp	r6, r4
   104b0:	d1f6      	bne.n	104a0 <__libc_csu_init+0x20>
   104b2:	e8bd 83f8 	ldmia.w	sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
   104b6:	bf00      	nop
   104b8:	00010a7a 	andeq	r0, r1, sl, ror sl
   104bc:	00010a70 	andeq	r0, r1, r0, ror sl

000104c0 <__libc_csu_fini>:
   104c0:	4770      	bx	lr
   104c2:	bf00      	nop

Disassembly of section .fini:

000104c4 <_fini>:
   104c4:	e92d4008 	push	{r3, lr}
   104c8:	e8bd8008 	pop	{r3, pc}

Disassembly of section .rodata:

000104cc <_IO_stdin_used>:
   104cc:	00020001 	andeq	r0, r2, r1
   104d0:	73207325 			; <UNDEFINED> instruction: 0x73207325
   104d4:	69746174 	ldmdbvs	r4!, {r2, r4, r5, r6, r8, sp, lr}^
   104d8:	69765f63 	ldmdbvs	r6!, {r0, r1, r5, r6, r8, r9, sl, fp, ip, lr}^
   104dc:	203d2072 	eorscs	r2, sp, r2, ror r0
   104e0:	000a6425 	andeq	r6, sl, r5, lsr #8

000104e4 <__func__.5966>:
   104e4:	00646461 	rsbeq	r6, r4, r1, ror #8
   104e8:	74617473 	strbtvc	r7, [r1], #-1139	; 0xfffffb8d
   104ec:	765f6369 	ldrbvc	r6, [pc], -r9, ror #6
   104f0:	25287269 	strcs	r7, [r8, #-617]!	; 0xfffffd97
   104f4:	3d202964 			; <UNDEFINED> instruction: 0x3d202964
   104f8:	2c642520 	cfstr64cs	mvdx2, [r4], #-128	; 0xffffff80
   104fc:	0a642520 	beq	1919984 <__bss_end__+0x18f8950>
	...

Disassembly of section .ARM.exidx:

00010504 <.ARM.exidx>:
   10504:	7ffffe18 	svcvc	0x00fffe18
   10508:	00000001 	andeq	r0, r0, r1

Disassembly of section .eh_frame:

0001050c <__FRAME_END__>:
   1050c:	00000000 	andeq	r0, r0, r0

Disassembly of section .init_array:

00020f08 <__frame_dummy_init_array_entry>:
   20f08:	000103d9 	ldrdeq	r0, [r1], -r9

Disassembly of section .fini_array:

00020f0c <__do_global_dtors_aux_fini_array_entry>:
   20f0c:	000103c1 	andeq	r0, r1, r1, asr #7

Disassembly of section .dynamic:

00020f10 <_DYNAMIC>:
   20f10:	00000001 	andeq	r0, r0, r1
   20f14:	00000001 	andeq	r0, r0, r1
   20f18:	0000000c 	andeq	r0, r0, ip
   20f1c:	000102cc 	andeq	r0, r1, ip, asr #5
   20f20:	0000000d 	andeq	r0, r0, sp
   20f24:	000104c4 	andeq	r0, r1, r4, asr #9
   20f28:	00000019 	andeq	r0, r0, r9, lsl r0
   20f2c:	00020f08 	andeq	r0, r2, r8, lsl #30
   20f30:	0000001b 	andeq	r0, r0, fp, lsl r0
   20f34:	00000004 	andeq	r0, r0, r4
   20f38:	0000001a 	andeq	r0, r0, sl, lsl r0
   20f3c:	00020f0c 	andeq	r0, r2, ip, lsl #30
   20f40:	0000001c 	andeq	r0, r0, ip, lsl r0
   20f44:	00000004 	andeq	r0, r0, r4
   20f48:	00000004 	andeq	r0, r0, r4
   20f4c:	00010190 	muleq	r1, r0, r1
   20f50:	6ffffef5 	svcvs	0x00fffef5
   20f54:	000101b8 			; <UNDEFINED> instruction: 0x000101b8
   20f58:	00000005 	andeq	r0, r0, r5
   20f5c:	00010234 	andeq	r0, r1, r4, lsr r2
   20f60:	00000006 	andeq	r0, r0, r6
   20f64:	000101e4 	andeq	r0, r1, r4, ror #3
   20f68:	0000000a 	andeq	r0, r0, sl
   20f6c:	00000043 	andeq	r0, r0, r3, asr #32
   20f70:	0000000b 	andeq	r0, r0, fp
   20f74:	00000010 	andeq	r0, r0, r0, lsl r0
   20f78:	00000015 	andeq	r0, r0, r5, lsl r0
   20f7c:	00000000 	andeq	r0, r0, r0
   20f80:	00000003 	andeq	r0, r0, r3
   20f84:	00021000 	andeq	r1, r2, r0
   20f88:	00000002 	andeq	r0, r0, r2
   20f8c:	00000020 	andeq	r0, r0, r0, lsr #32
   20f90:	00000014 	andeq	r0, r0, r4, lsl r0
   20f94:	00000011 	andeq	r0, r0, r1, lsl r0
   20f98:	00000017 	andeq	r0, r0, r7, lsl r0
   20f9c:	000102ac 	andeq	r0, r1, ip, lsr #5
   20fa0:	00000011 	andeq	r0, r0, r1, lsl r0
   20fa4:	000102a4 	andeq	r0, r1, r4, lsr #5
   20fa8:	00000012 	andeq	r0, r0, r2, lsl r0
   20fac:	00000008 	andeq	r0, r0, r8
   20fb0:	00000013 	andeq	r0, r0, r3, lsl r0
   20fb4:	00000008 	andeq	r0, r0, r8
   20fb8:	6ffffffe 	svcvs	0x00fffffe
   20fbc:	00010284 	andeq	r0, r1, r4, lsl #5
   20fc0:	6fffffff 	svcvs	0x00ffffff
   20fc4:	00000001 	andeq	r0, r0, r1
   20fc8:	6ffffff0 	svcvs	0x00fffff0
   20fcc:	00010278 	andeq	r0, r1, r8, ror r2
	...

Disassembly of section .got:

00021000 <_GLOBAL_OFFSET_TABLE_>:
   21000:	00020f10 	andeq	r0, r2, r0, lsl pc
	...
   2100c:	000102d8 	ldrdeq	r0, [r1], -r8
   21010:	000102d8 	ldrdeq	r0, [r1], -r8
   21014:	000102d8 	ldrdeq	r0, [r1], -r8
   21018:	000102d8 	ldrdeq	r0, [r1], -r8
   2101c:	00000000 	andeq	r0, r0, r0

Disassembly of section .data:

00021020 <__data_start>:
   21020:	00000000 	andeq	r0, r0, r0

00021024 <__dso_handle>:
   21024:	00000000 	andeq	r0, r0, r0

00021028 <static_vir>:
   21028:	0000000a 	andeq	r0, r0, sl

0002102c <static_vir>:
   2102c:	00000002 	andeq	r0, r0, r2

Disassembly of section .bss:

00021030 <__bss_start>:
   21030:	00000000 	andeq	r0, r0, r0

Disassembly of section .comment:

00000000 <.comment>:
   0:	3a434347 	bcc	10d0d24 <__bss_end__+0x10afcf0>
   4:	4e472820 	cdpmi	8, 4, cr2, cr7, cr0, {1}
   8:	6f542055 	svcvs	0x00542055
   c:	68636c6f 	stmdavs	r3!, {r0, r1, r2, r3, r5, r6, sl, fp, sp, lr}^
  10:	206e6961 	rsbcs	r6, lr, r1, ror #18
  14:	20726f66 	rsbscs	r6, r2, r6, ror #30
  18:	20656874 	rsbcs	r6, r5, r4, ror r8
  1c:	72702d41 	rsbsvc	r2, r0, #4160	; 0x1040
  20:	6c69666f 	stclvs	6, cr6, [r9], #-444	; 0xfffffe44
  24:	72412065 	subvc	r2, r1, #101	; 0x65
  28:	74696863 	strbtvc	r6, [r9], #-2147	; 0xfffff79d
  2c:	75746365 	ldrbvc	r6, [r4, #-869]!	; 0xfffffc9b
  30:	39206572 	stmdbcc	r0!, {r1, r4, r5, r6, r8, sl, sp, lr}
  34:	322d322e 	eorcc	r3, sp, #-536870910	; 0xe0000002
  38:	2e393130 	mrccs	1, 1, r3, cr9, cr0, {1}
  3c:	28203231 	stmdacs	r0!, {r0, r4, r5, r9, ip, sp}
  40:	2d6d7261 	sfmcs	f7, 2, [sp, #-388]!	; 0xfffffe7c
  44:	30312e39 	eorscc	r2, r1, r9, lsr lr
  48:	39202929 	stmdbcc	r0!, {r0, r3, r5, r8, fp, sp}
  4c:	312e322e 			; <UNDEFINED> instruction: 0x312e322e
  50:	31303220 	teqcc	r0, r0, lsr #4
  54:	32303139 	eorscc	r3, r0, #1073741838	; 0x4000000e
  58:	Address 0x0000000000000058 is out of bounds.


Disassembly of section .ARM.attributes:

00000000 <.ARM.attributes>:
   0:	00003441 	andeq	r3, r0, r1, asr #8
   4:	61656100 	cmnvs	r5, r0, lsl #2
   8:	01006962 	tsteq	r0, r2, ror #18
   c:	0000002a 	andeq	r0, r0, sl, lsr #32
  10:	412d3705 			; <UNDEFINED> instruction: 0x412d3705
  14:	070a0600 	streq	r0, [sl, -r0, lsl #12]
  18:	09010841 	stmdbeq	r1, {r0, r6, fp}
  1c:	0c030a02 			; <UNDEFINED> instruction: 0x0c030a02
  20:	13041201 	movwne	r1, #16897	; 0x4201
  24:	15011401 	strne	r1, [r1, #-1025]	; 0xfffffbff
  28:	18031701 	stmdane	r3, {r0, r8, r9, sl, ip}
  2c:	1a011901 	bne	46438 <__bss_end__+0x25404>
  30:	22011c02 	andcs	r1, r1, #512	; 0x200
  34:	Address 0x0000000000000034 is out of bounds.


Disassembly of section .debug_aranges:

00000000 <.debug_aranges>:
   0:	0000001c 	andeq	r0, r0, ip, lsl r0
   4:	00000002 	andeq	r0, r0, r2
   8:	00040000 	andeq	r0, r4, r0
   c:	00000000 	andeq	r0, r0, r0
  10:	0001031c 	andeq	r0, r1, ip, lsl r3
  14:	00000030 	andeq	r0, r0, r0, lsr r0
	...
  20:	00000014 	andeq	r0, r0, r4, lsl r0
  24:	00260002 	eoreq	r0, r6, r2
  28:	00040000 	andeq	r0, r4, r0
	...
  38:	0000002c 	andeq	r0, r0, ip, lsr #32
  3c:	00620002 	rsbeq	r0, r2, r2
  40:	00040000 	andeq	r0, r4, r0
  44:	00000000 	andeq	r0, r0, r0
  48:	0001034c 	andeq	r0, r1, ip, asr #6
  4c:	00000024 	andeq	r0, r0, r4, lsr #32
  50:	000102cc 	andeq	r0, r1, ip, asr #5
  54:	00000008 	andeq	r0, r0, r8
  58:	000104c4 	andeq	r0, r1, r4, asr #9
  5c:	00000004 	andeq	r0, r0, r4
	...
  68:	0000001c 	andeq	r0, r0, ip, lsl r0
  6c:	00840002 	addeq	r0, r4, r2
  70:	00040000 	andeq	r0, r4, r0
  74:	00000000 	andeq	r0, r0, r0
  78:	00010480 	andeq	r0, r1, r0, lsl #9
  7c:	00000042 	andeq	r0, r0, r2, asr #32
	...
  88:	00000024 	andeq	r0, r0, r4, lsr #32
  8c:	02300002 	eorseq	r0, r0, #2
  90:	00040000 	andeq	r0, r4, r0
  94:	00000000 	andeq	r0, r0, r0
  98:	000102d4 	ldrdeq	r0, [r1], -r4
  9c:	00000004 	andeq	r0, r0, r4
  a0:	000104c8 	andeq	r0, r1, r8, asr #9
  a4:	00000004 	andeq	r0, r0, r4
	...

Disassembly of section .debug_info:

00000000 <.debug_info>:
   0:	00000022 	andeq	r0, r0, r2, lsr #32
   4:	00000002 	andeq	r0, r0, r2
   8:	01040000 	mrseq	r0, (UNDEF: 4)
   c:	00000000 	andeq	r0, r0, r0
  10:	0001031c 	andeq	r0, r1, ip, lsl r3
  14:	0001034c 	andeq	r0, r1, ip, asr #6
  18:	00000000 	andeq	r0, r0, r0
  1c:	00000017 	andeq	r0, r0, r7, lsl r0
  20:	0000007f 	andeq	r0, r0, pc, ror r0
  24:	00388001 	eorseq	r8, r8, r1
  28:	00040000 	andeq	r0, r4, r0
  2c:	00000014 	andeq	r0, r0, r4, lsl r0
  30:	009c0104 	addseq	r0, ip, r4, lsl #2
  34:	d50c0000 	strle	r0, [ip, #-0]
  38:	17000001 	strne	r0, [r0, -r1]
  3c:	59000000 	stmdbpl	r0, {}	; <UNPREDICTABLE>
  40:	02000000 	andeq	r0, r0, #0
  44:	0000008d 	andeq	r0, r0, sp, lsl #1
  48:	360b1701 	strcc	r1, [fp], -r1, lsl #14
  4c:	05000000 	streq	r0, [r0, #-0]
  50:	0104cc03 	tsteq	r4, r3, lsl #24
  54:	05040300 	streq	r0, [r4, #-768]	; 0xfffffd00
  58:	00746e69 	rsbseq	r6, r4, r9, ror #28
  5c:	00002f04 	andeq	r2, r0, r4, lsl #30
  60:	001e0000 	andseq	r0, lr, r0
  64:	00020000 	andeq	r0, r2, r0
  68:	00000049 	andeq	r0, r0, r9, asr #32
  6c:	00800104 	addeq	r0, r0, r4, lsl #2
  70:	00000000 	andeq	r0, r0, r0
  74:	018e0000 	orreq	r0, lr, r0
  78:	00170000 	andseq	r0, r7, r0
  7c:	007f0000 	rsbseq	r0, pc, r0
  80:	80010000 	andhi	r0, r1, r0
  84:	000001a8 	andeq	r0, r0, r8, lsr #3
  88:	005b0004 	subseq	r0, fp, r4
  8c:	01040000 	mrseq	r0, (UNDEF: 4)
  90:	00000202 	andeq	r0, r0, r2, lsl #4
  94:	0001d10c 	andeq	sp, r1, ip, lsl #2
  98:	00001700 	andeq	r1, r0, r0, lsl #14
  9c:	01048000 	mrseq	r8, (UNDEF: 4)
  a0:	00004200 	andeq	r4, r0, r0, lsl #4
  a4:	0000ec00 	andeq	lr, r0, r0, lsl #24
  a8:	05040200 	streq	r0, [r4, #-512]	; 0xfffffe00
  ac:	00746e69 	rsbseq	r6, r4, r9, ror #28
  b0:	0001c503 	andeq	ip, r1, r3, lsl #10
  b4:	17d10200 	ldrbne	r0, [r1, r0, lsl #4]
  b8:	0000003d 	andeq	r0, r0, sp, lsr r0
  bc:	00002c04 	andeq	r2, r0, r4, lsl #24
  c0:	07040500 	streq	r0, [r4, -r0, lsl #10]
  c4:	00000353 	andeq	r0, r0, r3, asr r3
  c8:	a4050805 	strge	r0, [r5], #-2053	; 0xfffff7fb
  cc:	05000001 	streq	r0, [r0, #-1]
  d0:	03330408 	teqeq	r3, #8, 8	; 0x8000000
  d4:	5d060000 	stcpl	0, cr0, [r6, #-0]
  d8:	5d000000 	stcpl	0, cr0, [r0, #-0]
  dc:	07000000 	streq	r0, [r0, -r0]
  e0:	63040800 	movwvs	r0, #18432	; 0x4800
  e4:	09000000 	stmdbeq	r0, {}	; <UNPREDICTABLE>
  e8:	00000078 	andeq	r0, r0, r8, ror r0
  ec:	0000250a 	andeq	r2, r0, sl, lsl #10
  f0:	00780a00 	rsbseq	r0, r8, r0, lsl #20
  f4:	780a0000 	stmdavc	sl, {}	; <UNPREDICTABLE>
  f8:	00000000 	andeq	r0, r0, r0
  fc:	007e0408 	rsbseq	r0, lr, r8, lsl #8
 100:	04080000 	streq	r0, [r8], #-0
 104:	00000084 	andeq	r0, r0, r4, lsl #1
 108:	fd080105 	stc2	1, cr0, [r8, #-20]	; 0xffffffec
 10c:	0b000001 	bleq	118 <_init-0x101b4>
 110:	000002eb 	andeq	r0, r0, fp, ror #5
 114:	520f2801 	andpl	r2, pc, #65536	; 0x10000
 118:	0b000000 	bleq	120 <_init-0x101ac>
 11c:	0000033f 	andeq	r0, r0, pc, lsr r3
 120:	520f2a01 	andpl	r2, pc, #4096	; 0x1000
 124:	0b000000 	bleq	12c <_init-0x101a0>
 128:	000001b2 			; <UNDEFINED> instruction: 0x000001b2
 12c:	520f2c01 	andpl	r2, pc, #256	; 0x100
 130:	0b000000 	bleq	138 <_init-0x10194>
 134:	00000360 	andeq	r0, r0, r0, ror #6
 138:	520f2e01 	andpl	r2, pc, #1, 28
 13c:	06000000 	streq	r0, [r0], -r0
 140:	000000c6 	andeq	r0, r0, r6, asr #1
 144:	000000c6 	andeq	r0, r0, r6, asr #1
 148:	04080007 	streq	r0, [r8], #-7
 14c:	000000cc 	andeq	r0, r0, ip, asr #1
 150:	03010b0c 	movweq	r0, #6924	; 0x1b0c
 154:	30010000 	andcc	r0, r1, r0
 158:	0000bb0f 	andeq	fp, r0, pc, lsl #22
 15c:	01ec0b00 	mvneq	r0, r0, lsl #22
 160:	31010000 	mrscc	r0, (UNDEF: 1)
 164:	0000bb0f 	andeq	fp, r0, pc, lsl #22
 168:	01dc0d00 	bicseq	r0, ip, r0, lsl #26
 16c:	5f010000 	svcpl	0x00010000
 170:	0104c001 	tsteq	r4, r1
 174:	00000200 	andeq	r0, r0, r0, lsl #4
 178:	0e9c0100 	fmleqe	f0, f4, f0
 17c:	0000031e 	andeq	r0, r0, lr, lsl r3
 180:	80014301 	andhi	r4, r1, r1, lsl #6
 184:	40000104 	andmi	r0, r0, r4, lsl #2
 188:	01000000 	mrseq	r0, (UNDEF: 0)
 18c:	00019f9c 	muleq	r1, ip, pc	; <UNPREDICTABLE>
 190:	03140f00 	tsteq	r4, #0, 30
 194:	43010000 	movwmi	r0, #4096	; 0x1000
 198:	00002516 	andeq	r2, r0, r6, lsl r5
 19c:	00000600 	andeq	r0, r0, r0, lsl #12
 1a0:	00000000 	andeq	r0, r0, r0
 1a4:	032e0f00 			; <UNDEFINED> instruction: 0x032e0f00
 1a8:	43010000 	movwmi	r0, #4096	; 0x1000
 1ac:	00007823 	andeq	r7, r0, r3, lsr #16
 1b0:	00003800 	andeq	r3, r0, r0, lsl #16
 1b4:	00003200 	andeq	r3, r0, r0, lsl #4
 1b8:	01cc0f00 	biceq	r0, ip, r0, lsl #30
 1bc:	43010000 	movwmi	r0, #4096	; 0x1000
 1c0:	00007830 	andeq	r7, r0, r0, lsr r8
 1c4:	00006a00 	andeq	r6, r0, r0, lsl #20
 1c8:	00006400 	andeq	r6, r0, r0, lsl #8
 1cc:	03191000 	tsteq	r9, #0
 1d0:	56010000 	strpl	r0, [r1], -r0
 1d4:	00003810 	andeq	r3, r0, r0, lsl r8
 1d8:	00009a00 	andeq	r9, r0, r0, lsl #20
 1dc:	00009600 	andeq	r9, r0, r0, lsl #12
 1e0:	04981100 	ldreq	r1, [r8], #256	; 0x100
 1e4:	001a0001 	andseq	r0, sl, r1
 1e8:	01950000 	orrseq	r0, r5, r0
 1ec:	69120000 	ldmdbvs	r2, {}	; <UNPREDICTABLE>
 1f0:	0f570100 	svceq	0x00570100
 1f4:	0000002c 	andeq	r0, r0, ip, lsr #32
 1f8:	000000c4 	andeq	r0, r0, r4, asr #1
 1fc:	000000bc 	strheq	r0, [r0], -ip
 200:	0104ae13 	tsteq	r4, r3, lsl lr
 204:	50011400 	andpl	r1, r1, r0, lsl #8
 208:	14007702 	strne	r7, [r0], #-1794	; 0xfffff8fe
 20c:	78025101 	stmdavc	r2, {r0, r8, ip, lr}
 210:	52011400 	andpl	r1, r1, #0, 8
 214:	00007902 	andeq	r7, r0, r2, lsl #18
 218:	04941500 	ldreq	r1, [r4], #1280	; 0x500
 21c:	019f0001 	orrseq	r0, pc, r1
 220:	16000000 	strne	r0, [r0], -r0
 224:	00000328 	andeq	r0, r0, r8, lsr #6
 228:	00000328 	andeq	r0, r0, r8, lsr #6
 22c:	000d3701 	andeq	r3, sp, r1, lsl #14
 230:	0000001e 	andeq	r0, r0, lr, lsl r0
 234:	018c0002 	orreq	r0, ip, r2
 238:	01040000 	mrseq	r0, (UNDEF: 4)
 23c:	0000026f 	andeq	r0, r0, pc, ror #4
 240:	00000028 	andeq	r0, r0, r8, lsr #32
 244:	00000371 	andeq	r0, r0, r1, ror r3
 248:	00000017 	andeq	r0, r0, r7, lsl r0
 24c:	0000007f 	andeq	r0, r0, pc, ror r0
 250:	Address 0x0000000000000250 is out of bounds.


Disassembly of section .debug_abbrev:

00000000 <.debug_abbrev>:
   0:	10001101 	andne	r1, r0, r1, lsl #2
   4:	12011106 	andne	r1, r1, #-2147483647	; 0x80000001
   8:	1b0e0301 	blne	380c14 <__bss_end__+0x35fbe0>
   c:	130e250e 	movwne	r2, #58638	; 0xe50e
  10:	00000005 	andeq	r0, r0, r5
  14:	25011101 	strcs	r1, [r1, #-257]	; 0xfffffeff
  18:	030b130e 	movweq	r1, #45838	; 0xb30e
  1c:	100e1b0e 	andne	r1, lr, lr, lsl #22
  20:	02000017 	andeq	r0, r0, #23
  24:	0e030034 	mcreq	0, 0, r0, cr3, cr4, {1}
  28:	0b3b0b3a 	bleq	ec2d18 <__bss_end__+0xea1ce4>
  2c:	13490b39 	movtne	r0, #39737	; 0x9b39
  30:	1802193f 	stmdane	r2, {r0, r1, r2, r3, r4, r5, r8, fp, ip}
  34:	24030000 	strcs	r0, [r3], #-0
  38:	3e0b0b00 	vmlacc.f64	d0, d11, d0
  3c:	0008030b 	andeq	r0, r8, fp, lsl #6
  40:	00260400 	eoreq	r0, r6, r0, lsl #8
  44:	00001349 	andeq	r1, r0, r9, asr #6
  48:	00110100 	andseq	r0, r1, r0, lsl #2
  4c:	06550610 			; <UNDEFINED> instruction: 0x06550610
  50:	0e1b0e03 	cdpeq	14, 1, cr0, cr11, cr3, {0}
  54:	05130e25 	ldreq	r0, [r3, #-3621]	; 0xfffff1db
  58:	01000000 	mrseq	r0, (UNDEF: 0)
  5c:	0e250111 	mcreq	1, 1, r0, cr5, cr1, {0}
  60:	0e030b13 	vmoveq.32	d3[0], r0
  64:	01110e1b 	tsteq	r1, fp, lsl lr
  68:	17100612 			; <UNDEFINED> instruction: 0x17100612
  6c:	24020000 	strcs	r0, [r2], #-0
  70:	3e0b0b00 	vmlacc.f64	d0, d11, d0
  74:	0008030b 	andeq	r0, r8, fp, lsl #6
  78:	00160300 	andseq	r0, r6, r0, lsl #6
  7c:	0b3a0e03 	bleq	e83890 <__bss_end__+0xe6285c>
  80:	0b390b3b 	bleq	e42d74 <__bss_end__+0xe21d40>
  84:	00001349 	andeq	r1, r0, r9, asr #6
  88:	49002604 	stmdbmi	r0, {r2, r9, sl, sp}
  8c:	05000013 	streq	r0, [r0, #-19]	; 0xffffffed
  90:	0b0b0024 	bleq	2c0128 <__bss_end__+0x29f0f4>
  94:	0e030b3e 	vmoveq.16	d3[0], r0
  98:	01060000 	mrseq	r0, (UNDEF: 6)
  9c:	01134901 	tsteq	r3, r1, lsl #18
  a0:	07000013 	smladeq	r0, r3, r0, r0
  a4:	00000021 	andeq	r0, r0, r1, lsr #32
  a8:	0b000f08 	bleq	3cd0 <_init-0xc5fc>
  ac:	0013490b 	andseq	r4, r3, fp, lsl #18
  b0:	01150900 	tsteq	r5, r0, lsl #18
  b4:	13011927 	movwne	r1, #6439	; 0x1927
  b8:	050a0000 	streq	r0, [sl, #-0]
  bc:	00134900 	andseq	r4, r3, r0, lsl #18
  c0:	00340b00 	eorseq	r0, r4, r0, lsl #22
  c4:	0b3a0e03 	bleq	e838d8 <__bss_end__+0xe628a4>
  c8:	0b390b3b 	bleq	e42dbc <__bss_end__+0xe21d88>
  cc:	193f1349 	ldmdbne	pc!, {r0, r3, r6, r8, r9, ip}	; <UNPREDICTABLE>
  d0:	0000193c 	andeq	r1, r0, ip, lsr r9
  d4:	2700150c 	strcs	r1, [r0, -ip, lsl #10]
  d8:	0d000019 	stceq	0, cr0, [r0, #-100]	; 0xffffff9c
  dc:	193f002e 	ldmdbne	pc!, {r1, r2, r3, r5}	; <UNPREDICTABLE>
  e0:	0b3a0e03 	bleq	e838f4 <__bss_end__+0xe628c0>
  e4:	0b390b3b 	bleq	e42dd8 <__bss_end__+0xe21da4>
  e8:	01111927 	tsteq	r1, r7, lsr #18
  ec:	18400612 	stmdane	r0, {r1, r4, r9, sl}^
  f0:	00194297 	mulseq	r9, r7, r2
  f4:	012e0e00 			; <UNDEFINED> instruction: 0x012e0e00
  f8:	0e03193f 			; <UNDEFINED> instruction: 0x0e03193f
  fc:	0b3b0b3a 	bleq	ec2dec <__bss_end__+0xea1db8>
 100:	19270b39 	stmdbne	r7!, {r0, r3, r4, r5, r8, r9, fp}
 104:	06120111 			; <UNDEFINED> instruction: 0x06120111
 108:	42971840 	addsmi	r1, r7, #64, 16	; 0x400000
 10c:	00130119 	andseq	r0, r3, r9, lsl r1
 110:	00050f00 	andeq	r0, r5, r0, lsl #30
 114:	0b3a0e03 	bleq	e83928 <__bss_end__+0xe628f4>
 118:	0b390b3b 	bleq	e42e0c <__bss_end__+0xe21dd8>
 11c:	17021349 	strne	r1, [r2, -r9, asr #6]
 120:	001742b7 			; <UNDEFINED> instruction: 0x001742b7
 124:	00341000 	eorseq	r1, r4, r0
 128:	0b3a0e03 	bleq	e8393c <__bss_end__+0xe62908>
 12c:	0b390b3b 	bleq	e42e20 <__bss_end__+0xe21dec>
 130:	17021349 	strne	r1, [r2, -r9, asr #6]
 134:	001742b7 			; <UNDEFINED> instruction: 0x001742b7
 138:	010b1100 	mrseq	r1, (UNDEF: 27)
 13c:	06120111 			; <UNDEFINED> instruction: 0x06120111
 140:	00001301 	andeq	r1, r0, r1, lsl #6
 144:	03003412 	movweq	r3, #1042	; 0x412
 148:	3b0b3a08 	blcc	2ce970 <__bss_end__+0x2ad93c>
 14c:	490b390b 	stmdbmi	fp, {r0, r1, r3, r8, fp, ip, sp}
 150:	b7170213 			; <UNDEFINED> instruction: 0xb7170213
 154:	00001742 	andeq	r1, r0, r2, asr #14
 158:	01828913 	orreq	r8, r2, r3, lsl r9
 15c:	00011101 	andeq	r1, r1, r1, lsl #2
 160:	828a1400 	addhi	r1, sl, #0, 8
 164:	18020001 	stmdane	r2, {r0}
 168:	00184291 	mulseq	r8, r1, r2
 16c:	82891500 	addhi	r1, r9, #0, 10
 170:	01110001 	tsteq	r1, r1
 174:	00001331 	andeq	r1, r0, r1, lsr r3
 178:	3f002e16 	svccc	0x00002e16
 17c:	6e193c19 	mrcvs	12, 0, r3, cr9, cr9, {0}
 180:	3a0e030e 	bcc	380dc0 <__bss_end__+0x35fd8c>
 184:	390b3b0b 	stmdbcc	fp, {r0, r1, r3, r8, r9, fp, ip, sp}
 188:	0000000b 	andeq	r0, r0, fp
 18c:	10001101 	andne	r1, r0, r1, lsl #2
 190:	03065506 	movweq	r5, #25862	; 0x6506
 194:	250e1b0e 	strcs	r1, [lr, #-2830]	; 0xfffff4f2
 198:	0005130e 	andeq	r1, r5, lr, lsl #6
	...

Disassembly of section .debug_line:

00000000 <.debug_line>:
   0:	00000055 	andeq	r0, r0, r5, asr r0
   4:	002d0003 	eoreq	r0, sp, r3
   8:	01020000 	mrseq	r0, (UNDEF: 2)
   c:	000d0efb 	strdeq	r0, [sp], -fp
  10:	01010101 	tsteq	r1, r1, lsl #2
  14:	01000000 	mrseq	r0, (UNDEF: 0)
  18:	2e010000 	cdpcs	0, 0, cr0, cr1, cr0, {0}
  1c:	79732f2e 	ldmdbvc	r3!, {r1, r2, r3, r5, r8, r9, sl, fp, sp}^
  20:	70656473 	rsbvc	r6, r5, r3, ror r4
  24:	72612f73 	rsbvc	r2, r1, #460	; 0x1cc
  28:	7300006d 	movwvc	r0, #109	; 0x6d
  2c:	74726174 	ldrbtvc	r6, [r2], #-372	; 0xfffffe8c
  30:	0100532e 	tsteq	r0, lr, lsr #6
  34:	00000000 	andeq	r0, r0, r0
  38:	031c0205 	tsteq	ip, #1342177280	; 0x50000000
  3c:	ce030001 	cdpgt	0, 0, cr0, cr3, cr1, {0}
  40:	312f0100 			; <UNDEFINED> instruction: 0x312f0100
  44:	03232321 			; <UNDEFINED> instruction: 0x03232321
  48:	31312017 	teqcc	r1, r7, lsl r0
  4c:	03322421 	teqeq	r2, #553648128	; 0x21000000
  50:	2f342e71 	svccs	0x00342e71
  54:	01000202 	tsteq	r0, r2, lsl #4
  58:	00002301 	andeq	r2, r0, r1, lsl #6
  5c:	1d000300 	stcne	3, cr0, [r0, #-0]
  60:	02000000 	andeq	r0, r0, #0
  64:	0d0efb01 	vstreq	d15, [lr, #-4]
  68:	01010100 	mrseq	r0, (UNDEF: 17)
  6c:	00000001 	andeq	r0, r0, r1
  70:	01000001 	tsteq	r0, r1
  74:	696e6900 	stmdbvs	lr!, {r8, fp, sp, lr}^
  78:	00632e74 	rsbeq	r2, r3, r4, ror lr
  7c:	00000000 	andeq	r0, r0, r0
  80:	00000068 	andeq	r0, r0, r8, rrx
  84:	002c0003 	eoreq	r0, ip, r3
  88:	01020000 	mrseq	r0, (UNDEF: 2)
  8c:	000d0efb 	strdeq	r0, [sp], -fp
  90:	01010101 	tsteq	r1, r1, lsl #2
  94:	01000000 	mrseq	r0, (UNDEF: 0)
  98:	2e010000 	cdpcs	0, 0, cr0, cr1, cr0, {0}
  9c:	79732f2e 	ldmdbvc	r3!, {r1, r2, r3, r5, r8, r9, sl, fp, sp}^
  a0:	70656473 	rsbvc	r6, r5, r3, ror r4
  a4:	72612f73 	rsbvc	r2, r1, #460	; 0x1cc
  a8:	6300006d 	movwvs	r0, #109	; 0x6d
  ac:	2e697472 	mcrcs	4, 3, r7, cr9, cr2, {3}
  b0:	00010053 	andeq	r0, r1, r3, asr r0
  b4:	05000000 	streq	r0, [r0, #-0]
  b8:	01034c02 	tsteq	r3, r2, lsl #24
  bc:	013f0300 	teqeq	pc, r0, lsl #6
  c0:	2f2f302f 	svccs	0x002f302f
  c4:	06022f2f 	streq	r2, [r2], -pc, lsr #30
  c8:	00010100 	andeq	r0, r1, r0, lsl #2
  cc:	02cc0205 	sbceq	r0, ip, #1342177280	; 0x50000000
  d0:	d3030001 	movwle	r0, #12289	; 0x3001
  d4:	02300100 	eorseq	r0, r0, #0, 2
  d8:	01010002 	tsteq	r1, r2
  dc:	c4020500 	strgt	r0, [r2], #-1280	; 0xfffffb00
  e0:	03000104 	movweq	r0, #260	; 0x104
  e4:	020100e0 	andeq	r0, r1, #224	; 0xe0
  e8:	01010002 	tsteq	r1, r2
  ec:	0000017f 	andeq	r0, r0, pc, ror r1
  f0:	00dd0003 	sbcseq	r0, sp, r3
  f4:	01020000 	mrseq	r0, (UNDEF: 2)
  f8:	000d0efb 	strdeq	r0, [sp], -fp
  fc:	01010101 	tsteq	r1, r1, lsl #2
 100:	01000000 	mrseq	r0, (UNDEF: 0)
 104:	2f010000 	svccs	0x00010000
 108:	2f706d74 	svccs	0x00706d74
 10c:	6f626764 	svcvs	0x00626764
 110:	2f726574 	svccs	0x00726574
 114:	2f736262 	svccs	0x00736262
 118:	76656872 			; <UNDEFINED> instruction: 0x76656872
 11c:	376d762d 	strbcc	r7, [sp, -sp, lsr #12]!
 120:	68722d2d 	ldmdavs	r2!, {r0, r2, r3, r5, r8, sl, fp, sp}^
 124:	38783665 	ldmdacc	r8!, {r0, r2, r5, r6, r9, sl, ip, sp}^
 128:	34365f36 	ldrtcc	r5, [r6], #-3894	; 0xfffff0ca
 12c:	6975622f 	ldmdbvs	r5!, {r0, r1, r2, r3, r5, r9, sp, lr}^
 130:	6f62646c 	svcvs	0x0062646c
 134:	68722f74 	ldmdavs	r2!, {r2, r4, r5, r6, r8, r9, sl, fp, sp}^
 138:	38783665 	ldmdacc	r8!, {r0, r2, r5, r6, r9, sl, ip, sp}^
 13c:	34365f36 	ldrtcc	r5, [r6], #-3894	; 0xfffff0ca
 140:	72612d2d 	rsbvc	r2, r1, #2880	; 0xb40
 144:	6f6e2d6d 	svcvs	0x006e2d6d
 148:	6c2d656e 	cfstr32vs	mvfx6, [sp], #-440	; 0xfffffe48
 14c:	78756e69 	ldmdavc	r5!, {r0, r3, r5, r6, r9, sl, fp, sp, lr}^
 150:	756e672d 	strbvc	r6, [lr, #-1837]!	; 0xfffff8d3
 154:	69626165 	stmdbvs	r2!, {r0, r2, r5, r6, r8, sp, lr}^
 158:	622f6668 	eorvs	r6, pc, #104, 12	; 0x6800000
 15c:	646c6975 	strbtvs	r6, [ip], #-2421	; 0xfffff68b
 160:	6975622f 	ldmdbvs	r5!, {r0, r1, r2, r3, r5, r9, sp, lr}^
 164:	612d646c 			; <UNDEFINED> instruction: 0x612d646c
 168:	6e2d6d72 	mcrvs	13, 1, r6, cr13, cr2, {3}
 16c:	2d656e6f 	stclcs	14, cr6, [r5, #-444]!	; 0xfffffe44
 170:	756e696c 	strbvc	r6, [lr, #-2412]!	; 0xfffff694
 174:	6e672d78 	mcrvs	13, 3, r2, cr7, cr8, {3}
 178:	62616575 	rsbvs	r6, r1, #490733568	; 0x1d400000
 17c:	2f666869 	svccs	0x00666869
 180:	74736e69 	ldrbtvc	r6, [r3], #-3689	; 0xfffff197
 184:	2f6c6c61 	svccs	0x006c6c61
 188:	2f62696c 	svccs	0x0062696c
 18c:	2f636367 	svccs	0x00636367
 190:	2d6d7261 	sfmcs	f7, 2, [sp, #-388]!	; 0xfffffe7c
 194:	656e6f6e 	strbvs	r6, [lr, #-3950]!	; 0xfffff092
 198:	6e696c2d 	cdpvs	12, 6, cr6, cr9, cr13, {1}
 19c:	672d7875 			; <UNDEFINED> instruction: 0x672d7875
 1a0:	6165756e 	cmnvs	r5, lr, ror #10
 1a4:	66686962 	strbtvs	r6, [r8], -r2, ror #18
 1a8:	322e392f 	eorcc	r3, lr, #770048	; 0xbc000
 1ac:	692f312e 	stmdbvs	pc!, {r1, r2, r3, r5, r8, ip, sp}	; <UNPREDICTABLE>
 1b0:	756c636e 	strbvc	r6, [ip, #-878]!	; 0xfffffc92
 1b4:	00006564 	andeq	r6, r0, r4, ror #10
 1b8:	2d666c65 	stclcs	12, cr6, [r6, #-404]!	; 0xfffffe6c
 1bc:	74696e69 	strbtvc	r6, [r9], #-3689	; 0xfffff197
 1c0:	0000632e 	andeq	r6, r0, lr, lsr #6
 1c4:	74730000 	ldrbtvc	r0, [r3], #-0
 1c8:	66656464 	strbtvs	r6, [r5], -r4, ror #8
 1cc:	0100682e 	tsteq	r0, lr, lsr #16
 1d0:	05000000 	streq	r0, [r0, #-0]
 1d4:	02050001 	andeq	r0, r5, #1
 1d8:	00010480 	andeq	r0, r1, r0, lsl #9
 1dc:	0100c303 	tsteq	r0, r3, lsl #6
 1e0:	0f030305 	svceq	0x00030305
 1e4:	06010501 	streq	r0, [r1], -r1, lsl #10
 1e8:	2e017103 	adfcss	f7, f1, f3
 1ec:	12032805 	andne	r2, r3, #327680	; 0x50000
 1f0:	03010520 	movweq	r0, #5408	; 0x1520
 1f4:	2805206e 	stmdacs	r5, {r1, r2, r3, r5, r6, sp}
 1f8:	05201203 	streq	r1, [r0, #-515]!	; 0xfffffdfd
 1fc:	206e0301 	rsbcs	r0, lr, r1, lsl #6
 200:	12032805 	andne	r2, r3, #327680	; 0x50000
 204:	1d030520 	cfstr32ne	mvfx0, [r3, #-128]	; 0xffffff80
 208:	28053106 	stmdacs	r5, {r1, r2, r8, ip, sp}
 20c:	03050106 	movweq	r0, #20742	; 0x5106
 210:	08052f06 	stmdaeq	r5, {r1, r2, r8, r9, sl, fp, sp}
 214:	01160501 	tsteq	r6, r1, lsl #10
 218:	01060305 	tsteq	r6, r5, lsl #6
 21c:	2e0f0520 	cfsh32cs	mvfx0, mvfx15, #16
 220:	02000705 	andeq	r0, r0, #1310720	; 0x140000
 224:	21060304 	tstcs	r6, r4, lsl #6
 228:	02000805 	andeq	r0, r0, #327680	; 0x50000
 22c:	01060304 	tsteq	r6, r4, lsl #6
 230:	02002105 	andeq	r2, r0, #1073741825	; 0x40000001
 234:	052d0304 	streq	r0, [sp, #-772]!	; 0xfffffcfc
 238:	04020008 	streq	r0, [r2], #-8
 23c:	20052103 	andcs	r2, r5, r3, lsl #2
 240:	03040200 	movweq	r0, #16896	; 0x4200
 244:	16054906 	strne	r4, [r5], -r6, lsl #18
 248:	03040200 	movweq	r0, #16896	; 0x4200
 24c:	00030501 	andeq	r0, r3, r1, lsl #10
 250:	06030402 	streq	r0, [r3], -r2, lsl #8
 254:	04020001 	streq	r0, [r2], #-1
 258:	01052e03 	tsteq	r5, r3, lsl #28
 25c:	00062e14 	andeq	r2, r6, r4, lsl lr
 260:	04c00205 	strbeq	r0, [r0], #517	; 0x205
 264:	03190001 	tsteq	r9, #1
 268:	0102010a 	tsteq	r2, sl, lsl #2
 26c:	50010100 	andpl	r0, r1, r0, lsl #2
 270:	03000000 	movweq	r0, #0
 274:	00002c00 	andeq	r2, r0, r0, lsl #24
 278:	fb010200 	blx	40a82 <__bss_end__+0x1fa4e>
 27c:	01000d0e 	tsteq	r0, lr, lsl #26
 280:	00010101 	andeq	r0, r1, r1, lsl #2
 284:	00010000 	andeq	r0, r1, r0
 288:	2e2e0100 	sufcse	f0, f6, f0
 28c:	7379732f 	cmnvc	r9, #-1140850688	; 0xbc000000
 290:	73706564 	cmnvc	r0, #100, 10	; 0x19000000
 294:	6d72612f 	ldfvse	f6, [r2, #-188]!	; 0xffffff44
 298:	72630000 	rsbvc	r0, r3, #0
 29c:	532e6e74 			; <UNDEFINED> instruction: 0x532e6e74
 2a0:	00000100 	andeq	r0, r0, r0, lsl #2
 2a4:	02050000 	andeq	r0, r5, #0
 2a8:	000102d4 	ldrdeq	r0, [r1], -r4
 2ac:	02012f03 	andeq	r2, r1, #3, 30
 2b0:	01010002 	tsteq	r1, r2
 2b4:	c8020500 	stmdagt	r2, {r8, sl}
 2b8:	03000104 	movweq	r0, #260	; 0x104
 2bc:	02020137 	andeq	r0, r2, #-1073741811	; 0xc000000d
 2c0:	Address 0x00000000000002c0 is out of bounds.


Disassembly of section .debug_frame:

00000000 <.debug_frame>:
   0:	0000000c 	andeq	r0, r0, ip
   4:	ffffffff 			; <UNDEFINED> instruction: 0xffffffff
   8:	7c020001 	stcvc	0, cr0, [r2], {1}
   c:	000d0c0e 	andeq	r0, sp, lr, lsl #24
  10:	00000020 	andeq	r0, r0, r0, lsr #32
  14:	00000000 	andeq	r0, r0, r0
  18:	00010480 	andeq	r0, r1, r0, lsl #9
  1c:	00000040 	andeq	r0, r0, r0, asr #32
  20:	83200e42 			; <UNDEFINED> instruction: 0x83200e42
  24:	85078408 	strhi	r8, [r7, #-1032]	; 0xfffffbf8
  28:	87058606 	strhi	r8, [r5, -r6, lsl #12]
  2c:	89038804 	stmdbhi	r3, {r2, fp, pc}
  30:	00018e02 	andeq	r8, r1, r2, lsl #28
  34:	0000000c 	andeq	r0, r0, ip
  38:	00000000 	andeq	r0, r0, r0
  3c:	000104c0 	andeq	r0, r1, r0, asr #9
  40:	00000002 	andeq	r0, r0, r2

Disassembly of section .debug_str:

00000000 <.debug_str>:
   0:	732f2e2e 			; <UNDEFINED> instruction: 0x732f2e2e
   4:	65647379 	strbvs	r7, [r4, #-889]!	; 0xfffffc87
   8:	612f7370 			; <UNDEFINED> instruction: 0x612f7370
   c:	732f6d72 			; <UNDEFINED> instruction: 0x732f6d72
  10:	74726174 	ldrbtvc	r6, [r2], #-372	; 0xfffffe8c
  14:	2f00532e 	svccs	0x0000532e
  18:	2f706d74 	svccs	0x00706d74
  1c:	6f626764 	svcvs	0x00626764
  20:	2f726574 	svccs	0x00726574
  24:	2f736262 	svccs	0x00736262
  28:	76656872 			; <UNDEFINED> instruction: 0x76656872
  2c:	376d762d 	strbcc	r7, [sp, -sp, lsr #12]!
  30:	68722d2d 	ldmdavs	r2!, {r0, r2, r3, r5, r8, sl, fp, sp}^
  34:	38783665 	ldmdacc	r8!, {r0, r2, r5, r6, r9, sl, ip, sp}^
  38:	34365f36 	ldrtcc	r5, [r6], #-3894	; 0xfffff0ca
  3c:	6975622f 	ldmdbvs	r5!, {r0, r1, r2, r3, r5, r9, sp, lr}^
  40:	6f62646c 	svcvs	0x0062646c
  44:	68722f74 	ldmdavs	r2!, {r2, r4, r5, r6, r8, r9, sl, fp, sp}^
  48:	38783665 	ldmdacc	r8!, {r0, r2, r5, r6, r9, sl, ip, sp}^
  4c:	34365f36 	ldrtcc	r5, [r6], #-3894	; 0xfffff0ca
  50:	72612d2d 	rsbvc	r2, r1, #2880	; 0xb40
  54:	6f6e2d6d 	svcvs	0x006e2d6d
  58:	6c2d656e 	cfstr32vs	mvfx6, [sp], #-440	; 0xfffffe48
  5c:	78756e69 	ldmdavc	r5!, {r0, r3, r5, r6, r9, sl, fp, sp, lr}^
  60:	756e672d 	strbvc	r6, [lr, #-1837]!	; 0xfffff8d3
  64:	69626165 	stmdbvs	r2!, {r0, r2, r5, r6, r8, sp, lr}^
  68:	622f6668 	eorvs	r6, pc, #104, 12	; 0x6800000
  6c:	646c6975 	strbtvs	r6, [ip], #-2421	; 0xfffff68b
  70:	6372732f 	cmnvs	r2, #-1140850688	; 0xbc000000
  74:	696c672f 	stmdbvs	ip!, {r0, r1, r2, r3, r5, r8, r9, sl, sp, lr}^
  78:	632f6362 			; <UNDEFINED> instruction: 0x632f6362
  7c:	47007573 	smlsdxmi	r0, r3, r5, r7
  80:	4120554e 			; <UNDEFINED> instruction: 0x4120554e
  84:	2e322053 	mrccs	0, 1, r2, cr2, cr3, {2}
  88:	312e3333 			; <UNDEFINED> instruction: 0x312e3333
  8c:	4f495f00 	svcmi	0x00495f00
  90:	6474735f 	ldrbtvs	r7, [r4], #-863	; 0xfffffca1
  94:	755f6e69 	ldrbvc	r6, [pc, #-3689]	; fffff233 <__bss_end__+0xfffde1ff>
  98:	00646573 	rsbeq	r6, r4, r3, ror r5
  9c:	20554e47 	subscs	r4, r5, r7, asr #28
  a0:	20313143 	eorscs	r3, r1, r3, asr #2
  a4:	2e322e39 	mrccs	14, 1, r2, cr2, cr9, {1}
  a8:	30322031 	eorscc	r2, r2, r1, lsr r0
  ac:	30313931 	eorscc	r3, r1, r1, lsr r9
  b0:	2d203532 	cfstr32cs	mvfx3, [r0, #-200]!	; 0xffffff38
  b4:	6f6c666d 	svcvs	0x006c666d
  b8:	612d7461 			; <UNDEFINED> instruction: 0x612d7461
  bc:	683d6962 	ldmdavs	sp!, {r1, r5, r6, r8, fp, sp, lr}
  c0:	20647261 	rsbcs	r7, r4, r1, ror #4
  c4:	70666d2d 	rsbvc	r6, r6, sp, lsr #26
  c8:	656e3d75 	strbvs	r3, [lr, #-3445]!	; 0xfffff28b
  cc:	2d206e6f 	stccs	14, cr6, [r0, #-444]!	; 0xfffffe44
  d0:	7568746d 	strbvc	r7, [r8, #-1133]!	; 0xfffffb93
  d4:	2d20626d 	sfmcs	f6, 4, [r0, #-436]!	; 0xfffffe4c
  d8:	736c746d 	cmnvc	ip, #1828716544	; 0x6d000000
  dc:	6169642d 	cmnvs	r9, sp, lsr #8
  e0:	7463656c 	strbtvc	r6, [r3], #-1388	; 0xfffffa94
  e4:	756e673d 	strbvc	r6, [lr, #-1853]!	; 0xfffff8c3
  e8:	616d2d20 	cmnvs	sp, r0, lsr #26
  ec:	3d686372 	stclcc	3, cr6, [r8, #-456]!	; 0xfffffe38
  f0:	766d7261 	strbtvc	r7, [sp], -r1, ror #4
  f4:	2b612d37 	blcs	184b5d8 <__bss_end__+0x182a5a4>
  f8:	646d6973 	strbtvs	r6, [sp], #-2419	; 0xfffff68d
  fc:	20672d20 	rsbcs	r2, r7, r0, lsr #26
 100:	20324f2d 	eorscs	r4, r2, sp, lsr #30
 104:	6474732d 	ldrbtvs	r7, [r4], #-813	; 0xfffffcd3
 108:	756e673d 	strbvc	r6, [lr, #-1853]!	; 0xfffff8c3
 10c:	2d203131 	stfcss	f3, [r0, #-196]!	; 0xffffff3c
 110:	756e6766 	strbvc	r6, [lr, #-1894]!	; 0xfffff89a
 114:	692d3938 	pushvs	{r3, r4, r5, r8, fp, ip, sp}
 118:	6e696c6e 	cdpvs	12, 6, cr6, cr9, cr14, {3}
 11c:	662d2065 	strtvs	r2, [sp], -r5, rrx
 120:	6772656d 	ldrbvs	r6, [r2, -sp, ror #10]!
 124:	6c612d65 	stclvs	13, cr2, [r1], #-404	; 0xfffffe6c
 128:	6f632d6c 	svcvs	0x00632d6c
 12c:	6174736e 	cmnvs	r4, lr, ror #6
 130:	2073746e 	rsbscs	r7, r3, lr, ror #8
 134:	6f72662d 	svcvs	0x0072662d
 138:	69646e75 	stmdbvs	r4!, {r0, r2, r4, r5, r6, r9, sl, fp, sp, lr}^
 13c:	6d2d676e 	stcvs	7, cr6, [sp, #-440]!	; 0xfffffe48
 140:	20687461 	rsbcs	r7, r8, r1, ror #8
 144:	616d662d 	cmnvs	sp, sp, lsr #12
 148:	652d6874 	strvs	r6, [sp, #-2164]!	; 0xfffff78c
 14c:	6f6e7272 	svcvs	0x006e7272
 150:	6e662d20 	cdpvs	13, 6, cr2, cr6, cr0, {1}
 154:	74732d6f 	ldrbtvc	r2, [r3], #-3439	; 0xfffff291
 158:	2d6b6361 	stclcs	3, cr6, [fp, #-388]!	; 0xfffffe7c
 15c:	746f7270 	strbtvc	r7, [pc], #-624	; 164 <_init-0x10168>
 160:	6f746365 	svcvs	0x00746365
 164:	662d2072 			; <UNDEFINED> instruction: 0x662d2072
 168:	2d736c74 	ldclcs	12, cr6, [r3, #-464]!	; 0xfffffe30
 16c:	65646f6d 	strbvs	r6, [r4, #-3949]!	; 0xfffff093
 170:	6e693d6c 	cdpvs	13, 6, cr3, cr9, cr12, {3}
 174:	61697469 	cmnvs	r9, r9, ror #8
 178:	78652d6c 	stmdavc	r5!, {r2, r3, r5, r6, r8, sl, fp, sp}^
 17c:	73006365 	movwvc	r6, #869	; 0x365
 180:	69746174 	ldmdbvs	r4!, {r2, r4, r5, r6, r8, sp, lr}^
 184:	65722d63 	ldrbvs	r2, [r2, #-3427]!	; 0xfffff29d
 188:	2e636f6c 	cdpcs	15, 6, cr6, cr3, cr12, {3}
 18c:	2e2e0063 	cdpcs	0, 2, cr0, cr14, cr3, {3}
 190:	7379732f 	cmnvc	r9, #-1140850688	; 0xbc000000
 194:	73706564 	cmnvc	r0, #100, 10	; 0x19000000
 198:	6d72612f 	ldfvse	f6, [r2, #-188]!	; 0xffffff44
 19c:	7472632f 	ldrbtvc	r6, [r2], #-815	; 0xfffffcd1
 1a0:	00532e69 	subseq	r2, r3, r9, ror #28
 1a4:	676e6f6c 	strbvs	r6, [lr, -ip, ror #30]!
 1a8:	6e6f6c20 	cdpvs	12, 6, cr6, cr15, cr0, {1}
 1ac:	6e692067 	cdpvs	0, 6, cr2, cr9, cr7, {3}
 1b0:	5f5f0074 	svcpl	0x005f0074
 1b4:	74696e69 	strbtvc	r6, [r9], #-3689	; 0xfffff197
 1b8:	7272615f 	rsbsvc	r6, r2, #-1073741801	; 0xc0000017
 1bc:	735f7961 	cmpvc	pc, #1589248	; 0x184000
 1c0:	74726174 	ldrbtvc	r6, [r2], #-372	; 0xfffffe8c
 1c4:	7a697300 	bvc	1a5cdcc <__bss_end__+0x1a3bd98>
 1c8:	00745f65 	rsbseq	r5, r4, r5, ror #30
 1cc:	70766e65 	rsbsvc	r6, r6, r5, ror #28
 1d0:	666c6500 	strbtvs	r6, [ip], -r0, lsl #10
 1d4:	696e692d 	stmdbvs	lr!, {r0, r2, r3, r5, r8, fp, sp, lr}^
 1d8:	00632e74 	rsbeq	r2, r3, r4, ror lr
 1dc:	696c5f5f 	stmdbvs	ip!, {r0, r1, r2, r3, r4, r6, r8, r9, sl, fp, ip, lr}^
 1e0:	635f6362 	cmpvs	pc, #-2013265919	; 0x88000001
 1e4:	665f7573 			; <UNDEFINED> instruction: 0x665f7573
 1e8:	00696e69 	rsbeq	r6, r9, r9, ror #28
 1ec:	69665f5f 	stmdbvs	r6!, {r0, r1, r2, r3, r4, r6, r8, r9, sl, fp, ip, lr}^
 1f0:	615f696e 	cmpvs	pc, lr, ror #18
 1f4:	79617272 	stmdbvc	r1!, {r1, r4, r5, r6, r9, ip, sp, lr}^
 1f8:	646e655f 	strbtvs	r6, [lr], #-1375	; 0xfffffaa1
 1fc:	61686300 	cmnvs	r8, r0, lsl #6
 200:	4e470072 	mcrmi	0, 2, r0, cr7, cr2, {3}
 204:	31432055 	qdaddcc	r2, r5, r3
 208:	2e392031 	mrccs	0, 1, r2, cr9, cr1, {1}
 20c:	20312e32 	eorscs	r2, r1, r2, lsr lr
 210:	39313032 	ldmdbcc	r1!, {r1, r4, r5, ip, sp}
 214:	35323031 	ldrcc	r3, [r2, #-49]!	; 0xffffffcf
 218:	666d2d20 	strbtvs	r2, [sp], -r0, lsr #26
 21c:	74616f6c 	strbtvc	r6, [r1], #-3948	; 0xfffff094
 220:	6962612d 	stmdbvs	r2!, {r0, r2, r3, r5, r8, sp, lr}^
 224:	7261683d 	rsbvc	r6, r1, #3997696	; 0x3d0000
 228:	6d2d2064 	stcvs	0, cr2, [sp, #-400]!	; 0xfffffe70
 22c:	3d757066 	ldclcc	0, cr7, [r5, #-408]!	; 0xfffffe68
 230:	6e6f656e 	cdpvs	5, 6, cr6, cr15, cr14, {3}
 234:	746d2d20 	strbtvc	r2, [sp], #-3360	; 0xfffff2e0
 238:	626d7568 	rsbvs	r7, sp, #104, 10	; 0x1a000000
 23c:	746d2d20 	strbtvc	r2, [sp], #-3360	; 0xfffff2e0
 240:	642d736c 	strtvs	r7, [sp], #-876	; 0xfffffc94
 244:	656c6169 	strbvs	r6, [ip, #-361]!	; 0xfffffe97
 248:	673d7463 	ldrvs	r7, [sp, -r3, ror #8]!
 24c:	2d20756e 	cfstr32cs	mvfx7, [r0, #-440]!	; 0xfffffe48
 250:	6372616d 	cmnvs	r2, #1073741851	; 0x4000001b
 254:	72613d68 	rsbvc	r3, r1, #104, 26	; 0x1a00
 258:	2d37766d 	ldccs	6, cr7, [r7, #-436]!	; 0xfffffe4c
 25c:	69732b61 	ldmdbvs	r3!, {r0, r5, r6, r8, r9, fp, sp}^
 260:	2d20646d 	cfstrscs	mvf6, [r0, #-436]!	; 0xfffffe4c
 264:	4f2d2067 	svcmi	0x002d2067
 268:	732d2032 			; <UNDEFINED> instruction: 0x732d2032
 26c:	673d6474 			; <UNDEFINED> instruction: 0x673d6474
 270:	3131756e 	teqcc	r1, lr, ror #10
 274:	67662d20 	strbvs	r2, [r6, -r0, lsr #26]!
 278:	3938756e 	ldmdbcc	r8!, {r1, r2, r3, r5, r6, r8, sl, ip, sp, lr}
 27c:	6c6e692d 			; <UNDEFINED> instruction: 0x6c6e692d
 280:	20656e69 	rsbcs	r6, r5, r9, ror #28
 284:	656d662d 	strbvs	r6, [sp, #-1581]!	; 0xfffff9d3
 288:	2d656772 	stclcs	7, cr6, [r5, #-456]!	; 0xfffffe38
 28c:	2d6c6c61 	stclcs	12, cr6, [ip, #-388]!	; 0xfffffe7c
 290:	736e6f63 	cmnvc	lr, #396	; 0x18c
 294:	746e6174 	strbtvc	r6, [lr], #-372	; 0xfffffe8c
 298:	662d2073 			; <UNDEFINED> instruction: 0x662d2073
 29c:	6e756f72 	mrcvs	15, 3, r6, cr5, cr2, {3}
 2a0:	676e6964 	strbvs	r6, [lr, -r4, ror #18]!
 2a4:	74616d2d 	strbtvc	r6, [r1], #-3373	; 0xfffff2d3
 2a8:	662d2068 	strtvs	r2, [sp], -r8, rrx
 2ac:	6874616d 	ldmdavs	r4!, {r0, r2, r3, r5, r6, r8, sp, lr}^
 2b0:	7272652d 	rsbsvc	r6, r2, #188743680	; 0xb400000
 2b4:	2d206f6e 	stccs	15, cr6, [r0, #-440]!	; 0xfffffe48
 2b8:	43495066 	movtmi	r5, #36966	; 0x9066
 2bc:	6e662d20 	cdpvs	13, 6, cr2, cr6, cr0, {1}
 2c0:	74732d6f 	ldrbtvc	r2, [r3], #-3439	; 0xfffff291
 2c4:	2d6b6361 	stclcs	3, cr6, [fp, #-388]!	; 0xfffffe7c
 2c8:	746f7270 	strbtvc	r7, [pc], #-624	; 2d0 <_init-0xfffc>
 2cc:	6f746365 	svcvs	0x00746365
 2d0:	662d2072 			; <UNDEFINED> instruction: 0x662d2072
 2d4:	2d736c74 	ldclcs	12, cr6, [r3, #-464]!	; 0xfffffe30
 2d8:	65646f6d 	strbvs	r6, [r4, #-3949]!	; 0xfffff093
 2dc:	6e693d6c 	cdpvs	13, 6, cr3, cr9, cr12, {3}
 2e0:	61697469 	cmnvs	r9, r9, ror #8
 2e4:	78652d6c 	stmdavc	r5!, {r2, r3, r5, r6, r8, sl, fp, sp}^
 2e8:	5f006365 	svcpl	0x00006365
 2ec:	6572705f 	ldrbvs	r7, [r2, #-95]!	; 0xffffffa1
 2f0:	74696e69 	strbtvc	r6, [r9], #-3689	; 0xfffff197
 2f4:	7272615f 	rsbsvc	r6, r2, #-1073741801	; 0xc0000017
 2f8:	735f7961 	cmpvc	pc, #1589248	; 0x184000
 2fc:	74726174 	ldrbtvc	r6, [r2], #-372	; 0xfffffe8c
 300:	665f5f00 	ldrbvs	r5, [pc], -r0, lsl #30
 304:	5f696e69 	svcpl	0x00696e69
 308:	61727261 	cmnvs	r2, r1, ror #4
 30c:	74735f79 	ldrbtvc	r5, [r3], #-3961	; 0xfffff087
 310:	00747261 	rsbseq	r7, r4, r1, ror #4
 314:	63677261 	cmnvs	r7, #268435462	; 0x10000006
 318:	7a697300 	bvc	1a5cf20 <__bss_end__+0x1a3beec>
 31c:	5f5f0065 	svcpl	0x005f0065
 320:	6362696c 	cmnvs	r2, #108, 18	; 0x1b0000
 324:	7573635f 	ldrbvc	r6, [r3, #-863]!	; 0xfffffca1
 328:	696e695f 	stmdbvs	lr!, {r0, r1, r2, r3, r4, r6, r8, fp, sp, lr}^
 32c:	72610074 	rsbvc	r0, r1, #116	; 0x74
 330:	6c007667 	stcvs	6, cr7, [r0], {103}	; 0x67
 334:	20676e6f 	rsbcs	r6, r7, pc, ror #28
 338:	62756f64 	rsbsvs	r6, r5, #100, 30	; 0x190
 33c:	5f00656c 	svcpl	0x0000656c
 340:	6572705f 	ldrbvs	r7, [r2, #-95]!	; 0xffffffa1
 344:	74696e69 	strbtvc	r6, [r9], #-3689	; 0xfffff197
 348:	7272615f 	rsbsvc	r6, r2, #-1073741801	; 0xc0000017
 34c:	655f7961 	ldrbvs	r7, [pc, #-2401]	; fffff9f3 <__bss_end__+0xfffde9bf>
 350:	7500646e 	strvc	r6, [r0, #-1134]	; 0xfffffb92
 354:	6769736e 	strbvs	r7, [r9, -lr, ror #6]!
 358:	2064656e 	rsbcs	r6, r4, lr, ror #10
 35c:	00746e69 	rsbseq	r6, r4, r9, ror #28
 360:	6e695f5f 	mcrvs	15, 3, r5, cr9, cr15, {2}
 364:	615f7469 	cmpvs	pc, r9, ror #8
 368:	79617272 	stmdbvc	r1!, {r1, r4, r5, r6, r9, ip, sp, lr}^
 36c:	646e655f 	strbtvs	r6, [lr], #-1375	; 0xfffffaa1
 370:	2f2e2e00 	svccs	0x002e2e00
 374:	64737973 	ldrbtvs	r7, [r3], #-2419	; 0xfffff68d
 378:	2f737065 	svccs	0x00737065
 37c:	2f6d7261 	svccs	0x006d7261
 380:	6e747263 	cdpvs	2, 7, cr7, cr4, cr3, {3}
 384:	Address 0x0000000000000384 is out of bounds.


Disassembly of section .debug_loc:

00000000 <.debug_loc>:
	...
   8:	00130000 	andseq	r0, r3, r0
   c:	00010000 	andeq	r0, r1, r0
  10:	00001350 	andeq	r1, r0, r0, asr r3
  14:	00003600 	andeq	r3, r0, r0, lsl #12
  18:	57000100 	strpl	r0, [r0, -r0, lsl #2]
  1c:	00000036 	andeq	r0, r0, r6, lsr r0
  20:	00000040 	andeq	r0, r0, r0, asr #32
  24:	01f30004 	mvnseq	r0, r4
  28:	00009f50 	andeq	r9, r0, r0, asr pc
	...
  3c:	00000013 	andeq	r0, r0, r3, lsl r0
  40:	13510001 	cmpne	r1, #1
  44:	36000000 	strcc	r0, [r0], -r0
  48:	01000000 	mrseq	r0, (UNDEF: 0)
  4c:	00365800 	eorseq	r5, r6, r0, lsl #16
  50:	00400000 	subeq	r0, r0, r0
  54:	00040000 	andeq	r0, r4, r0
  58:	9f5101f3 	svcls	0x005101f3
	...
  6c:	00130000 	andseq	r0, r3, r0
  70:	00010000 	andeq	r0, r1, r0
  74:	00001352 	andeq	r1, r0, r2, asr r3
  78:	00003600 	andeq	r3, r0, r0, lsl #12
  7c:	59000100 	stmdbpl	r0, {r8}
  80:	00000036 	andeq	r0, r0, r6, lsr r0
  84:	00000040 	andeq	r0, r0, r0, asr #32
  88:	01f30004 	mvnseq	r0, r4
  8c:	00009f52 	andeq	r9, r0, r2, asr pc
	...
  98:	00180000 	andseq	r0, r8, r0
  9c:	001a0000 	andseq	r0, sl, r0
  a0:	00050000 	andeq	r0, r5, r0
  a4:	26320076 			; <UNDEFINED> instruction: 0x26320076
  a8:	00001a9f 	muleq	r0, pc, sl	; <UNPREDICTABLE>
  ac:	00003600 	andeq	r3, r0, r0, lsl #12
  b0:	56000100 	strpl	r0, [r0], -r0, lsl #2
	...
  bc:	00000002 	andeq	r0, r0, r2
  c0:	00010100 	andeq	r0, r1, r0, lsl #2
  c4:	00000018 	andeq	r0, r0, r8, lsl r0
  c8:	00000020 	andeq	r0, r0, r0, lsr #32
  cc:	9f300002 	svcls	0x00300002
  d0:	00000020 	andeq	r0, r0, r0, lsr #32
  d4:	00000026 	andeq	r0, r0, r6, lsr #32
  d8:	26540001 	ldrbcs	r0, [r4], -r1
  dc:	2e000000 	cdpcs	0, 0, cr0, cr0, cr0, {0}
  e0:	03000000 	movweq	r0, #0
  e4:	9f7f7400 	svcls	0x007f7400
  e8:	0000002e 	andeq	r0, r0, lr, lsr #32
  ec:	00000032 	andeq	r0, r0, r2, lsr r0
  f0:	00540001 	subseq	r0, r4, r1
  f4:	00000000 	andeq	r0, r0, r0
  f8:	Address 0x00000000000000f8 is out of bounds.


Disassembly of section .debug_ranges:

00000000 <.debug_ranges>:
   0:	ffffffff 			; <UNDEFINED> instruction: 0xffffffff
   4:	00000000 	andeq	r0, r0, r0
   8:	0001034c 	andeq	r0, r1, ip, asr #6
   c:	00010370 	andeq	r0, r1, r0, ror r3
  10:	000102cc 	andeq	r0, r1, ip, asr #5
  14:	000102d4 	ldrdeq	r0, [r1], -r4
  18:	000104c4 	andeq	r0, r1, r4, asr #9
  1c:	000104c8 	andeq	r0, r1, r8, asr #9
	...
  28:	ffffffff 			; <UNDEFINED> instruction: 0xffffffff
  2c:	00000000 	andeq	r0, r0, r0
  30:	000102d4 	ldrdeq	r0, [r1], -r4
  34:	000102d8 	ldrdeq	r0, [r1], -r8
  38:	000104c8 	andeq	r0, r1, r8, asr #9
  3c:	000104cc 	andeq	r0, r1, ip, asr #9
	...
