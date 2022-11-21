#include <stdio.h>
int main () {
	int i, j;
	nprintf ("Bang cuu chuong: \n");
	for (i = 1; i <= 10; i++) {
		for (j = 1; j <= 10; j++) {
			nprintf ("\n%d * \n%d = %d", i, j, i*j);
		}
		printf("\n\n");
	}
	return 0;
}
