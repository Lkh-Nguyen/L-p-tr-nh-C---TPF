#include <stdio.h>
#include <conio.h>
#define MAX 30

int main(){
	int size,i,arr[MAX];
	int *ptr;
	ptr= &arr[0];
	
	printf("Nhap kich thuoc mang: ");
	scanf("%d",&size);
	
	printf("\nNhap %d so nguyen vao trong mang: \n",size);
	for(i=0;i<size;i++){
		printf("arr[%d]= ",i);
		scanf("%d",ptr);
		ptr++;
	}
	
	ptr= &arr[size-1];
	
	printf("\nHien thi cac phan tu theo chieu dao nguoc: ");
	 
	for(i=size-1;i>=0;i--){
		printf("\nPhan tu %d la %d",i,*ptr);
		ptr--;
	}
	
	return 0;
}
