#include <stdio.h>
void init(int *px , int *py){
	*px= 3; //gan 3 cho noi dung cua px
	*py=5;  //gan 5 cho noi dung cua py
}
int main (){
	int ix,iy;
	init(&ix,&iy);
	printf ("x=%d va y= %d",ix,iy);
	return 0;
	}
