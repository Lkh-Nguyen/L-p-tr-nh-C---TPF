#include <stdio.h>

int Taxifee(){
	float tien;
	float km;
	printf("Input (km) you have used: ");
	scanf("%f",&km);
	if(km<0){
		printf("Km is positive numbers");
		}
	else if(km>=0 && km<1){
		tien= 15*km;
		}
	else if (km>=1){
		tien= 15 + (km-1)*12;
		}
		return tien;
	}

int Sum(){
	int tong=0;
	int songuyen;
	printf("Input positive numbers: ");
	do{
	scanf("%d",&songuyen);
	tong += songuyen;
	}
	while(songuyen>=0);
	return tong;
	}
	
int Countnumber(){
	int count =0;
	char a[20];
	printf("Input string: ");
	gets(a);
	char* p = &a[0];
	while (*p != '\0'){
		if(*p >= '0' && *p <= '9'){
			count++;
			}
		p++;
		}
	return count;
}

int four(int check){
	int j;
	int flag=0;
	for(j=2;j<=check/2;j++){
		if(check % j == 0){
		flag = 1;
		break;
		}	
	}
	return flag;
}
int main (){


	int choose;
	float one1;
	int two2,three3,four4;
	int nguyento ,i,z=0,flag,count=0;
	printf("-----------------{MENU}-----------------");
	printf("\n1.Fee taxi");
	printf("\n2.Sum numbers");
	printf("\n3.Count number");
	printf("\n4.Create a function of prime numbers ");
	printf("\nFunction You want to us: ");
	do{
		scanf("%d",&choose);
		switch (choose){
			case 1: 
					one1 = Taxifee();
					printf("Money for Taxi: %.2fk thousand vnd",one1);
					break;
				
			case 2:
					two2 =Sum();
					printf("Sum all positive numbers la %d",two2);
					break;
			
			case 3: 
					three3 = Countnumber();
					printf("Number positive numbers: %d",three3);
					break;
			case 4: 
					printf("Input number: ");
					scanf("%d",&nguyento);
					for(i=2;i<nguyento;i++){
						flag = four(i);
						if(flag == 0 ){
							 printf("a[%d]= %d\n",z,i);
							 z++;
						}	
					}
					break;
		}
			printf("\nUse next function: ");	
			
	}while(choose >= 1 && choose<=3);
	printf("\nThank for using");
	
	return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		
	
		
