//#menu nghiem

//int main (){
//	int a,b,c,i;
//	printf ("-------<MENU>-------");
//	printf ("\n1. Nhap a,b,c");
//	printf (//#include <stdio.h>"\n2.Xac Dinh Nghiem");
//	printf ("\n3.Thoat");
//	printf ("\nNhap chuc nang: ");
//	do{
//		scanf ("%d",&i);
//		switch(i){
//			case 1: printf ("nhap a,b,c: ");
//					scanf ("%d %d %d",&a,&b,&c);
//					break;
//			case 2: printf ("%d %d %d",a,b,c);
//					break;
//			case 3: printf ("Cam on da dung Menu");
//					break;
//		}
//		if(i>=1 && i<=2){
//			printf ("\nChon tu 1 -> 2: ");
//			}else if (i<=1 && i>=4){
//				printf ("\nNhap tu 1 ->3");
//				}			
//	}while (i!=3);
//	return 0;
//	}


//#include <stdio.h>
//#include <math.h>
//int main (){
//	int a,b,c;
//	float a1,a2;
//	printf ("Nhap a,b,c: ");
//	scanf ("%d %d %d",&a,&b,&c);
//	int denta;
//	float candenta;
//	denta= b*b-4*a*c;
//	if (a>0){
//	if (denta<0){
//		printf ("vo nghiem");
//	}else if (denta==0){
//		printf ("phuong trinh co 1 nghiem la = %f",(float)(-b/(2*a)));
//	}else if (denta>0){
//		candenta= sqrt(denta);
//		a1= (-b-candenta)/(2*a);
//		a2= (-b+candenta)/(2*a);
//		printf ("%f va %f",a1,a2);
//	}
//	}else if (a==0){
//		printf ("phuong trinh tro thanh pt bac nhat vs nghiem la %f",(float)-c/b);
//	}
//	}
	
	
//knong tham so , khong doi so tra ve
//#include <stdio.h>
//#include <math.h>
//void baimot(){
//	int a,b,c;
//	float a1,a2;
//	printf ("Nhap a,b,c: ");
//	scanf ("%d %d %d",&a,&b,&c);
//	int denta;
//	float candenta;
//	denta= b*b-4*a*c;
//	if (a>0){
//	if (denta<0){
//		printf ("vo nghiem");
//	}else if (denta==0){
//		printf ("phuong trinh co 1 nghiem la = %f",(float)(-b/(2*a)));
//	}else if (denta>0){
//		candenta= sqrt(denta);
//		a1= (-b-candenta)/(2*a);
//		a2= (-b+candenta)/(2*a);
//		printf ("%f va %f",a1,a2);
//	}
//	}else if (a==0){
//		printf ("phuong trinh tro thanh pt bac nhat vs nghiem la %f",(float)-c/b);
//	}
//}
//int main (){
//	int a,b,c;
//	float a1,a2;
//	int denta;
//	float candenta;
//	baimot();
//	return 0;
//	}
	
//khong tham so , co doi so tra ve
#include <stdio.h>
#include <math.h>
void baimot(){
	int a,b,c;
	float a1,a2;
	printf ("Nhap a,b,c: ");
	scanf ("%d %d %d",&a,&b,&c);
	int denta;
	float candenta;
	denta= b*b-4*a*c;
	return denta;
}
int main(){
	int a,b,c,d;
	float a1,a2;
	int denta;
	float candenta;
	d = baimot();
	if (a>0){
	if (d<0){
		printf ("vo nghiem");
	}else if (d==0){
		printf ("phuong trinh co 1 nghiem la = %f",(float)(-b/(2*a)));
	}else if (d>0){
		candenta= sqrt(denta);
		a1= (-b-candenta)/(2*a);
		a2= (-b+candenta)/(2*a);
		printf ("%f va %f",a1,a2);
	}
	}else if (a==0){
		printf ("phuong trinh tro thanh pt bac nhat vs nghiem la %f",(float)-c/b);
	}
}

































	
	
	
	
	
	
	
	
	
	
	
	
	





	
	
	
	
