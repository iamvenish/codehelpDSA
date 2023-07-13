#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int i=5;
    
    // create a ref variable 

    int &j = i;

    cout << " before increment of i : " << i << endl;
    i++;
    cout << " after increment of i  : " << i << endl;
    j++;
    cout << " after increment of j :  " << i << endl;
    

    
    return 0;
}