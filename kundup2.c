#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void printmenu();
int main()
{
    int choice,first, sec,res;
    printf("----------------------------------\n");
    printf("choose the following options\n");
   while(1){
    printmenu();
      scanf("%d",&choice);
    if(choice==7)
    break;
    if(choice>=1&& choice <=6)
    {
        printf("enter the 1st num\n");
        scanf("%d",&first);
        printf("enter the 2st num\n");
        scanf("%d",&sec);
    }
  
    switch(choice){
        case 1:{
            printf("ADD\n");
            res=first+sec;
            printf("Result: %d\n", res);
            break;
        }
        case 2:{
            printf("SUBSTRACT\n");
             res=first-sec;
             printf("Result: %d\n", res);
            break;
        }
        case 3:{
            printf("MULTIPLY\n");
             res=first*sec;
             printf("Result: %d\n", res);
            break;
        }
        case 4:
        if(sec!=0)
        {

            printf("DIVISION\n");
             res=first/sec;
             printf("Result: %d\n", res);
            
        }
        else{
             printf("Error: Division by zero is not allowed.\n");  
        }
        break;
         case 5: {
    printf("MODULO\n");
    if (sec != 0) {
        res = first % sec;
        printf("Result: %d\n", res);
    } else {
        printf("Error: Modulo by zero is not allowed.\n");
    }
    break;
}
case 6: {
    printf("POWER\n");
    res = pow(first, sec);
    printf("Result: %d\n", res);
    break;
}


    
}
   }}

void printmenu() {
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");
    printf("4. DIVISION\n");
    printf("5. MODULO\n");
    printf("6. POWER\n");
    printf("7. EXIT\n");
}
