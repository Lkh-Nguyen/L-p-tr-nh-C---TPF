//tinh fibonanci
//khong tra ve , khong tham so
//#include <stdio.h>
void fibo(){
	int n;
	printf ("nhap so n: ");
	scanf ("%d",&n);
	int f1=1,f2=1;
	if (n==1 || n==2){
		printf ("gia tri la 1");
	}
	int i=3,fn;
	while (i<=n){
		fn=f1+f2;
		f1=f2;
		f2=fn;
		i++;
	}
	printf ("gia tri la %d",fn);
}
//int main (){
//	int n;
//	fibo();
//	return 0;
//	}
	
	
//khong co tham so , doi so tra ve
//#include <stdio.h>
//int fibo(){
//	int n;
//	printf ("nhap so n: ");
//	scanf ("%d",&n);
//	return n;
//	}
//int main (){
//	int n;
//	n= fibo();
//	int f1=1,f2=1;
//	if (n==1 || n==2){
//		printf ("gia tri fibonanci la 1");
//	}
//	int i=3,fn;
//	while (i<=n){
//		fn=f1+f2;	
//		f1=f2;
//		f2=fn;
//		i++;
//	}
//	printf ("gia tri fibonanci la %d",fn);
//	return 0;
//}	
	
	
//co tham so , khong doi so tra ve
//#include <stdio.h>
//void fibo(int n){
//	int f1=1,f2=1;
//	if (n==1 || n==2){
//		printf ("gia tri fibonanci la 1");
//	}
//	int i=3,fn;
//	while (i<=n){
//		fn=f1+f2;	
//		f1=f2;
//		f2=fn;
//		i++;
//	}
//	printf ("gia tri fibonanci la %d",fn);
//}
//int main (){
//	int n;
//	printf ("nhap n vao: ");
//	scanf ("%d",&n);
//	fibo(n);
//	return 0;
//	}


//co tham so , co tra ve
#include <stdio.h>
int fibo(int n){
	int f1=1,f2=1;
	if (n==1 || n==2)
	return 1;
	int i=3,fn;
	while (i<=n){
		fn=f1+f2;	
		f1=f2;
		f2=fn;
		i++;
	}
	printf ("gia tri fibonanci la %d",fn);
	return fn;
	}
	int main (){
	int n;
	printf ("nhap n vao: ");
	scanf ("%d",&n);
	fibo(n);
	return 0;
	}	




















	
	
	
	
	
	
	
	
	
	
