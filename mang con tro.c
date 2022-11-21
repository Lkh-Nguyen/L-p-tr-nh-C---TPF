#include <stdio.h>

int main (){
	int a[30];
	int pt;
	printf("nhap phan tu: ");
	scanf("%d",&pt);
	int i;
	for(i=0;i<pt;i++){
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
		}
		
	for(i=0;i<pt;i++){
		printf("\na[%d]= %d",i,a[i]);
		}
	printf("\n");
	for(i=0;i<pt;i++){
		printf("\na[%d]= %p",i,&a[i]);
		}
		
	int* p;
	p=&a;
	printf("\n");
	for(i=0;i<pt;i++){
		printf("\na[%d]= %d",i,*p);
		p++;
		}	
	printf("\n");
	for(i=0;i<pt;i++){
		printf("\na[%d]= %x",i,p);
		p++;
		}
		
		
	
	int b[5]={1,2,3};
	int* c=&b;
	for(i=0;i<3;i++){
	printf("\nb[%d]=%d",i,*(c+i));	
		}
	
	for(i=0;i<3;i++){
	printf("\nb[%d]=%x",i,(c+i));	
		}
			
			
	return 0;
}



































