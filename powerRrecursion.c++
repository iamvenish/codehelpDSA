#include <bits/stdc++.h>
using namespace std ;
int power(int n){
    // base case 
    if(n==0){
        return 1;
    }
    // recursive realtion 
     int smallerProblem = power(n-1);
     int biggerProblem = 2*smallerProblem;

     return biggerProblem;
}

int main()
{
    int n;
    cout << " enter the power of 2 " << endl;
    cin  >> n ;

    int value = power(n);
    
    cout << value << endl;

    

    
    return 0;
}