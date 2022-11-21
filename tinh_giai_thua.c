#include <stdio.h>
int main ()
 {
 	int n;
 	int i;
 	long gt = 1;
 	printf ("Nhap so tu nhien n: ");
 	scanf ("%d", &n);
 	if (n==0)
 	    gt = 1;
 	else
	    for(i = 1; i <=n; i++){
 		gt = gt * i;
 	}
 	printf ("giai thua cua %d! la %ld", n, gt);
 	return 0;
}
