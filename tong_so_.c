#include <stdio.h>
int main () {
	int n, i, tong=0;
	printf ("Nhap vao so n: ");
	scanf ("%d", &n);
	for (i = 1; i <= n; i++){
		tong = tong + i;
	}
	printf ("Tong cua %d so dau cua day la: %d", n, tong);
	return 0;
}
