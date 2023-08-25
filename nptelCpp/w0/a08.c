#include <stdio.h>


int main() {
	int a[5][10][20];

	a[2][6][10] = 10;

	printf("%d", *(*(*(a+2)+ 6)+10));

	return 0;
}


