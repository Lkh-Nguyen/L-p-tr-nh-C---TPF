#include <stdio.h>
int main () {
	int a;
	printf ("Nhap vao so: ");
	scanf ("%d", &a);
	if (a>0 && a<8 ) {
		switch (a) {
			case 1 :
				printf ("Chu nhat");
			break;
			case 2 :
				printf ("Thu hai");
			break;
			case 3 :
				printf ("Thu ba");
			break;
			case 4 :
				printf ("Thu tu");
			break;
			case 5 :
				printf ("Thu nam");
			break;
			case 6 :
				printf ("Thu sau");
			break;
			case 7 :
				printf ("Thu bay");
			break;
			}
	}
	return 0;
}
