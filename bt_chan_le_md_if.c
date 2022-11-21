#include <stdio.h>
int main() {
	int a;
	printf ("Nhap vao so nguyen a: ");
	scanf ("%d", &a);
	if (a > 0) {
		// so duong
		if (a % 2 == 0) {
			printf ("Day la so duong chan");
		}
		else {
			printf ("Day la so duong le");
		}
    }
    else if ( a == 0) {
    	printf ("Day la so 0", a);
}
else {
	// so am
	if (a % 2 == 0) {
		printf ("Day la so am chan");
	}
	else  
		printf ("Day la so am le"); 
	} 
    return 0; 
}
