#include <bits/stdc++.h>
using namespace std ;
int bitValue1(int n ){
    int ans1=0;
    int i=0;
    while(n!=0){
        int bit = n&1;
         int ans1= (bit*pow(10,i)) + ans1;
         n=n>>1;
         i++; 
         return ans1;
    }
}
int bitValue2(int m){
    int ans2 = 0;
    int j=0;

       while(m!=0){
        int bit2 = m&1;
         int ans2 = (bit2*pow(10,j)) + ans2;
         m=m>>1;
         j++;
        if(ans2 == )
    }

}

int main()
{
 
  int a,b;
  cin >> a>> b;

  cout  << bitValue1(a) + bitValue2(b) << '\n';



    

    
    return 0;
}