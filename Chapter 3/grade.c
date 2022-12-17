//Writr a program to check a student is pass or fail
#include<stdio.h>
int mian () {
    int marks;
    printf("Enter the number(0-100): ");
    scanf("%d", &marks);

    if(marks < 30) {
      printf("C \n");
    }else if(marks >= 30 && marks <= 70) {
        printf("B \n");
    }else if(marks >= 70 && marks <= 90 ){
        printf("A \n");
    }else{
        printf("A+ \n");
    }
    return 0;
}
