#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{int number;
//srand(time(0))- a function to generate random numbers.
srand(time(0));

/*rand() generates a bigger number, so to bring it in a small number or bringing it in a range we
have taken modulus of division by 100 (since the remainder will only be less than 100) and then add 1, to bring the
range between 1 to 100 */

number=rand()%100 +1;
int guess,chances=1, difference;
printf("GUESS THE NUMBER\n");
printf("In this game a random number is generated and you have to guess it in the least possible chances \n");
printf("Fire- very close\n");
printf("Too HOT- nearby\n");
printf("HOT- neutral\n");
printf("Cold- far\n");
printf("ICE Cold- very far\n");
printf("\n");
do{
printf("Guess a number between 1 to 100\n");
scanf("%d",&guess);

difference=guess-number;
if(guess==number)
	{printf("You have guessed the correct number.\nYou took %d attempts.",chances);}

else if((difference>=-5 && difference<0) || (difference<=5 && difference>0))
	{printf("FIRE\n");
		if(difference<0)
			{printf("Guess a bigger number\n");}
		else printf("Guess a smaller number\n");}

else if((difference>=-25 && difference<-5 )||(difference<=25 && difference>5))
	{printf("Too HOT\n");
		if(difference<0)
			{printf("Guess a bigger number\n");}
		else printf("Guess a smaller number\n");}

else if((difference>=-40 && difference<-25) || (difference<=40 && difference>25))
	{printf("Hot\n");
		if(difference<0)
			{printf("Guess a bigger number\n");}
		else printf("Guess a smaller number\n");}
else if((difference>=-60 && difference<-40) || (difference<=60 && difference>40))
	{printf("Cold\n");
		if(difference<0)
			{printf("Guess a bigger number\n");}
		else printf("Guess a smaller number\n");}
else if(difference<-60 || difference>60)
	{printf("ICE COLD\n");
		if(difference<0)
			{printf("Guess a bigger number\n");}
		else printf("Guess a smaller number\n");}


chances++;
}while(guess!=number);

printf("The number is %d",number);
return 0;}
