//Write a c program to find the grade of a student base on their score

#include<stdio.h>
int main(){
    int grade;
    scanf("%d",&grade);

    if (grade >= 90)
    {
        printf("Grade A");
    }
    else if(grade >=80 && grade <90){
        printf("Grade B");
    }
    else if(grade >= 70 && grade < 80){
        printf("Grade C");
    }
    else if(grade >= 60 && grade < 70){
        printf("Grade D");
    }
    else{
        printf("Grade F");
    }
    
    return 0;
}