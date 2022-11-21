#include <stdio.h>
int main () {
	float n;
	printf ("Diem: ");
	scanf ("%f", &n);
	
	if (n >= 9) {
		printf ("Xep loai: Xuat Sac"); }
	else if (n < 9 && n >= 8 ) {
		printf ("Xep loai: Gioi"); }
	else if (n < 8 && n >= 7) {
		printf ("Xep loai: Kha"); }
	else if (n < 7 && n >= 6) {
		printf ("Xep loai: Trung Binh Kha"); }
	else if (n < 6 && n >= 5) {
		printf ("Xep loai: Trung Binh"); }
	else printf ("Xep loai: Kem");
	return 0;
}
		
