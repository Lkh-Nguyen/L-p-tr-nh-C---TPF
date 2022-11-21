#include <stdio.h>
int main ()  {
	int a;
	printf ("Nhap so: ");
	scanf ("%d", &a);
	switch(a) {
		case 1 :
		printf ("*");
		break; 
		case 2 :
		printf ("**");
		break; 
		case 3 : 
		printf ("***");
		break;
	}
	return 0;
}
