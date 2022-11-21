#include <stdio.h>
int main ()  {
	char c;
	printf (" Nhap vao ky tu: ");
	scanf ("%c", &c);
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32 ;
	printf (" Ky tu thuong la: %c.\n", c);
	}
	else if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	printf (" Ky tu in hoa la: %c.\n", c); 
	}
    else if (c>='0' && c<='9')
      printf("Ki tu ban vua nhap la so %c\n",c);
    else
      printf("Ban da nhap ki tu %c\n",c);
return 0; 
	
}
