#include <iostream>
#include <stdio.h>
using namespace std;
int main ()
{
    int a=10,b=20 ;
    
    short int x[5];
    
    cout << a << "," << b << endl ;
    cout << hex << a << "," << b << endl ;
    
    cout << &a << "," << &b << endl ;
    
    cout << sizeof(int) << endl;
    cout << sizeof(short) << endl ;
    cout << sizeof(char) << endl ;
    
    cout << &x[0] << endl ;
    
    
    return 0;
    
}
