#include <stdio.h>
int a,b,c,max,min;
void nhap(){
	printf ("Nhap a,b,c: ");
	scanf ("%d %d %d",&a,&b,&c);
	}
void maximum(){
	if (a>b){
		max = a;
		}else max =b;
	if (c > max){
		max =c;
		}
	printf ("So lon nhat la: %d",max);
	}
void minimum(){
	if (a>b){
		min=b;
		}else min=a;
	if (c<min){
		min=c;
		}
		printf ("\nso nho nhat la: %d",min);
	}
int main (){
	nhap();
	maximum();
	minimum();
	return 0;
	}
		
