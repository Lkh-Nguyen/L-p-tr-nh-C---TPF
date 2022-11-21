//Tính t?ng giá tr? các ph?n t? trong m?ng s? d?ng con tr?
#include <stdio.h>
int main (){
	int i,pt,a[50];
	int tong=0;
	int *contro;
	printf ("Nhap phan tu trong mang: ");
	scanf ("%d",&pt);
	for(i=0;i<pt;i++){
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	contro = a;
	for(i=0;i<pt;i++){
//		tong= tong + *(contro + i);
		tong = tong + *contro;
		contro++;
	}
	printf ("Tong= %d",tong);
	return 0;
}
