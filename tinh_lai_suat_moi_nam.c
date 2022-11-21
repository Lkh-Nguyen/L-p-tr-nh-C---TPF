#include <stdio.h>
int main () {
	float a, b, c;
	int n, i;	
	printf ("Nhap so tien gui ban dau: ");
	scanf ("%f", &a);
	printf ("Nhap tien lai moi nam: ");
	scanf ("%f", &b);
	printf ("Nhap so nam: ");
	scanf ("%d", &n);
	for (i = 1; i<=n; i++) {
	    c = a * (1+(b/100)*n);
		}
	printf ("So tien nhan duoc sau %d nam la: %.2f", n, c);
	return 0;
}
