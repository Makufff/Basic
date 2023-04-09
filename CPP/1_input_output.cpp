#include <iostream>

int main(int argc, char const *argv[])
{
    // output

    std::cout << "Hello World!" ; 

    // input

    int input ;
    std::cin >> input ;
    std::cout << input ;  
    
    // input and output Variables 
    int a = 1 ; 
    float b = 20 ; 
    bool c = true ; 
    char d = 'x' ; 
    std::string e = "Hello World" ; 
    std::cin >> a >> b >> c >> d ; 
    std::cout << a << b << c << d ;

    // fixed and setprecision() ; 
    float pi = 3.14 ;
    std::cout << std::fixed << std::setprecision(5) << pi ;

    // ascii
    int number = 65 ; 
    std::cout << char(number) ;
    return 0;

    //  comment
    
    /* 
        comment
    */

}
