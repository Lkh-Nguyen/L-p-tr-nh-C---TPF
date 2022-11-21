//noi 2 chuoi trong C

#include <stdio.h>
#include <conio.h>

int main (){
	char str1[100], str2[100];
	printf ("nhap chuoi 1: ");
	gets(str1);
	printf ("\nnhap chuoi 2: ");
	gets(str2);
	
	int count1 = 0;
	char* p1=&str1;
	while(*p1 != '\0'){
		count1++;
		p1++;
	}
	
	// n?i s2 thành s1
	int j;
  	for (j = 0; str2[j] != '\0'; ++j, ++count1) {
    str1[count1] = str2[j];
  	}
  	// ch?m d?t chu?i s1
  	str1[count1] = '\0';
  	printf("\n\nChuoi sau cùng: ");
  	puts(str1);
	
	return 0;
}
