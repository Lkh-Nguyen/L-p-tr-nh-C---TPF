//bai tap 10: Vi?t chuong trình ch?y m?t menu g?m các ch?c nang nhu sau :
#include <stdio.h>
int baimot(int n)
{
int j, flag = 0;
for (j = 2; j <= n / 2; ++j) {
if (n % j == 0) {
flag = 1;
break;
}
}
return flag;
}
void baihai(){
	int num,r,sum=0,temp;
	printf ("check : ");
	scanf ("%d",&num);
	for (temp=num;num!=0;num=num/10){
		r=num%10;
		sum=sum*10+r;
	}
	if (temp==sum)
	{
		printf ("%d la so doi xung",temp);
	}else 
		printf ("%d khong phai so doi xung",temp);
}	
int baiba(int m) {
int i, isPrime = 1;
for (i = 2; i <= m / 2; ++i) {
if (m % i == 0) {
isPrime = 0;
break;
}
}
return isPrime;
}
int baibon(int d){
	int tich=1;
	if (d<=1){
		return 1;
		}
	return d*baibon(d-1);
}
int main (){
	int a,d;
	int n1, n2, z, flag1;
	int m, i, flag9 = 0;
	printf ("---------[.MENU.]---------");
	printf ("\nCac chuc nang sau:");
	printf ("\n1.Hien thi cac so nguyen to giua 2 khoang");
	printf ("\n2.Kiem tra so doi xung");
	printf ("\n3.Kiem tra 1 so = tong 2 so nguyen to");
	printf ("\n4.Tinh giai thua ");
	printf ("\n5.Ket thuc");
	printf ("\nTinh nang ban muon chon la: ");
do{
	scanf ("%d",&a);
	switch (a){
		case 1: 
				printf("Chon a va b: ");
				scanf("%d %d", &n1, &n2);
				printf("Prime numbers between %d and %d are: ", n1, n2);
				for (z = n1 + 1; z < n2; ++z) {
					flag1 = baimot(z);
					if (flag1 == 0)
					printf("%d ", z);
					}
				break;
		case 2: 
				baihai();
				break;
		case 3:
				printf("Nhap mot so bat ki: ");
				scanf("%d", &m);
				for (i = 2; i <= m / 2; ++i) {
					if (baiba(i) == 1) {
						if (baiba(m - i) == 1) {
							printf("%d = %d + %d\n", m, i, m - i);
							flag9 = 1;
							}
						}
					}
				if (flag9 == 0)
				printf("%d khong tao tu 2 so nguyen to", m); 
				break;
		case 4:
				printf ("nhap d: ");
				scanf ("%d",&d); 
				printf ("Dap so la: %d",baibon(d));
				break;
		case 5:printf ("Cam on ban da lua chon MENU");break;
		}
		if (a>=1 &&a<=4){
		printf ("\nTiep tuc tinh nang 1->4 hoac 5 de ket thuc: ");}
		else if(a>=6 || a<=0){
		printf ("Nhap tu 1 ->5: ");}					
}while(a!=5);
return 0;
}

























































