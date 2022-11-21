// check so doi xung
#include <stdio.h>
int main (){
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
return 0;
}
// r= n %10 =1
// s=s*10 +r=1
// n= n/10=199

// r= n %10 =9
// s=s*10 +r=19
// n= n/10=19

// r= n %10 =9
// s=s*10 +r=199
// n= n/10=1

// r= n %10 =1
// s=s*10 +r=1991
// n= n/10=0











