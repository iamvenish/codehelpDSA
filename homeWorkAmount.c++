#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int amount;
     cin >> amount;
      int hundred=0, fifty=0 , twenty=0 , one=0;

     switch(true){
       case true:
               hundred = amount/100;
              amount%=100;
              cout << "100's note " << hundred  << '\n';

              fifty =  amount/50;
              amount%=50;
              cout << "50's note " << fifty << '\n';

             twenty = amount/20;
              amount%=20;
              cout << "20's note " << twenty << '\n';

             one = amount/1;
            amount%=1;
            cout << " 1's note  " << one << '\n';

            break;

            default : 
              cout << " invalid amount " << '\n';
              break;
     }
    
    return 0;
}