#include <stdio.h>

int main(int argc, char const *argv[])
{
    // print string
    printf("C Programming");
    // print integer
    printf("Number = %d", 5);
    // print float and double
    printf("number1 = %f\n", 1.23); // <-- float
    printf("number2 = %lf", 5.4568); // <-- double
    // print char
    printf("character = %c", 'a');  

    // input and output of integer

    int testInteger;
    printf("Enter an integer: ");
    scanf("%d", &testInteger);  
    printf("Number = %d",testInteger);

    // input and output of float and double

    float num1;
    double num2;

    printf("Enter a number: ");
    scanf("%f", &num1);
    printf("Enter another number: ");
    scanf("%lf", &num2);

    printf("num1 = %f\n", num1);
    printf("num2 = %lf", num2);

    // input and output of char

    char chr;
    printf("Enter a character: ");
    scanf("%c",&chr);     
    printf("You entered %c.", chr);  

    // using ascii value

    char chr;
    printf("Enter a character: ");
    scanf("%c", &chr);     

    // When %c is used, a character is displayed
    printf("You entered %c.\n",chr);  

    // When %d is used, ASCII value is displayed
    printf("ASCII value is %d.", chr);  

    //Multiple input and output
    
    int a;
    float b;

    printf("Enter integer and then a float: ");
  
    // Taking multiple inputs
    scanf("%d%f", &a, &b);

    printf("You entered %d and %f", a, b);  
    return 0;
}
