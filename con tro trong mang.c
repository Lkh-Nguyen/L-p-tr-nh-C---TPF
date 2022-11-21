#include <stdio.h>
int main (){
	int arr[5]={109,103,105,107,101};
	int *ptr=arr;
	int i;
	for(i=0;i<5;i++){
		printf("\ndia chi o nho cua a[%d]= %x",i,(ptr+i));
		printf("\nGia tri cua a[%d]= %d",i,*(ptr+i));
		
	}
}
