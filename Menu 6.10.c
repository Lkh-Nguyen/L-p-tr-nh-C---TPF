//menu ngay 6.10
#include <stdio.h>
void baimot(){
	int a,b,c;
	if (a==b && b==c ){
		printf ("day la tam giac deu");
		}else{
			if(a==b ||a==c||c==b){
				printf ("Tam giac Cân");
			}else {
				printf ("Kh Cân");
			}
		}
}
void baihai (){
	int a,b,c;
	if (a==b && b==c ){
		printf ("day la tam giac deu");
		}else 
		printf ("KO DEU");
}
void baiba(){
int a,b,c;
	if (a > b && a > c) {
		printf ("So lon nhat la: %d\n", a);
		if ((a*a)==(b*b)+ (c*c)){
			printf ("tam giac vuong");}
	}else if (b > a && b > c) {
				if ((b*b)==(a*a)+ (c*c)){
			printf ("tam giac vuong");}
	}else 		if ((c*c)==(b*b)+ (a*a)){
			printf ("tam giac vuong");}

}
int main (){
	int a,b,c;
	int l;
	printf ("--------<MENU>--------");
	printf ("\n1.Check Tam Giac Can");	
	printf ("\n2.Check Tam Giac Deu");
	printf ("\n3.Check Tam Giac Vuong");
	printf ("\n4.Check Tam Giac Vuong Can");
	printf ("\n5.Ket Thuc");
	printf("\nNhap a,b,c: ");
	scanf ("%d %d %d",&a,&b,&c);
	if (a<b+c && b<c+a && c < a+b){
	printf ("Nhap chuc nang: ");
	do{
		scanf ("%d",&l);
		switch(l){
			case 1: 
			printf ("%d %d %d\n",a,b,c);
			baimot(); break;
			case 2: 
			printf("%d %d %d\n",a,b,c);
			baihai(); break;
			case 3: baiba(); break;
			case 4: printf ("4"); break;
			case 5: printf ("Cam on da su dung menu");
			}
			if (l>=1 && l<=4){
				printf ("\nTiep tuc su dung 1->4: ");
				}else if (l<=0 || l>=6){
					printf ("\nNhap tu 1->5: ");}
	}while(l!=5);
	}else
	printf ("Khong phai tam giac");
	return 0;
	}		
	
	










	
	
	
	
	
		
