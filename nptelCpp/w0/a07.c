#include <stdio.h>

int main() {
	int x = 1;
	int y;

	y = (x=x+4, x*7);

	printf("%d", y);
	
	return 0;
}
