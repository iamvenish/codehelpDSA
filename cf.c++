#include <bits/stdc++.h>
using namespace std ;

int main()
{
    
   int sum,res , c,n,k;

   while(cin>>n>>k){

    res = 240-k , sum=0 , c=0;

    for(int i=0 ; i<=n ; i++ ){
        sum+=5*i;

        if(sum>res)
            break;
    
    
     cout << c << '\n';

   }
      
      return 0;
}

}