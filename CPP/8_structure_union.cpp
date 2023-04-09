#include <iostream>
using namespace std ;

struct Student_struct{
    int id ; 
    string name , lastname ;
    float weight , height ;
};

union Student_union
{
    int id ;
    string name , lastname ; 
    float weight , height ;
};


int main(int argc, char const *argv[])
{
    return 0;
}
