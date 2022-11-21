//Vi?t chuong trình g?m 1 ? 5 ch?c nang c?a 5 bài trên, m?i bài 1 hàm, có hàm menu riêng và l?p d?n khi ch?n 6 thì quit.
#include <stdio.h>

void fibo(){
	int n;
	printf ("nhap so n: ");
	scanf ("%d",&n);
	int f1=1,f2=1;
	if (n==1 || n==2){
		printf ("gia tri la 1\n");
	}else{
	int i=3,fn;
	while (i<=n){
		fn=f1+f2;
		f1=f2;
		f2=fn;
		i++;
	}
	printf ("gia tri la %d\n",fn);
}
}
void m(){
	int a,b,max;
	printf ("nhap a va b: ");
	scanf ("%d %d",&a,&b);
	max =a;
	if (b>a){
		max =b;
		}
	printf ("so lon hon la %d\n",max);
}
void sum()
{
	int n,i,tong=0;
	printf ("nhap n vao: ");
	scanf ("%d",&n);
	for (i=1;i<=n;i++){
		tong=tong+i;
	}
	printf ("tong la %d\n",tong);
	}
void nguyento()
{
	int f,m,flag =0;
	printf ("nhap 1 so muon coi do la so nguyen hay khong: ");
	scanf ("%d",&f);
	for (m=1;m<=f/2;m++){
		if (f%m==0){
			flag=1;
		}
	}
	if (flag == 1)
	printf ("%d khong phai la so nguyen to\n",f);
	else 
	printf ("%d khong phai so nguyen to\n",f);
}
void tich(){
	int n,tich=1,i;
	printf ("nhap n vao: ");
	scanf ("%d",&n);
	for (i=1;i<=n;i++){
		tich =tich*i;
		}
	printf ("%d!=%d\n",n,tich);
	}
int main (){
	int e,b;
	do {
	printf ("------<Menu>------");
	printf ("\n1.Tinh n!");
	printf ("\n2.Tinh tong");
	printf ("\n3.Tinh so nguyen to");
	printf ("\n4.Tinh ibonanci");
	printf ("\n5.So sanh 2 so ");
	printf ("\n6.Ket thuc");
	printf ("\nnhap so vao: ");
	scanf ("%d",&e);
		switch (e){
			case 5: m();
			break;
			case 2: sum();
			break;
			case 3: nguyento();
			break;
			case 1: tich ();
			break;
			case 4: fibo ();
			break;
			default : 	printf ("Cam on ban da lua chon");
		}
	}
	while (e!=6);
	return 0;
}
