/*************************************************************************
	> File Name: struct.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Tue 24 May 2022 05:17:31 PM CST
 ************************************************************************/

#include<stdio.h>

struct spi_init {
	int pol;
	int pha;
	int frame_size;
};

struct spi_handler {
	struct spi_init init;
	int tx_counter;
	int rx_counter;
};

int main()
{
	struct spi_handler *hspi = &(struct spi_handler) {
		.init = {
			.pol = 1,
			.pol = 0,
		},
		.tx_counter = 88,
	};

	printf("hspi->init.frame_size = %d\n", hspi->init.frame_size);
	printf("hspi->rx_counter = %d\n", hspi->rx_counter);
	printf("hspi->tx_counter = %d\n", hspi->tx_counter);

	return 0;
}


