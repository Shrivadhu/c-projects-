#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    printf("WELCOME TO THE GAME\n");
    srand(time(NULL));
    
    int guess,random,atempt=0;
     random = (rand() % 100) + 1;  
    do{
        atempt++;
        printf("Enter the Guess between 1 to 100\n");
        scanf("%d",&guess);
        if(guess<random)
        {
            printf("The random number is larger\n");
        }
        else if(guess>random)
        {
            printf("The random number is smaller\n");
        }
        else{
            printf("you have guessesd the correct number and it is %d and the number of atempts taken are %d\n",guess,atempt);
        }

    }while(guess!=random);
    
}