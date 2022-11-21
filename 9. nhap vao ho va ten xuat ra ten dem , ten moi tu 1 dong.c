//9.Nh?p vào h? và tên xu?t ra h?, tên d?m, tên m?i t? 1 dòng: 


#include <conio.h> 
#include <stdio.h> 
#include <string.h>

int main()
{
    char xau[30];
    printf("Nhap vao mot chuoi: ");
    gets(xau);
    int i;
    for(i=0;i<=strlen(xau)-1;i++)
    {
      if(xau[i]!=32)
      {
          printf("%c",xau[i]);
      }
        else       {
            printf("\n");
      }
    }
    getch();
}
