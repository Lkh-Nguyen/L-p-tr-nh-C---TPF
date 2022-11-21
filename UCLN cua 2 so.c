//tim uoc chung lon nhat cua 2 so
#include <stdio.h>
// int GCD(int a, int b) {
//     if(b==0) return a;
//     return GCD(b, a%b);
// }
// int GCD(int a, int b ){
//     int r = a % b;
//     while (r!=0) {
//         a = b;
//         b = r;
//         r = a % b;
//     }
//     return b;
// }
 int GCD(int a, int b){
     int temp;
     if(b > a) {
         temp = b;
         b = a;
         a = temp;
     }
     int i = b;
     while(i >= 1) {
         if(a%i == 0 && b%i == 0)
         break;
         i--;
     }
     return i;
 }
//int GCD(int a, int b, int i){
//if(a%i==0 && b%i==0) return i;
//return GCD(a,b,i-1);
//}
int main() {
int a, b, c, i;
printf("Enter two positive integer: ");
scanf("%d%d", &a,&b);
int d = a*b;
i = GCD(a,b);
printf("UCLN cua %d va %d la %d\n", a,b,i);
printf("BCNN cua %d va %d la %d",a,b,d/i);
return 0;
}
