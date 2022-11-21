#include <stdio.h>
int main () {
	
float a, b, c;
printf ("Nhap vao so km va so fuel: ");
scanf ("%f%f", &a, &b);
c = a/b;
printf ("Ket qua tieu thu trung binh la: %.2fkm/lt\n",c);
return 0;
}
