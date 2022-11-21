#include <stdio.h>
int i,a[100],v,j;
void one(){
	printf ("Nhap so phan tu cua a[]: ");
	do{
	scanf ("%d",&v);
	if(v<=0 || v>=100){
		printf("So phan tu 0-->100 ");
		printf("\nYeu cau nhap lai: ");
		}
	}
	while(v<=0 || v>100);
	for(i=0;i<v;i++){
		printf ("Gia tri cua a[%d]= ",i);
		scanf("%d",&a[i]);
		}
}
void two(){
	int h;
	printf ("Nhap gia tri ban muon tim: ");
	scanf ("%d",&h);
	for(i=0;i<v;i++){
		if(a[i]==h){
			printf("Gia tri %d tai chi so %d!\n",h,i);
			}	
	}
	}
void three(){
	int remove;
	printf ("Gia tri ban muon xoa: ");
	scanf("%d",&remove);
	for(i=0;i<v;i++){
		if(a[i]==remove){
			for(i;i<v;i++){
				a[i]=a[i+1];
			}
		}
	}
	for(i=0;i<v-1;i++){
		printf("a[%d]=%d\n",i,a[i]);
			}
}
void four(){
	printf ("Tat ca gia tri ban muon xoa: ");
	int removeall,count=0;
	scanf("%d",&removeall);
	for (j=0;j<v;j++){
		for(i=0;i<v;i++){
			if(a[i]==removeall){
				count++;
				for(i;i<v;i++){
					a[i]=a[i+1];
				}
			}
		}
	}
	for(i=0;i<v-count;i++){
		printf("\na[%d]=%d",i,a[i]);
			}
}
void five(){
	for(i=0;i<v;i++){
		printf ("Gia tri a[%d]= %d\n",i,a[i]);
		}
}
void six(){
	int gt;
	for(i=0;i<v-1;i++){
		for(j=i+1;j<v;j++){
			if(a[i]>a[j]){
				gt=a[i];
				a[i]=a[j];
				a[j]=gt;
			}
		}
	}
	printf ("Xep tang dan la: ");
	for(i=0;i<v;i++){
		printf("%5d",a[i]);
	}
	printf ("\n");
}
void seven(){
	int gt;
	for(i=0;i<v-1;i++){
		for(j=i+1;j<v;j++){
			if(a[i]<a[j]){
				gt=a[i];
				a[i]=a[j];
				a[j]=gt;
			}
		}
	}
	printf ("Xep giam dan la: ");
	for(i=0;i<v;i++){
		printf("%5d",a[i]);
	}
	printf ("\n");
}	
int main (){
//		printf("================{-Menu-}================");
//		printf("\n1.Add a value");
//		printf ("\n2.Search a value");
//		printf ("\n3.Remove the first existence of a value");
//		printf ("\n3.Remove the first existence of a value");
//		printf ("\n4.Remove all existences of a value");
//		printf ("\n5.Print out the array");
//		printf ("\n6.Sort the array in ascending order");
//		printf ("\n7.Sort the array in descending order");
//		printf ("\n8.Quit");
	int option;
	do{
		printf("================{-Menu-}================");
		printf("\n1.Add a value");
		printf ("\n2.Search a value");
		printf ("\n3.Remove the first existence of a value");
		printf ("\n4.Remove all existences of a value");
		printf ("\n5.Print out the array");
		printf ("\n6.Sort the array in ascending order");
		printf ("\n7.Sort the array in descending order");
		printf ("\n8.Quit");
		printf("\nYour option :");
		scanf("%d",&option);
		switch(option){
			case 1:
				printf ("=========================[Option 1]=========================\n");
				one();
				printf("\n");
				break;
			case 2:
				printf ("=========================[Option 2]=========================\n"); 
				two();
				printf("\n");
				break;
			case 3: 
				printf ("=========================[Option 3]=========================\n");
				three();
				printf("\n");
				break;
			case 4:
				printf ("=========================[Option 4]=========================\n"); 
				four();
				printf("\n");
				break;
			case 5: 
				printf ("=========================[Option 5]=========================\n");
				five();
				printf("\n");
				break;
			case 6:
				printf ("=========================[Option 6]=========================\n");
				six();
				printf("\n");
				break;
			case 7:
				printf ("=========================[Option 7]=========================\n");
				seven();
				printf("\n");
				break;
			case 8: 
				printf ("Thank for using Menu.");
				break;
			default:
				printf("You have to choose 1-->8:\n");
		}
	}while(option!=8);				
	return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
