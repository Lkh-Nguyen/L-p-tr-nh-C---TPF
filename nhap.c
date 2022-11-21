#include <stdio.h>

int Countnumber(){
	int count =0;
	char a[20];
	printf("Input string: ");
	gets(a);
	char* p = &a[0];
	while (*p != '\0'){
		if(*p >= '0' && *p <= '9'){
			count++;
			}
		p++;
		}
		return count;
	}
int main (){
	int three3;
	three3 = Countnumber();
					printf("Number positive numbers: %d",three3);
		return 0;
		}		
