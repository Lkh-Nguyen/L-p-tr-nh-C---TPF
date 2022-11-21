//Ki?m tra xem m?t s? có th? du?c bi?u th? b?ng t?ng c?a hai s? nguyên t? không.
#include <stdio.h>
int baiba(int m) {
int i, isPrime = 1;
for (i = 2; i <= m / 2; ++i) {
if (m % i == 0) {
isPrime = 0;
break;
}
}
return isPrime;
}
int main() {
int m, i, flag = 0;
printf("Nhap mot so bat ki: ");
scanf("%d", &m);
for (i = 2; i <= m / 2; ++i) {
if (baiba(i) == 1) {
if (baiba(m - i) == 1) {
printf("%d = %d + %d\n", m, i, m - i);
flag = 1;
}
}
}
if (flag == 0)
printf("%d khong tao tu 2 so nguyen to", m);
return 0;
}
