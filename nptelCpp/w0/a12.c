#include <stdio.h>

int main() {
	int array[] = {10, 20, 30, 40, 50};
	int *ip, i;

	for(ip = array + 4, i = 0; i < 5; i++)
		printf("%d ", (-i)[ip] );

	return 0;

}
