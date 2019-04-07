#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

// made and owned by :- 
  
 // ####### #	  # #       000000
 // #     # #     # #      0      0
 // #	  # #     # #      0      0
 // ######  #     # #      0      0
 // ##      #	  # #      0      0
 // #  #	#	  # #      0      0
 // #    #   #####  ######  000000
 
  // Submitted to : Pushpendra Sir 

struct OS{
	char name[10];
	int quantity;
	
};


void printBill(struct OS s[],int m){
	
	char ch;
	float price;
	int i,p;
	printf("\n\n\t\tDo you want to print Bill :");
	printf("\n\n\t\tEnter '7' for yes and '8' for NO ::");
	scanf("%d",&p);
    if(p==7){
    	system("clear");
     	printf("\n\n\t\t Enter the price of One gift :");
     	scanf("%f",&price);
     	
		printf("\n\n\t\t\t\t || Bill of every customer In order are  ||");
		printf("\n\n\n\t\t\t\t ---- \t\t -------- \t  ----- \n ");
		printf("\t\t\t\t Name \t\t Quantity \t  Price \n ");
     	printf("\t\t\t\t ---- \t\t -------- \t  ----- \n ");
     	for(i=0;i<m;i++){
			 printf("\n\n\t\t\t\t %s \t\t %d \t\t %.2f ",s[i].name,s[i].quantity,s[i].quantity*price);	 
     	 }
	 	printf("\n\n\n\n\n\n\n\n\n\t\t Thanks for using my Program : \n\n\t\t Have a Great Day !!");
	 	sleep(5);
	 }
	 else{
	 	printf("\n\n Thanks for using my Program : \n\n\t\t Else part  !!");
	 }
}

void program(){
	system("clear");
	int n;
	printf("\n\t----------------------\t\t\t\t\t\t\t\t----------------------------\n");
	printf("\tMade By: Rulo Abhishek  \t\t\t\t\t\t\tSubmitted to: Pushpendra Sir \n");
	printf("\t----------------------  \t\t\t\t\t\t\t---------------------------- \n");
	printf("\n\t\t\t\t\t--------------------------------------\n");
	printf("\n\n\t\t\t\t\tWELCOME TO MY OPERATING SYSTEM PROGRAM \n");
	printf("\n\n\t\t\t\t\t-------------------------------------- \n\n");
	printf("\n\n\t\t Enter the Number of Process ::");
	scanf("%d",&n);
	struct OS o[n],temp;
	int j,i;
	system("clear");
	printf("\n\n\nEnter name from \n\n \t a \t b \t c \t d \t e \t f \t g \t h \t i \t j\n\n\n\n\t\t\t\t    !!!!  Wait for 5 Seconds  !!!! \n\n \t\t\t\t !!!!  Thanks for your Patience  !!!!\n\n");
	sleep(5);
		
	// logic to take input
		
	for(i=0;i<n;i++){
		system("clear");
		printf("\n\n\t\tEnter number %d  name :",i+1);
		scanf("%s",o[i].name);
		printf("\n\n\t\tEnter number %d quantity number:",i+1);
		scanf("%d",&o[i].quantity);
	}system("clear");
	printf("\n\n\t\t\t\t Wait for 5 seconds  !!!  Let me Process !!\n\n");
	sleep(10);
	
	// displaying the entered name along with quantity
	
	system("clear");
	printf("\n\n\t\t\t\t    ## Entered\t NAME \t QUANTITY  ##\n\n");
	printf("\n\n\t\t\t\t---- \t\t\t\t-------------");
	printf("\n\t\t\t\tName \t\t\t\tGift Quantity\n");
	printf("\t\t\t\t---- \t\t\t\t-------------\n\n");
	for(i=0;i<n;i++){
		printf("\n\n\t\t\t\t%s \t\t\t\t %d",o[i].name,o[i].quantity);
	}
	
	// logic to sort structure array on the basis of quantity
	
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(o[j].quantity<o[j+1].quantity){			
			temp=o[j];
			o[j]=o[j+1];
			o[j+1]=temp;	
			}
		}
	}
	printf("\n\n\n\n\t\t\t\t !!!!   Sorting Your process   !!!!\n");
	// printing after sorting
	
	sleep(5);
	system("clear");
	
	printf("\n\t\t\t  ####  After sorting by their quantity  ####\n\n");
	printf("\t\t\t\t---- \t\t --------\n");
	printf("\t\t\t\tName \t\t Quantity\n");
	printf("\t\t\t\t---- \t\t --------\n\n");
	for(i=0;i<n;i++){
		printf("\n\n\t\t\t\t%s \t\t %d",o[i].name,o[i].quantity);
	}
	printf("\n");
	sleep(3);
	
	// calling print function with price 
	
	printBill(o,n);
	
	// 
}

#define KYEL  "\x1B[33m"
   
// driver function to test the progam 
   
int main(){
	printf("\e[38;5;196m Foreground color: red\n");
	printf("%syellow\n", KYEL);
	int st;
	do{
	system("clear");
	printf("\n\n 1. Enter the program \n\n 2. Exit\n\n \t\t Enter your choice :: ->");
	scanf("%d",&st);
	switch(st){
		case 1: program();
				break;
		case 2:exit(0);
				break;
		default:printf("\n You have entered wrong choice\n\n Press any key to continue ::\n\n ");		
	}
	}while(st!=2);

}

