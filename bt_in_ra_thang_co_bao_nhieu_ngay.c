#include <stdio.h>
int main () {
	int a, nam;
	printf ("Nhap vao thang: ");
	scanf ("%d", &a);
if (a<=12 && a>0) {
    switch (a) {
	 	case 1 :
	 	case 3 :
	 	case 5 :
	 	case 7 :
	 	case 8 :
	 	case 10 :
	 	case 12 :
		    printf ("Thang %d co 31 ngay", a);
		break;
		case 4 :
		case 6 :
		case 9 :
		case 11 :
		    printf ("Thang %d co 30 ngay", a);
		break;
    	case 2 :
        	printf ("Nhap vao nam: ");
	        scanf ("%d", &nam);
                if (nam%4==0) {
				    printf ("Thang %d co 29 ngay", a); }
			    else printf ("Thang %d co 28 ngay", a);
        break;  
    }
}
return 0;
}

		

