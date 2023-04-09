#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("%d\n" , 5 + 3);  // int -> output 8
    printf("%d\n" , 5 - 3);  // int -> output 2
    printf("%d\n" , 5 * 3);  // int -> output 15
    printf("%d\n" , 5 / 3);  // int -> output 1
    printf("%d\n" , 5.0 / 3.0);  // int -> output -143165576....
    printf("%f\n" , 5 / 3); // float -> output 1.66667
    return 0;
}
