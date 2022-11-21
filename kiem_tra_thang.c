#include <stdio.h>
int main () {
	int a;
	printf ("Nhap so thang vao: ");
	scanf ("%d", &a);
	if (a>0 && a<12) {
		switch (a) {
			case 1 :
			case 2 :
			case 3 :
				printf ("Thang nay la quy 1");
			break;
			case 4 :
			case 5 :
			case 6 :
				printf ("Thang nay la quy 2");
			break;
			case 7 :
			case 8 :
			case 9 :
				printf ("Thang nay la quy 3");
			break;
			case 10 :
			case 11 :
			case 12 :
				printf ("Thang nay la quy 4");
			default :
				printf ("Khong ton tai thang nay");
		}
	}
	return 0;
}
