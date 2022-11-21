 	#include <stdio.h>
int i,tong=0,pt;

void NhapMang(int arr[], int pt){
for(i = 0;i < pt; ++i){
printf("\nNhap phan tu a[%d] = ", i);
do{
		scanf ("%d",&arr[i]);
		if(arr[i]<0){
			printf ("Nhap lai phan tu arr[%d] = ", i);
		}
		}while (arr[i]<0);
		tong += arr[i];
	}
	printf ("%d",tong);
}
int main(){
int arr[pt];
printf("\nNhap so luong phan tu: ");
do{
scanf("%d", &pt);
}while(pt<0||pt>50);
printf("\n======NHAP MANG=====\n");
NhapMang(arr, pt);
return 0;
}


