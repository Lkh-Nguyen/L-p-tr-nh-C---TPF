#include <stdio.h>
int i,j,pt,a[50],tich=1,count=0;
void baisau(){
	printf ("Nhap phan tu cua a[]= ");
	scanf ("%d",&pt);
	for (i=1;i<=pt;i++){
		printf ("Nhap cac gia tri cua phan tu %d= ",i);
		scanf ("%d",&a[i]);
		for(j=2;j<=a[i]/2;j++){
			if(a[i]/j){
			count++ ;
			}
		if(count == 0){
		tich= tich * a[i] ;
			}
		}
}
	printf ("%d",tich);
}
int main (){
	baisau();
	return 0;
	}

