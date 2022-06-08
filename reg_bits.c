/*************************************************************************
	> File Name: bits.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Wed 27 Apr 2022 04:35:48 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>


static inline uint32_t __rbit(uint32_t value)
{
	uint32_t result;

	uint32_t s = (4U /*sizeof(v)*/ * 8U) - 1U; /* extra shift needed at end */

	result = value;                      /* r will be reversed bits of v; first get LSB of v */
	for (value >>= 1U; value != 0U; value >>= 1U) {
		result <<= 1U;
		result |= value & 1U;
		s--;
	}
	result <<= s;                        /* shift when v's highest bits are zero */

	return result;
}

static inline uint8_t __clz(uint32_t data)
{

	uint32_t count = 0U;
	uint32_t mask = 0x80000000U;

	if (data == 0U) { return 32U; }

	while ((data & mask) == 0U)
	{
		count += 1U;
		mask = mask >> 1U;
	}
	return count;
}

#define qspi_set_bit(reg, bit)     ((reg) |= (bit))
#define qspi_clear_bit(reg, bit)   ((reg) &= ~(bit))
#define __qspi_read_bit(reg, bit)  ((reg) & (bit))
#define qspi_read_bit(reg, bit)    (__qspi_read_bit(reg, bit) >> pos(bit))

#define qspi_clear_reg(reg)        ((reg) = (0x0))
#define qspi_write_reg(reg, val)   ((reg) = (val))
#define qspi_read_reg(reg)         ((reg))
#define qspi_modify_reg(reg, clearmask, setmask) \
		qspi_write_reg((reg), (((qspi_read_reg(reg)) & (~(clearmask))) | (setmask)))

#define pos(val)     (__clz(__rbit(val)))

#define qspi_modify_reg_single(reg, clearmask, setmask) \
		qspi_write_reg((reg), (((qspi_read_reg(reg)) & (~(clearmask))) | ((setmask) << (pos(clearmask)))))

#define qspi_modify_reg_multi(reg, clearmask, setmask) \
		qspi_write_reg((reg), (((qspi_read_reg(reg)) & (~(clearmask))) | (setmask)))

struct qspi {
	int CR0;
	int CR1;
};	
struct qspi QSPI;

#define CR0_FRAME_SIZE_Pos 4   // [7:4]
#define CR0_FRAME_SIZE_Msk (0xF << CR0_FRAME_SIZE_Pos) // [7:4]
#define CR0_FRAME_SIZE     CR0_FRAME_SIZE_Msk

#define CR0_FIFO_SIZE_Pos 28   // [31:28]
#define CR0_FIFO_SIZE_Msk (0xF << CR0_FIFO_SIZE_Pos) // [31:28]
#define CR0_FIFO_SIZE     CR0_FIFO_SIZE_Msk

#define CR0_POL_Pos 0   // [0]
#define CR0_POL_Msk (0x1 << CR0_POL_Pos) // [0]
#define CR0_POL     CR0_POL_Msk

#define CR0_PHA_Pos 1   // [1]
#define CR0_PHA_Msk (0x1 << CR0_PHA_Pos) // [1]
#define CR0_PHA     CR0_PHA_Msk

int main()
{
	struct qspi *qspi_obj = &QSPI;

	printf("[7:4] = 8 >>: %#x\n", qspi_modify_reg_single(qspi_obj->CR0,  CR0_FRAME_SIZE, 8));
	printf("[31:28] = 8 >>: %#x\n", qspi_modify_reg_single(qspi_obj->CR0,  CR0_FIFO_SIZE, 8));
	printf("[0] = 1 >>: %#x\n", qspi_modify_reg_single(qspi_obj->CR0,  CR0_POL, 1));
	printf("[1] = 1 >>: %#x\n", qspi_modify_reg_single(qspi_obj->CR0,  CR0_PHA, 1));

	printf("[31:28] = 8, [7:4] = 8, [1] = 1, [0] = 1 >>: %#x\n", 
		   qspi_modify_reg_multi(qspi_obj->CR0,  
								CR0_FIFO_SIZE | CR0_FRAME_SIZE | CR0_POL | CR0_PHA, 
								8 << pos(CR0_FRAME_SIZE ) |
								8 << pos(CR0_FIFO_SIZE ) |
								1 << pos(CR0_PHA) |
								1 << pos(CR0_POL)
								));

	printf("qspi_read_bit([7:4]) = %#x\n", __qspi_read_bit(qspi_obj->CR0,  CR0_FRAME_SIZE) >> pos(CR0_FRAME_SIZE));
	printf("qspi_clear_bit([7:4]) = %#x\n", qspi_clear_bit(qspi_obj->CR0,  CR0_FRAME_SIZE));
	printf("qspi_set_bit([7:4]) = %#x\n", qspi_set_bit(qspi_obj->CR0,  CR0_FRAME_SIZE));
	printf("qspi_read_bit([7:4]) = %#x\n", qspi_read_bit(qspi_obj->CR0,  CR0_FRAME_SIZE));
	printf("qspi_read_reg(CR0) = %#x\n", qspi_read_reg(qspi_obj->CR0));
	

	return 0;
}

