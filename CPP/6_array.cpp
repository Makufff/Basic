#include <iostream>
using namespace std;
int arr_gobal[10] ;
int x_gobal ; 
int main(int argc, char const *argv[])
{
    int arr1[10];
    int arr[] = {1 , 2 ,3 ,4 ,5};

    int n = 10;
    int arr3[n];

    int arr2_length = sizeof(arr2)/sizeof(arr2[0]);
    cout << arr1[0] << " " << arr[0] << " " << arr3[0] ;
    return 0;
}
