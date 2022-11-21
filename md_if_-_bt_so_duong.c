//#include <stdio.h> 
//int main() {
//	int a;
//	printf ("Nhap vao so: ") ;
//	scanf ("%d", &a) ;
//	if ( a >> 0 ) printf ("a la so duong") ;
//	else printf ("a khong phai so duong");
//	return 0; 
//}

#include <stdio.h> 
int main ()  {
	int a;
	printf (" Nhap vao so a: ");
	scanf ("%d", &a);
	if (a%2==0) printf (" a la so chan ") ;
	else printf (" a la so le ") ;
	return 0; 
}
