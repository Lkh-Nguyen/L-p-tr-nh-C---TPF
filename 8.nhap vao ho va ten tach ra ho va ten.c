//8. Nh?p vào h? và tên tách ra h?, tên:


#include <conio.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char xau[30];
    printf("Nhap vao mot chuoi: ");
    gets(xau);
    int i;
    for( i=0;i<strlen(xau);i++)
    {
        if(xau[i]!=32)
        {
            printf("%c",xau[i]);
        }
        else        {
        	int j;
         for(j=strlen(xau)-1;j>=i;j--)
         {
            if(xau[j]==32)
            {
            	int k;
               for( k=j;k<=strlen(xau)-1;k++)
               printf("%c",xau[k]);
               break;
            }
         }
         break;
      }
    }
    getch();
}
