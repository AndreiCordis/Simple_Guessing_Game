#include <stdio.h>
#include <stdlib.h>


int main()
{
    int secretNumber=7,count=0,flag=0,guess,hearts;

    printf("This is a simple guessing game.\n\n");
    printf("How many attempts(hearts) would you like to have?\nPlease enter an integer.\n");
    scanf("%d", &hearts);
    printf("You have %d hearts\nGood luck!\n\n", hearts);

    while(guess != secretNumber && flag==0)
    {
        if(count<hearts)
        {
            printf("Enter a number: ");
            scanf("%d", &guess);
            count++;

            if(guess<secretNumber)
            {
                printf("The secret number is bigger\n");
                printf("\nYou can try to guess %d more time(s)\n\n", (hearts-count));
            }else if(guess>secretNumber){
                printf("The secret number is smaller\n");
                printf("\nYou can try to guess %d more time(s)\n\n", (hearts-count));
            }
        }else{
            flag=1;
        }
    }

    if(flag==1){
        printf("Sorry you're out of guesses..");
    }else{
        printf("You Won!\n");
    }

    return 0;
}
