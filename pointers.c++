#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int num=5;
    cout << num << endl;

    // adress operator - &

    cout << " adress of num is : " << &num  << endl;

    int *ptr = &num;

    cout << " value is : " << *ptr << endl;
    cout << " adress the of the pointer " << ptr << endl;

    double db = 4.3;

    double *pt = &db;
    
    cout << " value is : " << *pt  << endl;
    cout << " adress the of the pointer " << pt << endl;

    cout << " size of integer is : " << sizeof(num) << endl;
    cout << " size of pointer is : " << sizeof(ptr) << endl;
    cout << " size of pointer is : "<< sizeof(pt) << endl;

    
    return 0;
}