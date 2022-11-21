#include<stdio.h>
void input(){
	int k;
	printf ("Nhap so tien $: ");
	scanf ("%d",&k);
	int tien[5] ;
	int i;
	for (i=0;i<5;i++){
		printf ("Nhap 5 loai tien[%d]= ",i);
		scanf ("%d",&tien[i]);
	}
	int count=0;
	i=4;
	while(k!=0){
	count=k / tien[i];
	k=k- tien[i]*count;
	printf ("\nSo tien to %d$ la %d to",tien[i],count);
	count =0;
	i--;
	}
}

int main (){
	input();
	return 0;
}
