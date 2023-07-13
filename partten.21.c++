#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int n;
    cin >> n;

    int i=1;
    while(i<=n){

          // print 1st spacing triangle 
          int space = n-i;
          while(space){
             cout << " ";
             space-=1;
          }

          // print 2nd triangle 

          int j=1;
          while(j<=i){
             cout << j;
             j+=1;
          }

          // print 3rd triangle 

          int start= i-1;
          while(start){
             cout << start;
             start-=1;
          }

           cout << '\n';
           i+=1;















    }

    
    return 0;
}