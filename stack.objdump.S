
stack.o:     file format elf32-littlearm

SYMBOL TABLE:
00000000 l    df *ABS*	00000000 stack.c
00000000 l    d  .text	00000000 .text
00000000 l    d  .data	00000000 .data
00000000 l    d  .bss	00000000 .bss
00000000 l    d  .note.GNU-stack	00000000 .note.GNU-stack
00000000 l    d  .comment	00000000 .comment
00000000 l    d  .ARM.attributes	00000000 .ARM.attributes
00000000 g     F .text	0000001c callee
0000001c g     F .text	00000004 caller



Disassembly of section .text:

00000000 <callee>:
   0:	b410      	push	{r4}
   2:	4408      	add	r0, r1
   4:	9c01      	ldr	r4, [sp, #4]
   6:	4410      	add	r0, r2
   8:	9902      	ldr	r1, [sp, #8]
   a:	4418      	add	r0, r3
   c:	4420      	add	r0, r4
   e:	9b03      	ldr	r3, [sp, #12]
  10:	4408      	add	r0, r1
  12:	f85d 4b04 	ldr.w	r4, [sp], #4
  16:	4418      	add	r0, r3
  18:	300a      	adds	r0, #10
  1a:	4770      	bx	lr

0000001c <caller>:
  1c:	2026      	movs	r0, #38	; 0x26
  1e:	4770      	bx	lr

Disassembly of section .comment:

00000000 <.comment>:
   0:	43434700 	movtmi	r4, #14080	; 0x3700
   4:	4728203a 			; <UNDEFINED> instruction: 0x4728203a
   8:	5420554e 	strtpl	r5, [r0], #-1358	; 0xfffffab2
   c:	636c6f6f 	cmnvs	ip, #444	; 0x1bc
  10:	6e696168 	powvsez	f6, f1, #0.0
  14:	726f6620 	rsbvc	r6, pc, #32, 12	; 0x2000000
  18:	65687420 	strbvs	r7, [r8, #-1056]!	; 0xfffffbe0
  1c:	702d4120 	eorvc	r4, sp, r0, lsr #2
  20:	69666f72 	stmdbvs	r6!, {r1, r4, r5, r6, r8, r9, sl, fp, sp, lr}^
  24:	4120656c 			; <UNDEFINED> instruction: 0x4120656c
  28:	69686372 	stmdbvs	r8!, {r1, r4, r5, r6, r8, r9, sp, lr}^
  2c:	74636574 	strbtvc	r6, [r3], #-1396	; 0xfffffa8c
  30:	20657275 	rsbcs	r7, r5, r5, ror r2
  34:	2d322e39 	ldccs	14, cr2, [r2, #-228]!	; 0xffffff1c
  38:	39313032 	ldmdbcc	r1!, {r1, r4, r5, ip, sp}
  3c:	2032312e 	eorscs	r3, r2, lr, lsr #2
  40:	6d726128 	ldfvse	f6, [r2, #-160]!	; 0xffffff60
  44:	312e392d 			; <UNDEFINED> instruction: 0x312e392d
  48:	20292930 	eorcs	r2, r9, r0, lsr r9
  4c:	2e322e39 	mrccs	14, 1, r2, cr2, cr9, {1}
  50:	30322031 	eorscc	r2, r2, r1, lsr r0
  54:	30313931 	eorscc	r3, r1, r1, lsr r9
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
  20:	14041201 	strne	r1, [r4], #-513	; 0xfffffdff
  24:	17011501 	strne	r1, [r1, -r1, lsl #10]
  28:	19011803 	stmdbne	r1, {r0, r1, fp, ip}
  2c:	1c021a01 			; <UNDEFINED> instruction: 0x1c021a01
  30:	22021e01 	andcs	r1, r2, #1, 28
  34:	Address 0x0000000000000034 is out of bounds.

