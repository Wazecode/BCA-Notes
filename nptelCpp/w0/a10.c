#include <stdio.h>

struct result {
	char subject[20];
	int mark;
};

int main() {
	struct result r[] = {
		{"Maths", 95},
		{"Science", 93},
		{"Eng", 80}
	};

	printf("%s ", r[1].subject);
	printf("%d ", (*(r+2)).mark);

	return 0;
}
