//6. Nh?p v�o 1 chu?i v� xu?t chu?i d� ra theo chi?u ngu?c l?i:
//V� d?: Nh?p v�o�tran van thoa in ra�aoht nav nart

#include<stdio.h>
#include<conio.h>
 
 int main (){
 	char str[100];
 	printf("Nhap ho va ten cua ban: ");
 	gets(str);
 	int count=0;
 	char* p=&str[0];
 	while(*p!='\0'){
 		count++;
 		p++;
	 }
 	printf("Do dai chuoi la: %d",count);
 	printf("\n");
 	
 	int i;
 	for(i=count-1;i>=0;i--){
 		printf("%c",str[i]);
	 }
 	return 0;
 }
