#include <stdio.h>
#include <time.h>
#include <math.h>
#include <string.h>

int main(){
    //C Program to multiply two numbers
//    int a = 30;
//    int b = 5;
//    int c = a * b;
//    printf("The product of 30 and 2 is %d", c);
//
//    //C Program to calculate average of numbers
//    int d = (a+b)/2;
//    printf("\nThe average of 30 and 2 is %d", d);
//
//    //C Program to print quotient and remainder
//    printf("\nThe quotient of 30 and 2 is %d", a/b);
//    printf("\nAnd the remainder of 3 and 2 is %d", a%b );
//
//    //C Program to print size of int, char, float, double
//    char arg[] = "Hello";
//    float argv = 12.243;
//    double argc = 12.1412124781642817246;
//    printf("\nThis is a Character variable size for Hello: %d", sizeof(arg));
//    printf("\nThis is a float variable size for 12.243: %d", sizeof(argv));
//    printf("\nThis is a double variable size for 12.1412124781642817246: %d", sizeof(argc));
//    printf("\nThis is a int variable size for 30: %d", sizeof(a));
//
//    //C Program to swap two numbers
//    int swap = a;
//    a = b;
//    b = swap;
//    printf("\nNow the variables a and b are swapped: %d %d\n", a, b);
//
//    //C Program to check if number is odd or even
//    if(a % 2 == 0 ){
//        printf("%d", a);
//    }
//    else{
//        printf("No this is not an even number (odd) ");
//    }
//
//    //C Program to find minimum numbers from entered numbers
//    int num;
//    int placeholder;
//    int minimum_digit = 9;
//
//    printf("\nEnter your number here ");
//    scanf("%d", &num);
//
//    if(num < 0){
//        num = -num;
//    }
//    else if (num == 0){
//        minimum_digit = 0;
//        printf("The minimum digit is %d", minimum_digit);
//    };
//
//    while (num > 0 ){
//        placeholder = num % 10;
//        if (placeholder < minimum_digit){
//            minimum_digit = placeholder;
//        }
//        num = num/10;
//    }
//    printf("\nThis is your minimum digit %d", minimum_digit );
//
//    //C Program to find maximum numbers from entered numbers
//    int maximum_digit = 1;
//    printf("\nEnter your number here ");
//    scanf("%d", &num);
//
//    if(num < 0){
//        num = -num;
//    }
//    else if (num == 9){
//        maximum_digit = 9;
//        printf("The Maximum digit is %d", minimum_digit);
//    };
//
//    while (num > 0){
//        placeholder = num % 10;
//        if (placeholder > maximum_digit){
//            maximum_digit = placeholder;
//        }
//        num = num/10;
//    }
//    printf("\nThis is your Maximum digit %d", maximum_digit );
//
//    //C Program to check if given year is leap year or not
//    int year;
//    printf("\nType your favorite year: ");
//    scanf("%d", &year);
//    printf("\nThis is your favorite year: %d", year);
//    printf("\nIs this a leap year?");
//
//    if(year % 4 == 0){
//        printf("\nYES!");
//    }
//    else{
//        printf("\nNO!");
//    }
//
//    //C Program to check if given character is digit or alphabet
//    char character;
//    printf("\nType anything you want");
//    scanf(" %c", &character);
//    printf("\nYou wrote: %c", character);
//
//    if(character >= 'a' && character <= 'z' || character >= 'A' && character <= 'Z'){
//        printf("\nYou Typed a LETTER!!!");
//    }
//    else if(character >= '0' && character <= '9'){
//        printf("\nYou typed a Number!!!!");
//    }
//    else{
//        printf("\nYou Typed a SPECIAL CHARACTER!!!!");
//    }
//
//    //C Program to find factorial of number
//    int factorial_num;
//    printf("\nType a number and I will find the factorial of it!");
//    scanf("%d", &factorial_num);
//    int multiplier = 1;
//
//    for(int i = 1; i <= factorial_num; i++){
//        multiplier *= i;
//    }
//    printf("The factorial of %d is %d", factorial_num, multiplier);
//
//    //C Program to find factorial of number with recursion
//    int factorial(int n){
//        if(n <= 1){
//            return 1;
//        }
//        else{
//            return n * factorial(n - 1);
//        }
//    }
//    int fact_num;
//    printf("\nEnter your number and I will give you the factorial! (Recursive style)");
//    scanf("%d", &fact_num);
//    int fact_result = factorial(fact_num);
//    printf("\nYou Typed %d and your factorial for it is %d", fact_num, fact_result);
//
//    //C Program to generate multiplication table
//    printf("Do you want the Multiplication table? 1 for YES, 0 for NO");
//    int ans;
//    scanf("%d", &ans);
//    if(ans == 1){
//        for(int i = 1; i < 11; i++){
//            for (int j = 1; j < 11; j++){
//                int table = i * j;
//                printf("\n%d", table);
//            }
//        }
//    }
//    else{
//        return 0;
//    }
//
////    C Program to print fibonacci series
//    int firstTerm = 0;
//    int secondTerm = 1;
//    int nextTerm;
//    int maxterm;
//    printf("How long do you want the fibonacci Sequence to go for? ");
//    scanf("%d", &maxterm);
//    for(int i = 1; i <= maxterm; i++){
//        printf("%d",firstTerm);
//        if(i < maxterm){
//            printf(", ");
//        }
//        nextTerm = firstTerm + secondTerm;
//        firstTerm = secondTerm;
//        secondTerm = nextTerm;
//    }

    //Fibonacci Sequence with recursion
//    int fibonacci(int nextTerm){
//        if (nextTerm <= 1){
//            return nextTerm;
//        };
//        return fibonacci(nextTerm - 1) + fibonacci(nextTerm - 2);
//    }
//    int num =  TOOO HARD I CAN'T;

    //C Program to find GCD of two numbers
//    int gcd(int a, int b){
//        if(b == 0){
//            return a;
//        }
//        else{
//            return gcd(b, a%b);
//        }
//    }
//    printf("%d", gcd(4, 2));

    //Find the LCM of two numbers
//    int num1, num2, num3;
//
//    printf("Print the two numbers that you want to find the LCM of");
//    scanf("%d %d", &num1, &num2);
//
//    num3 = (num1 > num2)?num1:num2;
//
//    while(1){
//            if ((num3 % num1 == 0) && (num3 % num2 == 0)){
//                printf("The LCM of %d and %d is %d", num1, num2, num3 );
//                break;
//            }
//            ++num3;
//    }

    //Reverse a number
//    printf("Type a number and I will reverse it!");
//    char rev_num[21];
//    scanf("%s", rev_num);
//    int len = strlen(rev_num);
//    int j = 0;
////    printf("%d", len);
//    char rev_num2[len];
//
//    for(int i = len - 1; i > -1; i--){
//        rev_num2[j] = rev_num[i];
//        j++;
//    }
//    printf("%s", rev_num2);

    //C Program to calculate power of number
//    printf("Type the number that you want the power of and also the power it self ");
//    int pow1, pow2, ans;
//    ans = 1;
//    scanf("%d %d", &pow1, &pow2);
//    for(int i = 0; i < pow2; i++){
//        ans *= pow1;
//    }
//    printf("This is the power of your number!! %d ", ans);
}
