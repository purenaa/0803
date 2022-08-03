#include <stdio.h>

int main()
{
	char x, y;
	x = -128;
	y = -x;
	
	if (x == y) 				printf("1\n");
	if ((x - y) == 0)			printf("2\n");
	if ((x + y) == 2 * x)		printf("3\n");
	if (x != -y)				printf("4\n");

	//if (x == y) 				printf("%d\n", x);
	//if ((x - y) == 0)			printf("%d\n", x);
	//if ((x + y) == 2 * x)		printf("%d\n", x);
	//if (x != -y)				printf("%d\n", x);

	return 0;
}

