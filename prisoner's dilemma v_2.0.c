#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

int sc(int c1,int c2,int r,int i)
 {
 	int s=i-1;
 	int score1[r],score2[r],score[r];
 	if (c1==1 && c2==1)
 	{
 		printf("both of you will get 5 points because you shared my prize\n");
 		score1[s]=5;
 		score2[s]=5;
	 }
	 else if((c1==2) && (c2==2))
	 {
	    printf("both of you will get 1 points because you both wanted to steal my treasue\n");
	    score1[s]=1;
 	    score2[s]=1;
     }
    else if((c1==1 && c2==2) || (c1==2 && c2==1))
    {
    	printf("both of you will get 3 points because one of you dirty rascal tried to steal my prize\n");
    	score1[s]=3;
 		score2[s]=3;
	}
	score[s]=score1[s]+score2[s];
    return score[s];
 }
 int choice()
 { 
     int c1;
     printf("\nyou have been offered $ %d. Will you\n 1.Split it   2.Steal it\n",(rand()%1000+1));
 	 printf("FOR YOU\n:");
	 scanf("%d",&c1);	
	 return c1;
 }
int main()
{
 int i,c1,c2,p,r,j,c,s=0;    //choices 1&2 ,round, no of players , player mode, s=score 
 int so[r];
 srand(time(NULL));
 for(i=0;i<=30;i++)
	{
		printf(" ");
	}
	printf("WELCOME TO PRISONER'S DILEMMA!\n");
	printf("\nI'm the jailer of the Kuimusho prison and confinement and I'm gonna bail you out of this hell but there are some catch to escape this place.\n You, along with your other fellow prisoner shall be provided with some of my hard earned treasuries and you will have to choose whether you will contempt your fellow mate or shall steal it right behind his nose. The fate is yours and you'll be given points based on your decisions.\n So GOOD LUCK and score some nice points to better escape this hell and the points required to win shall be calculated on the basis of rounds you play. SO are you ready?\n");
 printf("\nso how many of you are playing? is it only you or you have a fellow mate with ya? Ya select between 1 and 2\n");
 scanf("%d",&p);
 switch (p){
 	case 1:
 	{
 	    printf("select a prison mate for you such that both you can escape\n");
		printf("1.W.Friedman\n2.A.Polvoski\n3.F.TitforTat\n4.E.Wreinershwarz\n");
		scanf("%d",&c);
		printf("\nHow many rounds will you put your fate from 5-12: ");
 		scanf("%d",&r);
 		printf("\nsurpass %d or more points to get bail\n",r*20/3);
		switch(c)
		{
			case 1:
				{
 		            for(i=1;i<=r;i++)
 		              {
 		                 printf("ROUND %d\n",i);
 		                 c1= choice();
		                 if(i<=r/2)
		                 {
		                 	c2=2;
		                 	printf("the opponent has chosen to steal\n");
						 }
						 else
						 {
						 	c2=1;
						 	printf("the opponent has chosen to contempt\n");
						 }
						 so[i-1]=s;
		                 s=s+sc(c1,c2,r,i);
		                 so[i-1]=s-so[i-1];
		                 printf("the score is %d\n",s);
		                for(j=0;j<=50;j++)
	                     {         
	      	                printf("- ");
	                     }
	                     printf("\n");                                                                                                                                                                                                                                                                                                                        
		              }                                                                                                                                                                                                                                                                                                                               
					break;                                                                                                                                                                                                                                                                                                                               
				}                                                                                                                                                                                                                                                                                                                                    
			  case 2:                                                                                                                                                                                                                                                                                                                                  
			  	{                                                                                                                                                                                                                                                                                                                              
			  		for(i=1;i<=r;i++)                                                                                                                                                                                                                                                                                                         
 		              {                                                                                                                                                                                                                                                                                                                             
 		                 printf("ROUND %d\n",i);                                                                                                                                                                                                                                                                                        
 		                 c1=choice();                                                                                                                                                                                                                                                                                           
		                 if(i%2==0)                                                                                                                                                                                                                                                                                                    
		                 {                                                                                                                                                                                                                                                                                                                  
		                 	c2=2;                                                                                                                                                                                                                                                                                                   
		                 	printf("the opponent has chosen to steal\n");                                                                                                                                                                                                                                                                  
						 }                                                                                                                                                                                                                                                                                                                
   						 else                                                                                                                                                                                                                                                                                                            
						 {                                                                                                                                                                                                                                                                                                                     
						 	c2=1;                                                                                                                                                                                                                                                                                                            
						 }                                                                                                                                                                                                                                                                                                                   
		                 so[i-1] = s-so[i-1];                                                                                                                                                                                                                                                                                                    
		                 printf("the score is %d\n",s);
		                 for(j=0;j<=50;j++)
	                     {         
	      	                printf("- ");
	                     }
	                     printf("\n");
		              }
			  		break;
				  }
				case 3:
					{
					 int o1[r];
						for(i=1;i<=r;i++)
 		              {
 		                 c1=choice();
		                 scanf("%d",&o1[i-1]);
		                 c1=o1[i-1];
		                 if(i==1)
		                 {
		                 	c2=1;
						 }
						 else
						 {
						   c2=o1[i-2];
					     }
					     if(c2==1)
					     {
		                 	printf("the opponent has chosen to split\n");
		                 }
		                 else
		                 {
		                 	printf("the opponent has chosen to steal\n");
						 }
						 so[i-1]=s;
		                 s=s+sc(c1,c2,r,i);
		                 so[i-1]=s-so[i-1];
		                 printf("the score is %d\n",s);
		                 for(j=0;j<=50;j++)
	                     {         
	      	                printf("- ");
	                     }
	                     printf("\n");
		              }
		              break;
					}
				case 4:
				{
					for(i=1;i<=r;i++)
 		              {
 		                 printf("ROUND %d\n",i);
 		                 c1=choice();
		                 c2=2;
		                 printf("the opponent has chosen to steal\n");
		                 so[i-1]=s;
		                 s=s+sc(c1,c2,r,i);
		                 so[i-1]=s-so[i-2];
		                 printf("the score is %d\n",s);
		                 for(j=0;j<=50;j++)
	                     {         
	      	                printf("- ");
	                     }
	                     printf("\n");
		              }
					break;
					}	
			}	
 		 break;
		}
 	case 2:
 		printf("\nso you have a fellow rascal like you isnt it?\n");
 		printf("\nHow many rounds will you put your fate from 5-12: ");
 		scanf("%d",&r);
 		printf("\nsurpass %d or more points to get bail\n",r*20/3);
 		for(i=1;i<=r;i++)
 		{
 		  printf("ROUND %d\n",i);
 		  c1=choice();
		  system("cls");
		  printf("FOR PLAYER 2\n:");
		  scanf("%d",&c2);
		  system("cls");
		  so[i-1]=s;
		  s=s+sc(c1,c2,r,i);
		  so[i]=s-so[i-1];
		  printf("the score is %d\n",s);
		   for(j=0;j<=50;j++)
	       {
	      	 printf("- ");
	       }
	      printf("\n");
		 }
	  break;
	default:
 	{
 		printf("3 or more support coming soon!");
	 }
    }
 if(s>=r*20/3)
 {
 	printf("CONGRATS YOU WIN!!\nYou have managed to get your self out along with your prison mate\n");
 }
 else{
 	printf("BOO!! YOU LOST!\nGive another go next time!\nBYE BYE!\n");
 }
 printf("so the final scores are:\n");
 for(i=1;i<=r*5;i++)
 {
 	printf("=");
 }
 printf("\n|Round|");
  for(i=1;i<=r;i++)
 {
 	printf("%d |",i);
 }
 printf("\n|Score|");
  for(i=1;i<=r;i++)
 {
 	printf("%d |",so[i-1]);
 }
 printf("\n");
  for(i=1;i<=r*5;i++)
 {
 	printf("=");
 }
 
 return 0;
}


