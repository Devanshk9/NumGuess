#include<stdio.h> 
#include<stdlib.h>
#include<time.h>


int main() { 
    printf("******Hello Everyone******\n");
    printf("Welcome to the NUMGUESS a Number Guessing game\n");
    puts("Created bu Devansh Khetan");
    srand(time(0));
    int randomNumber = rand() % 100 +1;
    int input;
    while(input!=randomNumber){
    printf("Enter the number you guess between 1 to 100 : ");
    scanf("%d", &input);

    if (input>randomNumber)
    {
        puts("You have gone higher think lower");
    }
    if (input<randomNumber)
    {
        puts("You have gone lower think higher");
    }
    }
    printf("You WON, YOU Guessed the Right NUMBER");
    return 0;
}
