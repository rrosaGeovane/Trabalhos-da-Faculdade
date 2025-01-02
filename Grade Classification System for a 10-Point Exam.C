#include<stdio.h>

int main(){

    float grade;

    printf("Enter the student's 10-point exam grade: ");
    scanf("%f", &grade);

    if(grade <= 10 && grade > 8){
        printf("Classification: A");
    }
    else if(grade <= 8 && grade > 6){
        printf("Classification: B");
    }
    else if(grade <= 6 && grade > 4){
        printf("Classification: C");
    }
    else if(grade <= 4 && grade > 2){
        printf("Classification: D");
    }
    else{
        printf("Classification: E");
    }

    return 0;
}
