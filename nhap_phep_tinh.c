#include <stdio.h>
int main () {
	int x, y;
	char n;
	printf ("Nhap phep tinh: ");
	scanf ("%c", &n);
	printf ("Nhap hai so: ");
	scanf ("%d%d", &x, &y);

	switch (n) {
		case '+' :
			printf ("%d + %d", x, y);
		break;
		case '-' :
			printf ("%d - %d", x, y);
		break;
		case '*' :
			printf ("%d * %d", x, y);
		break;
		case '/' :
			printf ("%d / %d", x, y);
		break;
		default :
			printf ("Phep tinh khong ton tai");
	}
	return 0;
}
