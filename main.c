#include <stdio.h>
#include <stdbool.h>
int main()
{
    printf("Enter a number between 1 and 5.You will get the food item you want to eat and its price.\n");
    int choice = 0;
    scanf("%d",&choice);
    switch (choice) {
        case 1:
            printf("Food item - Pasta\nPrice - Rs 179\n");
            break;
        case 2:
            printf("Food item - Pizza\nPrice - Rs 239\n");
            break;
        case 3:
            printf("Food item - Burger\nPrice - Rs 129\n");
            break;
        case 4:
            printf("Food item - Sandwich\nPrice - Rs 149\n");
            break;
        case 5:
            printf("Food item - French Fries\nPrice - Rs 99\n");
            break;
        default:
            printf("Invalid input.\nPlease enter a valid input.\n");
            break;
    }
    
    
}

