/*************************************************************************
	> File Name: buddy.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Tue 12 Apr 2022 08:23:17 AM CST
 ************************************************************************/

#include<stdio.h>

#define MAX_BLOCKS 1024*1024*32 

struct free_area {
	int start_pfn[1024*1024*32]; ///< page start pfn
	int nr_free;
};
/**< 
 * free_area[0]  => 2^0  => 2^0 *4k;
 * free_area[1]  => 2^1  => 2^1 *4k;
 * free_area[2]  => 2^2  => 2^2 *4k;
 * free_area[3]  => 2^3  => 2^3 *4k;
 * ...
 * free_area[10] => 2^10 => 2^10 *4k;
 * free_area[11] => 2^11 => 2^11 *4k;
 */
struct free_area free_area[12];

int page_size = 4 *1024;
int start_addr = 0x80000000;      
int start_pfn = start_addr >> 12; ///< 0x800000
int max_order = 11;               ///< max area = 4K * 2^11 = 8M
int total_mem = (16 + 4) *1024;   ///< 20M 


 //8 ^ (1 << 1) = 8 ^ 2 = 10
int buddy() 
{
	int want_order = 0, 
	int order = want_order;
	int temp_order = max_order;
	int i = 0;

	for (;total_mem / (1 << temp_order); total_mem -= (1 << order), i++) {
		free_area[temp_order].start_pfn[i] = start_pfn + (1 << temp_order);
	}

	while (order <= max_order) {
		for (int i = 0; i < MAX_BLOCKS; i++)
			if (free_area[order].nr_free && ((alloc_pfn = free_area[order].start_pfn[i]) != 0)) {
				if (want_order == order)
					goto alloc_done;
				else { ///< 
					order++;
				}
			}

	} 
alloc_done:



	return 0;
}

 
int main()
{
	int start_pfn, buddy_pfn, order;
	int temp = 1;

	order = 0;
	start_pfn = 0x000000;

	while (order < 12) {
		buddy_pfn = start_pfn ^(1 << order);
		printf("order = %.2d, 2^order = %.8d, buddy pfn = %#x, buddy_pfn & start_pfn = %#x\n", order++, temp, buddy_pfn, buddy_pfn & start_pfn);
		temp = 2*temp;
	}
	printf("-------------------------------------------------------------------------------\n");
	order = 0;
	temp = 1;
	start_pfn = 0x40;

	while (order < 12) {
		buddy_pfn = start_pfn ^(1 << order);
		printf("order = %.2d, 2^order = %.8d, buddy pfn = %#x, buddy_pfn & start_pfn = %#x\n", order++, temp, buddy_pfn, buddy_pfn & start_pfn);
		temp = 2*temp;
	}

	printf("-------------------------------------------------------------------------------\n");
	order = 0;
	temp = 1;
	start_pfn = 0x80000000;

	while (order < 12) {
		buddy_pfn = start_pfn ^(1 << order);
		printf("order = %.2d, 2^order = %.8d, buddy pfn = %#x, buddy_pfn & start_pfn = %#x\n", order++, temp, buddy_pfn, buddy_pfn & start_pfn);
		temp = 2*temp;
	}
	printf("-------------------------------------------------------------------------------\n");
	order = 0;
	temp = 1;
	start_pfn = 0x240;

	while (order < 12) {
		buddy_pfn = start_pfn ^(1 << order);
		printf("order = %.2d, 2^order = %.8d, buddy pfn = %#x, buddy_pfn & start_pfn = %#x\n", order++, temp, buddy_pfn, buddy_pfn & start_pfn);
		temp = 2*temp;
	}
	printf("-------------------------------------------------------------------------------\n");

	return 0;
}	
