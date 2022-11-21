// Nhap vao mot so nguyen, in ra bang cuu chuong cua so do. Lap lai su dung lenh do while
#include <Stdio.h>
int main (){
	int n, i;
	do {
	printf ("Nhap vao so: ");
	scanf("%d", &n);
	printf ("Bang cuu chuong cua so %d la", n);
    i = 1;
    do {
		printf (" \n%d * %d = %d", n, i, n*i);
	} while (i++<=9);
   } while (n<=0);
return 0;
}
