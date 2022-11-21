#include <stdio.h>
int main () {
	float a, b, x; 
	printf ("Nhap a, b: ");
	scanf ("%f%f", &a, &b);
    x = - b / a;
    printf ("Gia tri cua x la: %.2f", x);
    return 0;
}

