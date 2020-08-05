#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
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

//char name[30];
//printf("Hey pal!What is your name?\n\n\n");
//scanf("%s",name);
//printf("Welcome to our grocerry store %s.\n\n",name);
//printf("Here are the list of items we have in our store with their respective prices.\n\n");
//int lays = 20;
//int kurkure = 20;
//int chips = 25;
//int pepsi = 30;
//printf("a:lays= %d rupees\nb:kurkure= %d rupees\nc:chips= %d rupees\nd:pepsi= %d rupees\n",lays,kurkure,chips,pepsi);
//printf("\n\nWrite the quantity of each item you want from us in order. If you dont want to have a particular item, you can put the value 0 to it.\n");
//int a;
//int b;
//int c;
//int d;
//printf("lays:\n");
//scanf("%d",&a);
//printf("kurkure:\n");
//scanf("%d",&b);
//printf("chips:\n");
//scanf("%d",&c);
//printf("pepsi:\n");
//scanf("%d",&d);
//printf("Here is the total bill you have to pay.\n");
//int amount;
//amount = (20*a)+(20*b)+(25*c)+(30*d);
//printf("%d rupees\n",amount);
//printf("\n\nHave a great day %s.Have fun.\n",name);
//printf("\n\nSee you soon.\n");

//int i = 10;
//   if(i>15)
//   {
//       printf("10 is greater than 15");
//   }
//   else
//   {
//       printf("10 is less than 15");
//   }
//
//   printf("I am not in if");

//int n = 100;
//    printf("%s",n>90?"Grade A":(n>80?"Grade B":(n>60?"Grade C":(n>40?"Grade D":"Grade F"))));

//printf("Enter the marks of the student:");
//int marks = 0;
//scanf("%d",&marks);
//if(marks>=85 && marks <=100 )
//{
//    printf("\nGrade A\n");
//}
//else if(marks>=70 && marks<=84)
//{
//    printf("\nGrade B\n");
//}
//else if(marks>=55 && marks<=69)
//{
//    printf("\nGrade C\n");
//}
//else if(marks>=40 && marks<=54)
//{
//    printf("\nGrade D\n");
//}
//else if (marks>=0 && marks<=39)
//{
//    printf("\nGrade F\n");
//}
//else
//{
//    printf("Invalid input.\n");
//    printf("Please enter correct marks.\n");
//}

//printf("Pick an item.\n1.pen\n2.pencil\n3.eraser\n4.book\n");
//int choice=0;
//scanf("%d",&choice);
//switch (choice) {
//    case 1:
//        printf("You have picked pen.\n");
//        break;
//    case 2:
//        printf("You have picked pencil.\n");
//    case 3:
//        printf("You have picked eraser.\n");
//    case 4:
//        printf("You have picked book.\n");
//    default:
//        printf("Invalid input.\n Enter correct value.\n");
//        break;
//}
