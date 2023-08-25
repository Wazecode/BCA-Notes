#include <stdio.h>

int main() {
	int x = 8 , y , z;

	y = --x;
	z = x--;
	
	printf("%d %d %d", x, y, z);
	return 0;
}
