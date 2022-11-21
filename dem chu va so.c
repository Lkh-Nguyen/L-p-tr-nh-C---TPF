#include <stdio.h>
#include <conio.h>
 int main (){
 	char str[50];
 	printf ("\nnhap chuoi bat ki: ");
 	gets(str);
 	int count=0;
 	char *ptr;
 	ptr = &str[0];
		switch(*ptr){
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 0:	
		count++;
	}
	printf("\ndo dai chuoi la %d ",count);
 	return 0;
 	}
