//nhap 1 day so nguyen tu ban phim den khi gap so 0 thi dung. In ra tong cac so nguyen duong
#include <stdio.h>
int main () {
	int n;
	int tong = 0;
	do {
		printf ("Nhap vao so: ", n);
		scanf ("%d",&n);
    	if (n<0)
        	continue;
	    tong = tong + n;  	
   	} while (n != 0);
    printf ("Tong cac so nguyen duong la: %d", tong);
	return 0;
}
