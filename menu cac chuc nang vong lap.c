//Vi?t chuong trình ch?y m?t menu g?m các ch?c nang
#include <stdio.h>
#include <math.h>
	char ten[20];
	int a,b;
void menu(){
	printf ("------{Menu}------");
	printf ("\n1.Nhap ten nguoi dung");
	printf ("\n2.In ra ten nguoi dung do");
	printf ("\n3.Kiem tra so chinh phuong");
	printf ("\n4.Kiem tra so lap phuong");
	printf ("\nChuc nang ban muon chon: ");
	}
void tennguoidung(){
	printf ("nhap ten ban la: ");
	scanf ("%s",&ten);
	}
void nguoidung (){
	printf ("ten ban la:%s",ten);
	}
int chinhphuong (int n){
	printf ("Nhap n vao:");
	scanf ("%d",&n);
	int sqr = sqrt(n);
	if(sqr*sqr == n){
//	printf("%d la so chinh phuong\n", n);
	return 1;
	}else
// 	printf("%d khong phai so chinh phuong\n", n);
 	return 0;
	}
int lapphuong (int n){
	printf ("Nhap m vao:");
	scanf ("%d",&n);
	double sqr2 = pow((double)n,1/3); // pow (a, 1.0/3) : can bac 3 
	if(sqr2 == (int)sqr2){
//	printf("%d la so lap phuong\n", m);
	return 1;
	}else
// 	printf("%d khong phai so lap phuong\n", m);
	return 0;
int main (){
	}
	do
	{
		menu();
	scanf ("%d",&a);
		switch (a){
			case 1: tennguoidung();
			break;
			case 2: nguoidung ();
			break;
			case 3: 
					printf ("do co phai la so chinh phuong %d",chinhphuong(n));
			break;
			case 4:
					printf ("do co phai la so lap phuong %d",lapphuong(n));
			break;
			default: printf ("lua chon lai");
			}
			printf ("\nStop = 0 ; Continue = 1");
			printf ("\nStop or continue: ");
			scanf ("%d",&b);
	}while (b!=0);
	printf ("Cam on ban da dung");		
	return 0;
	}
	
	
	
	
	
	
