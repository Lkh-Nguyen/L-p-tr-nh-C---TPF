#include <stdio.h>
int a[50],i,j,pt,temp;
void nhap(){
		printf ("Nhap phan tu cua a[]= ");
	scanf ("%d",&pt);
	for (i=0;i<pt;i++){
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
void Sapxepgiamdan(){
int tg;
for( i = 0; i < pt - 1; i++){
for( j = i + 1; j < pt; j++){
if(a[i] < a[j]){
// Hoan vi 2 so a[i] va a[j]
tg = a[i]; // tg=1
a[i] = a[j]; //a[0]=2 ;
a[j] = tg; // a[1]=1;
}
}
}
printf("\nMang da sap xep giam dan la: ");
for( i = 0; i < pt; i++){
printf("%5d", a[i]);
}
}
void Sapxeptangdan(){
int tg;
for( i = 0; i < pt - 1; i++){
for( j = i + 1; j < pt; j++){
if(a[i] > a[j]){
// Hoan vi 2 so a[i] va a[j]
tg = a[i]; // tg=1
a[i] = a[j]; //a[0]=2 ;
a[j] = tg; // a[1]=1;
}
}
}
printf("\nMang da sap xep tang dan la: ");
for( i = 0; i < pt; i++){
printf("%5d", a[i]);
}
}
int main(){
	nhap();
//	maximum();
//	minimum();
	Sapxepgiamdan();
	Sapxeptangdan();
	return 0;
}
		
