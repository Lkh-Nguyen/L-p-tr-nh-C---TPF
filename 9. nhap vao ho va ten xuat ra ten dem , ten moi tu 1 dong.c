//9.Nh?p v�o h? v� t�n xu?t ra h?, t�n d?m, t�n m?i t? 1 d�ng: 


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
