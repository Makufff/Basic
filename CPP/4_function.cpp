#include <iostream>
using namespace std ;

void hello_1(){
    cout << "Hello World!";
}

string hello_2(){
    return "Hello World!";
}

int add (int a , int b){
    return a + b ;
}

int remove (int a , int b) ; // fn prototype

int main(int argc, char const *argv[])
{
    cout << add(10 , 5);
    return 0;
}
