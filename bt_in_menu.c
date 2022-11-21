#include <stdio.h>
#include <math.h>
int main () {
	float a, b, c;
	int n;	
	
//	printf ("Cac chuc nang: ");
//	printf ("\n1.Tinh toan");
//	printf ("\n2. So lon nhat");
//	printf ("\n3. Kiem tra so chinh phuong");
//	printf ("\n4.Quit");
//	printf ("\nNhap vao so ban muon chon: ");
//	scanf ("%d", &n);
	do {
			printf ("Cac chuc nang: ");
	printf ("\n1.Tinh toan");
	printf ("\n2. So lon nhat");
	printf ("\n3. Kiem tra so chinh phuong");
	printf ("\n4.Quit");
	printf ("\nNhap vao so ban muon chon: ");
	scanf ("%d", &n);
	switch (n) {
		case 1 :
			printf ("\nNhap vao a va b: ");
			scanf ("%f%f", &a, &b);
			printf ("%.2f+%.2f=%.2f", a, b, a+b);
			printf ("\n%.2f-%.2f=%.2f", a, b, a-b);
			printf ("\n%.2f*%.2f=%.2f", a, b, a*b);
			printf ("\n%.2f/%.2f=%.2f", a, b, a/b);
		break;
		case 2 : 
		printf ("Nhap vao a, b va c: ");
		scanf ("%f%f%f", &a, &b, &c);
			if (a > b && a > c) {
				printf ("So lon nhat la: %.2f\n", a); }
			else if (b > a && b > c) {
				printf ("So lon nhat la: %.2f\n", b); }
			else printf ("So lon nhat la: %.2f\n", c);
		break;
		case 3 :
	    printf("\nNhap n = ");
	    scanf("%d", &n);
	    int sqr = sqrt(n);
		    if(sqr*sqr == n){
		        printf("%d la so chinh phuong\n", n);
            }else
                printf("%d khong phai so chinh phuong\n", n); 
        break;
        case 4 :
        printf ("Ket thuc chuong trinh!");
        break;
    }
} while (n==5);
return 0;
}
