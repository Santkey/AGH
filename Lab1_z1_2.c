#include <stdio.h>

int main()
{
	// Formatowanie liczb calkowitych
	printf("%10d", 10+1);
	printf("%10d\n", 10+2);
	printf("%10d", 10+3);
	printf("%10d\n", 10+4);
	printf("%10d%10d\n", 15, 16);
	printf("%+10d%+10d\n", 17, -18);
	printf("%010d\n", 19);
	printf("% d\n", 20);
	printf("% d\n", -21);
	printf("%3d\n\n", 10/3);
	// Formatowanie liczb rzeczywistych
	printf("%15.3f\n", 3.14*10);
	printf("%15.3f\n", 3.14*100);
	printf("%-15.3f\n", 3.14*100);
	printf("%+15.1f\n", 3.14);
	printf("%+15.1f\n", -3.14);
	printf("%.2f\n", 1.2345);
	printf("%.0f\n", 1.2345*10);
	printf("%15f\n", 10.0/3);
	return 0;
}