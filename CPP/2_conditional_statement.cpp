#include <iostream>

using namespace std ; 

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0) , cin.tie(0) ; 
    

    // if else if else 
    int n ; cin >> n ; 
    if ( n == 0 ){
        cout << "n is zero"
    }else if (n > 0){
        cout << "n is positive number" ; 
    }else {
        cout << "n is negative number" ; 
    }


    int x = 4  , y = 5 ;
    if (x==4 || !(y==2) && x!=y){
        cout << "This statement is true"
    }else {
        cout << "This statement is false"
    }

    // switch case
    int x ; cin >> x ;
    switch (x)
    {
    case 1:
        cout << "x is 1"
        break;
    case 2:
        cout << "x is 2"
        break;
    default:
        cout << "x isn't 1 and 2"
        break;
    }
    return 0;
}
