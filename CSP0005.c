#include<stdio.h>

	int main(){
		int a,i,k;
		do{
			printf("Nhap mot so ban muon in ra bang cuu chuong: ");
			scanf("%d",&a);
			for(i=1;i<=10;i++){
				printf("%d x %d = %d\n",a,i,a*i);
			
			}
			 printf("\nENTER to continue OR ESC to stop:");
			 printf("\n");
			 k = _getch();
        if (k == 0 || k == 224) {   // Escape sequence?
            printf("Special key: ");
            k = _getch();           // read again
        }
		}while (k != 27); 
	
	return 0;
	}
