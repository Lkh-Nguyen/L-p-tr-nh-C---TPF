#include <stdio.h>
int a[50],i,j,pt,gt;
void tangdan(){
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
int main(){
	printf ("Nhap phan tu cua a[]= ");
	scanf ("%d",&pt);
	for (i=1;i<=pt;i++){
		printf ("Nhap cac gia tri cua phan tu %d= ",i);
		scanf ("%d",&a[i]);
		}
	tangdan();
	giamdan();
	return 0;
}
		
