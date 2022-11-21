#include <stdio.h>
int main () {
	int a; 
	printf("Nhap so diem: ");
	scanf ("%d", &a);
	switch (a) {
		case 5 :
			printf("Hoc sinh trung binh");
			break;
		case 7 :
			printf("Hoc sinh kha");
			break;
		case 9 :
			printf("Hoc sinh gioi");
			break;
		default :
			printf("Chua xep loai duoc"); 
	}
}
