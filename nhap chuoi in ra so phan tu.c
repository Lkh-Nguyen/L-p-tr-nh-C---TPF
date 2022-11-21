#include <stdio.h>
#include <conio.h>
int string_ln(char*p) /* p=&str[0] */
{
	int count = 0;
	//Null= \0;
	while(*p != '\0'){
		count++;
		p++;
	}
	return count;
}

int main (){
	char str[20];
	int length;
	printf ("\nnhap chuoi bat ki: ");
	gets(str);
	
	length= string_ln(str);
	printf("\ndo dai chuoi %s la %d ",str,length);
	return 0;
}
