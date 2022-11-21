//tinh n!
// kh tham so , kh tra ve
//#include <stdio.h>
void tich(){
	int n,tich=1,i;
	printf ("nhap n vao: ");
	scanf ("%d",&n);
	for (i=1;i<=n;i++){
		tich =tich*i;
		}
	printf ("%d!=%d",n,tich);
	}
//int main (){
//	int n;
//	tich();
//	return 0;
//}


//kh tham so , tra ve
#include <stdio.h>
int nhan(){
	int n;
	printf ("Nhap n vao: ");
	scanf ("%d",&n);
	return n;
		}
int main (){
	int n,i,tich=1;
	n = nhan();
	for (i=1;i<=n;i++){
		tich =tich*i;
		}
	printf ("%d!=%d",n,tich);
	return 0;
	}


//tham so , khong tra ve
//#include <stdio.h>
//void nhan(int n){
//	int i,tich=1;
//	for (i=1;i<=n;i++){
//		tich =tich*i;
//		}
//	printf ("%d!=%d",n,tich);
//}
//int main (){
//	int n;
//	printf ("Nhap n vao: ");
//	scanf ("%d",&n);
//	nhan(n);
//	return 0;
//	}
	
	
//tham so , tra ve
//#include <stdio.h>
//int nhan(int n){
//	int i,tich=1;
//	for (i=1;i<=n;i++){
//		tich =tich*i;
//		}
//	printf ("%d!=%d",n,tich);
//	return tich;
//}

int main (){
	int n;
	printf ("Nhap n vao: ");
	scanf ("%d",&n);
	nhan(n);
	return 0;
	}	
