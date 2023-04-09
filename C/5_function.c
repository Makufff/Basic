#include <stdio.h>
/*
datatype function_name (Parameter)
{
    script :3
    return value of datatype function
}
*/
void HELLO (){
    printf("Hello World!");
}
int plus (int a , int b){
    return a + b ;
}

int main(int argc, char const *argv[])
{
    HELLO();
    printf("\n%d" , plus(1,2));
    return 0;
}
