#include <stdio.h>
#include <math.h>
int main () {
	int i, j;
	printf ("Bang cuu chuong: \n");
	for (i = 1; i <= 10; i++) {
		for (j = 1; j <= 10; j++) {
			printf ("%d * %d = %d\n", i, j, i*j);
		}
		printf("\n\n");
	}
	return 0;
}
