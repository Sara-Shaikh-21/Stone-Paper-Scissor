#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main()
{
   
    int computer;
    int i;
    char ans;
    int Pscore =0;
    int Cscore =0;
    int choice;
    srand(time(NULL));
    clrscr();

printf("\n\n\n\n\n\n\n\t\t");

printf("- - - - - WELCOME TO STONE PAPER GAME - - - - -");
printf("\n \t \n \n ARE YOU READY TO PLAY WITH THE COMPUTER ?");
printf("\n \t \n \n Type 'Y' for YES and 'N' for NO \n");
scanf("%c",&ans);
system("cls");
if(ans=='Y')
{
    printf("\n \n \n Rock=1 , Paper= 2, and Scissors= 3\n");

    for(i=0;i<5;i++)
{
	printf("Enter your choice:");
	scanf("%d",&choice);
	computer=rand()%3+1;
	if(choice==1)
	    {
		if(computer==1)
		{
		    printf("Draw\n");
		}
		if(computer==2)
		{
		    printf("Computer Wins!\n");
		    Cscore= Cscore + 1;
		}
		if(computer==3)
		{
		    printf("Player Wins\n");
		    Pscore = Pscore + 1;
		}
	    }
	    else  if(choice==2)
		     {
			  if(computer==2)
			  {
			    printf("Draw\n");
			   }
			   if(computer==3)
			   {
			   printf("Player Wins!\n");
			   Pscore = Pscore + 1;
			    }
			    if(computer==1)
			    {

			    printf("Computer Wins!\n");
			    Cscore= Cscore + 1;
			    }
		      }
		else if(choice==3)
		   {
		    if(computer==3)
		       {
			printf("Draw\n");
		       }
		    if(computer==2)
		      {
			printf("Computer Wins!\n");
			Cscore= Cscore + 1;
		      }
		    if(computer==1)
		     {
			printf("Player Wins!\n");
			Pscore = Pscore + 1;
		       }
		  }
	else{
	    printf("Wrong Answer\n");
	}
	  }
}
 if(Cscore > Pscore )
{
		printf("\n \n Computer wins %d to %d\n",Cscore,Pscore);
	    }
else if(Cscore < Pscore )
{
		printf("\n \n Player wins %d to %d\n",Pscore,Cscore);
	    }
else if(Cscore ==Pscore )
{
		printf("\n \n No winner it is a draw!\n");
	    }



    getch();
}
