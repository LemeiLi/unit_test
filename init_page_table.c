/*************************************************************************
	> File Name: swapper_page_table.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Mon 27 Sep 2021 01:57:21 PM CST
 ************************************************************************/

#include<stdio.h>

#define MMU_FLAG 0xC1E
#define SECTION_ORDER 20
#define SECTION_SIZE  1 << SECTION_ORDER

int _map(unsigned long phy_page_table_addr, 
		 unsigned long section_size, 
		 unsigned long kernel_phy_addr, 
		 unsigned long kernel_virtual_addr_start, 
		 unsigned long kernel_virtual_addr_end)
{

	printf("entry index | entry_phy_addr: | entry content: | virtual addr \n");
	printf("------------------------------------------------------------- \n");
	for (unsigned int i = 0, j = 0; i < 4096; i++) {
		if (i*section_size >= (kernel_virtual_addr_start - section_size + 1) && i*section_size <= (kernel_virtual_addr_end + section_size - 1)) {
			printf(" %10u | %15lx | %14lx | %10lx\n", 
				   i, 
				   phy_page_table_addr, 
				   ((kernel_phy_addr >> SECTION_ORDER) << SECTION_ORDER) + j*section_size | MMU_FLAG,  
				   i*section_size);
			j++;
		}
		phy_page_table_addr += 4;
	}

	return 0;
}

int main()
{
	_map(0x50004000, SECTION_SIZE, 0x50008000, 0xc0008000, 0xc5331058);
	//_map(0xC0004000, SECTION_SIZE, 0xC0008000, 0xc0008000, 0xc5331058);

	return 0;
}
