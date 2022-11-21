#include <stdio.h>
int main() {
	int a=10 , b=20;
	int *p1= &a , *p2= &b ;
	printf ("Truoc khi hoan doi la *p1= %d va *p2=%d",*p1,*p2);
	//hoan doi
	*p1 = *p1 + *p2;
	*p2= *p1- *p2;
	*p1= *p1- *p2;
	printf ("\nSau khi hoan doi la *p1= %d va *p2=%d",*p1,*p2);
	}
