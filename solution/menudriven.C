#include<stdio.h>
#include<conio.h>
void addition();
void substraction(int,int);
int division();
int modulus(int,int);
int menu();
void main()
{
	int c,x,y,div;
	char yn;
	clrscr();
	do
	{
	  c=menu();
	  switch(c)
	  {
	      case 1:
			addition();
			break;
	      case 2:
			printf("\n Enter 2 value:");
			scanf("%d %d",&x,&y);
			substraction(x,y);
			break;
	      case 3:
			div=division();
			printf("\n division is : %d",div);
			break;
	      case 4:
			printf("Enter 2 value:");
			scanf("%d %d",&x,&y);
			div=modulus(x,y);
			printf("\n Modulus of %d and %d is %d",x,y,div);
			break;
	      case 5:
		       exit(0);
	      default:
			printf("Invaild choice");
	     }
	   printf("\n\n\t Do you want Continue?(yes=Y/y,no=N/n:)");
	   flushall();
	   scanf("%c",&yn);
	   }while(yn=='y'||yn=='Y');
	   getch();
      }
      int menu()
      {
	int choice;
	printf("\n Menu");
	printf("\n----------\n 1.Addition\n 2.substraction\n 3.division\n 4.modulus\n 5.exit\n--------\n");
	printf("\n\n\t Enter your choice:");
	scanf("%d",&choice);
	return choice;
      }
      void addition()
      {
	 int x,y;
	 scanf("%d %d",&x,&y);
	 printf("\n Addition of %d and %d is %d",x,y,x+y);
      }
      void substraction(int x,int y)
      {
	printf("substraction of %d and %d is %d ",x,y,x-y);
      }
      int division()
      {
	int x,y;
	scanf("%d %d",&x,&y);
	return(x/y);
      }
      int modulus(int x,int y)
      {
	return(x%y);
     }
