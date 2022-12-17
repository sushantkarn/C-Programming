//Writr a program to check a student grades
#include<stdio.h>
int mian() {
    int marks;
    printf("Enter the number(0-100): ");
    scanf("%d", &marks);

    if(marks >=0 && marks <= 30)
    {
      printf("Your are Fail \n");
    }else if(marks > 30 && marks <= 100) {
        printf("Your are Pass \n");
    }else{
        printf("Wrong mark \n");
    }
    
    // mark <= 30 ? printf("You are pass \n") : printf("You are fail \n"); 

    return 0;
}