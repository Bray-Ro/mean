#include <string.h>
#include <stdio.h>

#include "mean.h"


int main() {

	int data_set[255] = {1, 1, 2, 2, 9, 9};
	int length = 6;
	printf("Mean: %d\n", find_mean(data_set, length));
	printf("M.A.D: %d\n", find_MAD(data_set, length));
	return 0;
}






