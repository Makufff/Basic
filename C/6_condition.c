#include <stdio.h>
/*
    if (condition) 
    {
        if true do 
    }
    else {
        if false do
    }

    or 

    if (condition) {
        if true do
    }
    else if (condition){
        if false if true do
    }
    else {
        if false do
    }
*/
int main(int argc, char const *argv[])
{
    int a = 2 , b = 3 ;

// Version 1

    if (a < b) {
        printf(" A < B");
    }
    else {
        printf("B > A");
    }

// Version 2

    if (a < b) {
        printf(" A < B");
    }
    else if (a > b) {
        printf("B > A");
    }
    else{
        printf("B = A");
    }
    return 0;

}
