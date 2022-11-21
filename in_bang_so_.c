#include <stdio.h>  
int main() {
   int i, j;
    printf ("In bang so: " );
   for(i = 1; i <= 10; i++) {
   	printf (" \n%d", i);
       for(j = i; j <= 200; j+=10) {
       printf (" %d", j); }
   }
   return 0;	
}
