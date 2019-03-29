#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>


  // made and owned by :- 
  
 // ####### #	  # #       000000
 // #     # #     # #      0      0
 // #	  # #     # #      0      0
 // ######  #     # #      0      0
 // ##      #	  # #      0      0
 // #  #	#	  # #      0      0
 // #    #   #####  ######  000000




struct OS{
	char name[10];
	int quantity;
	
};


void gotoxy(int ,int);

void intro1();
void intro1()
{   system("color C0");
 	Sleep(10);
	int top=1,left=39,right=80,bottom=6,i;
        gotoxy(39,0);for(i=0;i<42;i++)printf("%c",178);  //for first horizontal line
        for(i=-1;i<15;i++)   //for vertical lines
		{  system("color A0");
			gotoxy(38,1+i);printf("%c",178);// 1st vertical 
			gotoxy(39,1+i);printf("%c",178);
			gotoxy(81,1+i);printf("%c",178); // 2nd vertical 
	        gotoxy(82,1+i);printf("%c",178);
		} 
        for(i=0;i<42;i++)//lower horizontal lines
		{ system("color B0");
			gotoxy(i+39,15);printf("%c",178);
		}
        gotoxy(2,25);printf(" Made by :-    RULO ABHISHEK ");
        gotoxy(2,28);for(i=0;i<30;i++)printf("%c",178);
		gotoxy(85,25);printf("Submitted to :-PUSHPENDRA SIR "); 
		gotoxy(85,28);for(i=0;i<30;i++)printf("%c",178);
		
		for(i=0;i<37;i++)// for inner horizontal design
		{ system("color C6");
			gotoxy(42+i,3);printf("%c",035);
			gotoxy(42+i,12);printf("%c",030);
		} 
		for(i=2;i<12;i++)   //for innner vertical lines
		{ system("color E9");
			gotoxy(41,1+i);printf("%c",035);
			gotoxy(79,1+i);printf("%c",035);
     	} 
		gotoxy(43,5);printf("      WELCOME TO MY PROJECT");
		gotoxy(42,9);printf("    LONGEST REMAINING TIME FIRST ");                                 	

}

void gotoxy(int x,int y)
{
	HANDLE Manipulador;
	COORD Coordenadas;
	Manipulador=GetStdHandle(STD_OUTPUT_HANDLE);
	Coordenadas.X=x;
	Coordenadas.Y=y;
	SetConsoleCursorPosition(Manipulador,Coordenadas);
}


int main(){
	struct OS o[10],temp;
	int j,i;
	intro1();
	getchar();
	system("cls");
	gotoxy(40,0);
	printf("WELCOME TO MY OPERATING SYSTEM PROGRAM \n\n");
	printf("Enter name from \n\n \t a \t b \t c \t d \t e \t f \t g \t h \t i \t j");
		getch();
		
	// logic to take input
		
	for(i=0;i<10;i++){
		system("cls");
		printf("\nEnter number %d  name :",i+1);
		scanf("%s",o[i].name);
		printf("\nEnter number %d quantity number:",i+1);
		scanf("%d",&o[i].quantity);
	}
	
	// displaying the entered name along with quantity
	
	system("cls");
	printf("Entered name and quantity are as follows::\n\n");
	printf("\nName \t\t Gift Quantity\n\n");
	for(i=0;i<10;i++){
		printf("\n%s \t\t %d",o[i].name,o[i].quantity);
	}
	printf("\n\n\t\tPress any key to continue ::");
	getch();
	// logic to sort structure array on the basis of quantity
	
	for(i=0;i<10;i++){
		for(j=0;j<9;j++){
			if(o[j].quantity<o[j+1].quantity){			
			temp=o[j];
			o[j]=o[j+1];
			o[j+1]=temp;	
			}
		}
	}
	
	// printing after sorting
	
	getchar();
	system("cls");
	printf("After sorting by their quantity::\n\n");
	printf("Name \t\t Quantity");
	for(i=0;i<10;i++){
		printf("\n%s \t\t %d",o[i].name,o[i].quantity);
	}
	  char ch;
	  float price;
	  printf("\n\n\tDo you want to print Bill :");
	  printf("\n\n\tEnter 'y' for yes and 'n' for NO ::");
	  scanf("%c",&ch);
     if(ch=='y'|| ch=='Y'){
     	system("cls");
     	printf("\n\n Enter the price of One gift :");
     	scanf("%f",&price);
     	system("cls");
     	printf("\n\n Bill of every customer In order are ::");
     	printf("\n Name \t\t Quantity \t\t Price ");
     	for(i=0;i<10;i++){
     		printf("\n%s \t\t %d \t\t %f",o[i].name,o[i].quantity,o[i].quantity*price);	
		 }
	 }
	 else{
	 	system("cls");
	 	printf("\n\n Thanks for using my Program : \n\n\t\t Have a Great Day !!");
	 	getch();
	 }
}
