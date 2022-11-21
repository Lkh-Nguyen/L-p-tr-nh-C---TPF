#include <stdio.h>
#include <conio.h>
int main()
{
	int ix=6,iy=7;
	printf("x=%d va y=%d",ix,iy);
	printf ("%s va %s",&ix , &iy );
	int * px , *py;
	px = &ix;
	py = &iy;
	*px += 10;
	*py += 10;
	printf ("\nx=%d va y=%d",ix,iy);
	return 0;
	}

