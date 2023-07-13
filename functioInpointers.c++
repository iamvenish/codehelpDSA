#include <bits/stdc++.h>
using namespace std ;
void print(int *p){

    cout << p << endl; // adress print hoga 
    cout << *p << endl; // value print hogi  
}
void update(int *p){
    *p=*p+1; 
    // cout << " updation is " <<  p << endl;

}
int main()
{
    
   int value = 10;

   int *p = &value;
   
//    print(p);
   // no change in adress 
    // cout << " before " << p << endl; // before 
    // update(p);
    // cout << " after " << p << endl;
   
    // change in value 
    cout << " before " << *p << endl;
    update(p);
    cout << " after " << *p << endl;
    
    return 0;
}