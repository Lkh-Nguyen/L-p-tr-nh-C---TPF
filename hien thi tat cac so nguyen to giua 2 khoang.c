//hien thi tat ca cac so nguyen to giua 2 khoang.
#include <stdio.h>

int checkPrimeNumber(int n)
{
int j, flag = 0;
for (j = 2; j <= n / 2; ++j) {
if (n % j == 0) {
flag = 1;
break;
}
}
return flag;
}
int main()
{
int n1, n2, i, flag;
printf("Enter two positive integers: ");
scanf("%d %d", &n1, &n2);
printf("Prime numbers between %d and %d are: ", n1, n2);
for (i = n1 + 1; i < n2; i++) {
// g?n bi?n flag cho hàm ki?m tra
flag = checkPrimeNumber(i);
if (flag == 0)
printf("\n%d ", i);
}
return 0;
}
//n1=6, n2=11
