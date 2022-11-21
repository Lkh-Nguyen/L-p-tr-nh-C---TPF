
#include <stdio.h>
int i,j,pt,a[50];
int tong=0,tich=1,count = 0;
void baimot(){	
	printf ("Nhap phan tu cua a[]= ");
	scanf ("%d",&pt);
	for (i=0;i<pt;i++){
		printf ("Nhap cac gia tri cua phan tu %d= ",i);
		scanf ("%d",&a[i]);
		tong += a[i];
		}
	printf ("Trung binh cong la %.2f", (float)tong / pt );
}
void baihai(){
	printf ("Nhap phan tu cua a[]= ");
	scanf ("%d",&pt);
	for(i = 0;i < pt; ++i){
		printf("Nhap phan tu a[%d] = ", i);
		do{
		scanf ("%d",&a[i]);
		if(a[i]<0){
			printf ("Nhap lai phan tu a[%d] = ", i);
		}
		}while (a[i]<0);
		tong += a[i];
	}
	printf ("Tong cac so nguyen duong la %d",tong);
}
void baiba(){
	int k;
	printf ("Nhap so tien $: ");
	scanf ("%d",&k);
	int tien[5] ;
	int i;
	for (i=0;i<5;i++){
		printf ("Nhap 5 loai tien[%d]= ",i);
		scanf ("%d",&tien[i]);
	}
	int count=0;
	i=4;
	while(k!=0){
	count=k / tien[i];
	k=k- tien[i]*count;
	printf ("So tien to %d$ la %d to\n",tien[i],count);
	count =0;
	i--;
	}
}
void bainhap(){
	printf ("Nhap phan tu cua a[]= ");
	scanf ("%d",&pt);
	for (i=1;i<=pt;i++){
		printf ("Nhap cac gia tri cua phan tu %d= ",i);
		scanf ("%d",&a[i]);
		}
}
void maximum(){
	int max;
	max = a[1] ;
	i=2;
	while (i !=pt+1){
	if(max < a[i]){
		max= a[i];
		}
	i++;
	}
	printf ("So lon nhat la %d",max);
	}
void minimum(){
	int min;
	min = a[1] ;
	i=2;
	while (i !=pt+1){
	if(min > a[i]){
		min = a[i];
		}
	i++;
	}
	printf ("\nSo be nhat la %d",min);
	}
void tangdan(){
	int gt;
	for(i=1;i<pt;i++){
		for(j=i+1;j<pt+1;j++){
			if(a[i]<a[j]){
				gt=a[i];
				a[i]=a[j];
				a[j]=gt;
				}
				}
				}
				printf ("Sap xep tang dan la ");
				for(i=1;i<=pt;i++){
					printf ("%5d",a[i]);
					}
}
void giamdan(){
	int gt;
	for(i=1;i<pt;i++){
		for(j=i+1;j<pt+1;j++){
			if(a[i]>a[j]){
				gt=a[i];
				a[i]=a[j];
				a[j]=gt;
				}
				}
				}
				printf ("\nSap xep giam dan la ");
				for(i=1;i<=pt;i++){
					printf ("%5d",a[i]);
					}
}
void baisau(){
	printf ("Nhap phan tu cua a[]= ");
	scanf ("%d",&pt);
	for (i=1;i<=pt;i++){
		printf ("Nhap cac gia tri cua phan tu %d= ",i);
		scanf ("%d",&a[i]);
		if(a[i]>=2){
			for(j=2;j<=a[i]/2;j++){
				if(a[i]%j==0){
					count++;
				}
			}
		if(count == 0){
		tich= tich * a[i];
			}
		count = count - count;
		}
	}	
	printf ("Tich = %ld",tich);
}				
int main(){
	int h;
	printf ("==========||MENU CHUC NANG||==========");
	printf ("\n1.Nhap so nguyen tinh trung binh cong");
	printf ("\n2.Nhap so nguyen duong tinh tong");
	printf ("\n3.Tinh tien 1,5,10,25,50");
	printf ("\n4.Tim so lon nhat va so nho nhat");
	printf ("\n5.Xep tang dan va giam dan");
	printf ("\n6.Tich so nguyen to");
	printf ("\n7.Ket Thuc Menu");
	printf ("\nChuc nang ban muon chon la: ");
	do{
		scanf ("%d",&h);
		switch(h){
			case 1:
				printf ("\n");
				printf ("==========||CHUC NANG SO 1||==========\n");
				baimot();
				printf ("\n");
				break;
			case 2: 
				printf ("\n");
				printf ("==========||CHUC NANG SO 2||==========\n");
				baihai();
				printf ("\n");
				break;
			case 3:
				printf ("\n");
				printf ("==========||CHUC NANG SO 3||==========\n");
				baiba();
				printf ("\n");
				break;
			case 4:
				printf ("\n");
				printf ("==========||CHUC NANG SO 4||==========\n");
				bainhap();
				maximum();
				minimum();
				printf ("\n");
				break;
			case 5:
				printf ("\n");
				printf ("==========||CHUC NANG SO 5||==========\n");
				bainhap();
				tangdan();
				giamdan();
				printf ("\n");
				break;
			case 6:
				printf ("\n");			
				printf ("==========||CHUC NANG SO 6||==========\n");
				baisau();
				printf ("\n");
				break;
			case 7: 
				printf ("==========||THANK FOR USING MENU||==========");
				break;
			default:
			printf ("Chi nhap tu 1 ---> 7: ");
		}
		if (h>=1 && h<=6){
		printf ("Tiep tuc nhap chuc nang 1 --> 7: ");
		}
	}while(h!=7);
	return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
