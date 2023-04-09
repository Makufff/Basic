#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n = 10 ;
    // while
    while (n != 0){
        cout << "Hello World\n" ; 
        n-- ;
    }
    // do while
    do{
        cout << "Hello World\n" ; 
        n-- ;
    }while (n != 0);
    // for 
    for (int i = 0 ; i < n ; i++){
        cout << "Hello World\n";
    }

    // Loop : Continue & Break 
    for (int i = 0 ; i < 10 ; i++){
        if (i == 5){
            break ;
        }
        cout << i << " " ; 
    }

    for (int i = 0 ; i < 10 ; i++){
        if (i == 5){
            continue;
        }
        cout << i << " " ; 
    }
    return 0;
}
