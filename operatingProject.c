#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct OS{
	char name[10];
	int quantity;
	
};

int main(){
	struct OS o[10],temp;
	int j,i;
	printf("WELCOME TO MY OPERATING SYSTEM PROGRAM \n\n");
	getchar();
	for(i=0;i<10;i++){
		system("cls");
		printf("\nEnter %dth name :",i+1);
		scanf("%s",o[i].name);
		printf("\nEnter %dth quantity number:",i+1);
		scanf("%d",&o[i].quantity);
	}
	system("cls");
	printf("Entered name and quantity are as follows::\n\n");
	printf("Name \t\t Quantity");
	for(i=0;i<10;i++){
		printf("\n%s \t\t %d",o[i].name,o[i].quantity);
	}
	
	
	for(i=0;i<10;i++){
		for(j=0;j<9;j++){
			if(o[j].quantity<o[j+1].quantity){
				
			temp=o[j];
			o[j]=o[j+1];
			o[j+1]=temp;	
			}
		}
	}
	getchar();
	system("cls");
	printf("After sorting by their quantity::\n\n");
	printf("Name \t\t Quantity");
	for(i=0;i<10;i++){
		printf("\n%s \t\t %d",o[i].name,o[i].quantity);
	}
	
	printf("Abc");
		
}
