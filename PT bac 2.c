#include <stdio.h>
#include <math.h>
int a,b,c;
void nhap(){
	printf ("Nhap a: ");
	scanf ("%d",&a);
	printf ("Nhap b: ");
	scanf ("%d",&b);
	printf ("Nhap c: ");
	scanf ("%d",&c);
}
void xdnghiem(){
	float denta,t1,t2,t;
	denta = b*b - 4*a*c;
	if (denta > 0){
		t1=(-b+sqrt(denta))/2*a;
		t2=(-b-sqrt(denta))/2*a;
		printf ("phuong trinh co 2 nghiem la %.2f va %.2f",t1,t2);
	}else if(denta==0){
		t=-b/2*a;
		printf ("Phuong trinh co nghiem kep la %.2f",t);
	}else 
		printf ("Phuong trinh vo nghiem");
}
int main (){
	nhap();
	xdnghiem();
	return 0;
}
