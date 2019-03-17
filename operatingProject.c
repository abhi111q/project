#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct OS{
	char name[10];
	int quantity;
};

int main(){
	struct OS o[10];
	int i;
	printf("WELCOME TO MY OPERATING SYSTEM PROGRAM \n\n");
	
	for(i=0;i<10;i++){
		printf("\nEnter %dth name :",i+1);
		scanf("%s",o[i].name);
		printf("\nEnter %dth quantity number:",i+1);
		scanf("%d",&o[i].quantity);
	}
	system("cls");
	printf("Entered name and quantity are as follows::");
	printf("Name \t\t Quantity");
	for(i=0;i<10;i++){
		printf("\n%s \t\t %d",o[i].name,o[i].quantity);
	}
}
