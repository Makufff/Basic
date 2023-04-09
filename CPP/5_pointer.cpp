#include <iostream>
using namespace std;

// pass by value
void changex_pbv(int x){
    x = 10 ;
}
// pass by refernce
void changex_pbr(int x){
    *x = 10 ;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int* ptr ;
    int x = 5 ; 
    ptr = &x;

    cout << *ptr ;
    return 0;
}
