#include <stdio.h>
int main(){
	int num;
	printf ("check so: ");
	scanf ("%d",&num);
	int r,sum=0,temp;
	for (temp=sum;num=!0;num=num/10){
		r=num%10;
		sum=sum*10+r;
	}
	if (temp==sum){
		printf ("%d so doi xung",temp);
	}else {
	printf ("sai");}
	return 0;
}
