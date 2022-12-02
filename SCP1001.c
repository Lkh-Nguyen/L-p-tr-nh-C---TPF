#include <stdio.h>
#include <string.h>

	int main(){
	int k;
	do{
	printf("Nhap mang ban muon dao nguoc: ");
	char a[100];	
	gets(a);
		  
	int count=0;
	char* p=&a[0];
	while(*p!='\0'){
 		count++;
 		p++;
	 	}
	printf("Mang goc la: ");
	puts(a);
	printf("Mang sao khi dao la: ");
	int i;
	int m=count-1;
 	for(i=count-1;i>=0;i--)
   {
      if(a[i]==32 || i==0)
      {
         if(i==0)
         {
            printf(" ");
         }
         int j;
         for(j=i;j<=m;j++)
         {
            printf("%c",a[j]);
         }
         m=i-1;
      }
    }
    
    
    
    printf("\nENTER to continue OR ESC to stop: ");
	printf("\n");
    k = _getch();
        if (k == 0 || k == 224) {   // Escape sequence?
            printf("Special key: ");
            k = _getch();           // read again
        }
    }
    while (k != 27);  
 	return 0;
 }
 
 
 
 
 
 
 
 
 
 
