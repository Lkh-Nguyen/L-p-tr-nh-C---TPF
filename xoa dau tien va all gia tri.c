#include <stdio.h>
int i,a[100],v,j;
int main (){
	printf ("Nhap so phan tu cua a[]: ");
	do{
	scanf ("%d",&v);
	if(v<=0 || v>=100){
		printf("So phan tu 0-->100 ");
		printf("\nYeu cau nhap lai: ");
		}
	}
	while(v<=0 || v>100);
	for(i=0;i<v;i++){
		printf ("Gia tri cua a[%d]= ",i);
		scanf("%d",&a[i]);
		}
	printf ("Gia tri ban muon xoa: ");
	int remove,count=0;
	scanf("%d",&remove);
	for (j=0;j<v;j++){ // bo for de thanh xoa gia tri dau tien
	for(i=0;i<v;i++){
		if(a[i]==remove){
			count++;
			for(i;i<v;i++){
				a[i]=a[i+1];
				}
				}
				}
			}
	for(i=0;i<v-count;i++){
		printf("\na[%d]=%d",i,a[i]);
			}
	return 0;
	}
