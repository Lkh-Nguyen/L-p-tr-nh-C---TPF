#include <stdio.h>
int main () {
	int a;
	printf ("Nhap vao so: ");
	scanf ("%d", &a);
if (a>0) {
	switch (a%2) {
		case 0 :
			printf ("Day la so chan");
		break;
		case 1 :
			printf ("Day la so le");
		break;
		}
	}
	return 0;
}
