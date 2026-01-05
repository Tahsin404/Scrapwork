#include <stdio.h>
#include <time.h>
#include <math.h>
#include <time.h>
#include <string.h>
#define pi 3.141592655

int areaRec(){
    printf("Give your preffered measurements for the rectangle's area: (length) (width) ");
    int len,wid,res;
    scanf("%d %d", &len,&wid);
    res = len*wid;
    printf("This is the area of the rectangle for which the measurements of %dm and %dm were given: %d", len, wid, res);
}

int marksheet(){
    printf("\nGive your final exam marks to be evaluated: ");
    int marks, grades;
    scanf("%d", &marks);
    if(marks >= 90){
        printf("\nGrade A");
    }
    else if((marks >=80) && (marks < 90)){
        printf("\nGrade B");
    }
    else if((marks >= 70) && (marks <80)){
        printf("\nGrade C");
    }
    else if((marks >= 60) && (marks <70)){
        printf("\nGrade D");
    }
    else if(marks < 60){
        printf("\nFail");
    }
}

int month(){
    int months;
    printf("\nType the number that your month represents: (1-12)");
    scanf(" %d", &months);
    switch(months) {
        case 4:
        case 6:
        case 9:
        case 11:
            printf("\nThis is a 30 day month");
            break;
        case 2:
            printf("\nThis is a 28 day month");
            break;
        default:
            printf("\nThis is a 31 day month");
            break;
    };
}

int areaCirc(){
    printf("\nType the radius of the circle you want to find the area of");
    int rad, area;
    float area2;
    scanf(" %d", &rad);
    area = rad*rad;
    area2 = rad*rad*pi;
    printf("\nThis is the area of your circle %dpi or %.2f", area, area2);
}

int leapYear(){
    int year;
    printf("\nType your year to check if it is a leap year or not");
    scanf("%d", &year);
    if (year < 0 ){
        year = -year;
        printf("\nYear cannot be negative you dumbass");
    }
    if (year % 4 == 0){
        printf("\nYes it is a Leap Year!!");
    }
    else{
        printf("\nNo it is not a Leap year!");
    }
}

int week(){
    int week;
    printf("Type the number of the day you want to find: (1-7)");\
    scanf("%d", &week);
    switch(week){
        case 1:
            printf("\nYour day is Sunday");
            break;
        case 2:
            printf("\nYour day is Monday");
            break;
        case 3:
            printf("\nYour day is Tuesday");
            break;
        case 4:
            printf("\nYour day is Wednesday");
            break;
        case 5:
            printf("\nYour day is Thursday");
            break;
        case 6:
            printf("\nYour day is Friday");
            break;
        case 7:
            printf("\nYour day is Saturday");
            break;
        default:
            printf("\nNumber does not fall under the week");
            break;
    }
}

int main(){
    areaRec();
    marksheet();
    month();
    areaCirc();
    leapYear();
    week();
}
