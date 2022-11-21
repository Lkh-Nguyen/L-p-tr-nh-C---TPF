#include <stdio.h>
int main () { 
int i=0;
int n, tong = 0;
printf("Nhap vao so n: ");
scanf("%d",&n);
while(i++<n) {
	tong = tong + i; //tong+=i
}
printf("\nTong: %d", tong);
return 0;
}
