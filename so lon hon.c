//tim so lon nhat trong 2 so
//kh tham so , kh tra ve
//#include <stdio.h>
void m(){
	int a,b,max;
	printf ("nhap a va b: ");
	scanf ("%d %d",&a,&b);
	max =a;
	if (b>a){
		max =b;
		}
	printf ("so lon hon la %d",max);
}
//int main (){
//	int a,b,max;
//	m();
//	return 0;
//	}
//	
//	
//hàm khong có tham sô, có giá tri tra ve
//#include <stdio.h>
//int m(){
//	int a,b,max;
//	printf ("nhap a va b: ");
//	scanf ("%d %d",&a,&b);
//	max =a;
//	if (b>a){
//		max =b;
//		}
//	return max;
//}
//int main(){
//	int c;
//	c=m();
//	printf ("so lon nhat la %d",c);
//	return 0;
//	}



//hàm có tham sô, kh tra ve
//#include <stdio.h>
//void m(int a, int b)
//{
//	int max;
//	max =a;
//	if (b>a){
//		max=b;
//		}
//	printf ("max la %d",max);
//}
//int main (){
//	int a,b,max;
//	printf ("nhap a va b: ");
//	scanf ("%d %d",&a,&b);
//	m(a,b);
//	return 0;
//}



//co tham so , tra ve
#include <stdio.h>
int m(int a,int b){
	int max;
	max =a;
	if (b>a){
		max =b;
		}
	printf ("max la %d",max);
	return max;
}
int main (){
	int a,b,max;
	printf ("nhap a va b: ");
	scanf ("%d %d",&a,&b);
	m(a,b);
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
