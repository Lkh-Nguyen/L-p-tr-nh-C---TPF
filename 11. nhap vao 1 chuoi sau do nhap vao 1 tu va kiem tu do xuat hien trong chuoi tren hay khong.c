//11. Nh?p v�o 1 chu?i sau d� nh?p v�o 1 t? v� ki?m tra xem t? d� c� xu?t hi?n trong chu?i tr�n hay kh�ng, n?u c� th� xu?t hi?n bao nhi�u l?n.


#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char xau[50];
    char kitukiemtra;
    int dem;
    printf("Nhap vao mot chuoi: ");
    gets(xau);
    printf("Nhap vao ki tu muon kiem tra: ");
    scanf("%c",&kitukiemtra);
    int i;	
    for(i=0;i<strlen(xau)-1;i++)
    {
        if(xau[i]==kitukiemtra)
        dem++;
    }
    if(dem==0)
    printf("Ki tu %c khong co trong chuoi",kitukiemtra);
    else     printf("Ki tu %c xuat hien %d lan trong chuoi",kitukiemtra,dem);
    getch();
}
	
