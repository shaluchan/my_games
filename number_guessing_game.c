#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number , guess, nguesses=1;
    srand(time(0));
    number= rand()%100+1;
    //printf("the number is %d\n", number);
   // keep running the loop until the number is guessed
   do{
    printf("guess the number between 1 to 100\n");
    scanf("%d",&guess);
    if(guess>number)
    { printf("NOOB!! choose a lower number\n");}
    else if(guess<number)
    {
        printf("choose a higher number\n");
    }
    else 
    {
        printf("CONGRATULATIONS!!!! U GUESSED THE RIGHT NUMBER IN %d ATTEMPTS\n", nguesses);
    }
 nguesses++;
   }
   while( guess!=number);
   if(nguesses>2)
   {
    printf("BRUHH!! u took so much tym...");
   }
   else{
    printf("awesome MAN!!! -_-");
   }
    return 0;

}