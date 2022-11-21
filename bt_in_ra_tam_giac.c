#include <stdio.h>
int main () {
	int i, j, h;
	printf("Nhap chieu cao cua tam giac: ");
	scanf ("%d", &h);
//	--h;
//	for (i=0 ; i<h; i++) {
//		for (j=0; j<2*h+1; j++) {
//			if (j==n-i || j==h+i) {
//				printf ("*");
//			} else 
//			printf (" ");
//		}
//		printf ("\n");
//	}
//	for (j=0; j<2*h+1; j++) {
//		printf ("*");
//
//	}
//	return 0;
//}

int m = h, n = h;
   for (i = 1; i <= h; i++);
   {
      for (j = 1; j <= 2 * h - 1; j++)
      {
         if (j == m || j == n || i== h)
            printf("*");
         else
            printf(" ");
      }
      m--;
      n++;
      printf("\n");
}
    return 0;
}
