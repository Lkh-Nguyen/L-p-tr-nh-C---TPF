#include <Stdio.h>
int main () {
	int a, b;
	char n;
	printf ("Nhap phep tinh: ");
	scanf ("%c", &n);
	printf ("Nhap hai so a va b: ");
	scanf ("%d%d", &a, &b);
	switch (n) {
		case '+' :
			printf ("%d + %d = %d", a, b, a + b);
		break;
		case '-' :
			printf ("%d - %d = %d", a, b, a - b);
		break;
		case '*' :
			printf ("%d * %d = %d", a, b, a * b);
		break;
		case '/' :
			printf ("%d / %d = %d", a, b, a / b );
		break;
		default :
			printf("Phep tinh khong ton tai");
	}
	return 0;
} 
