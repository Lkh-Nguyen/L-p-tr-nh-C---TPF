//viet ham tinh tong S=1+2+...+n
//kh tham so , kh tra ve
//#include <stdio.h>
void sum()
{
	int n,i,tong=0;
	printf ("nhap n vao: ");
	scanf ("%d",&n);
	for (i=1;i<=n;i++){
		tong=tong+i;
	}
	printf ("tong la %d",tong);
	}
//int main (){
//	int n,i,tong=0;
//	sum();
//	return 0;
//}


//khong tham so , tra ve
//#include <stdio.h>
//int sum(){
//	int n;
//	printf ("nhap n vao: ");
//	scanf ("%d",&n);
//	return n;
//	}
//int main (){
//	int n,i,tong=0;
//	n=sum();
//	for (i=1;i<=n;i++){
//		tong =tong+i;
//	}
//	printf ("tong la %d",tong);
//	return 0;
//}

//co tham so , khong tra ve
//#include <stdio.h>
//void sum(int n){
//	int i,tong=0;
//	for (i=1;i<=n;i++){
//		tong =tong+i;
//	}
//	printf ("tong la %d",tong);
//}
//int main (){
//	int n,i,tong=0;
//	printf ("nhap n vao: ");
//	scanf ("%d",&n);
//	sum(n);
//	return 0;
//	}
		
		
//co tham so , tra ve
//#include <stdio.h>
//int sum (int n){
//	int i,tong =0;		
//	for (i=1;i<=n;i++){
//	tong =tong+i;
//	}
//	printf ("Tong la %d",tong);
//	return tong;
//}
//int main (){
//	int n,i,tong=0;
//	printf ("nhap n vao: ");
//	scanf ("%d",&n);
//	sum(n);
//	return 0;
//}
		
		
#include <stdio.h>
int nhan(int n){
	int i,tich=1;
	for (i=1;i<=n;i++){
		tich =tich*i;
		}
	printf ("%d!=%d",n,tich);
	return tich;
}
int main (){
	int n;
	printf ("Nhap n vao: ");
	scanf ("%d",&n);
	nhan(n);
	return 0;
	}				
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
