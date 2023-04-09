#include <stdio.h>
/*
while (testExpression) {
  // the body of the loop 
}

do {
  // the body of the loop
}
while (testExpression);

for (initializationStatement; testExpression; updateStatement)
{
    // statements inside the body of loop
}


*/


int main(int argc, char const *argv[])
{
    // while loop
    int i = 1;
    while (i <= 5) {
        printf("%d\n", i);
        ++i;
    }

    // do while loop 
    double number, sum = 0;
    do {
        printf("Enter a number: ");
        scanf("%lf", &number);
        sum += number;
    }
    while(number != 0.0);
    printf("Sum = %.2lf",sum);

    // for loop
    for (i = 1; i < 11; ++i)
    {
        printf("%d ", i);
    }
    
    return 0;
}
