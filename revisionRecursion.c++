#include <bits/stdc++.h>
using namespace std ;
void reachHome(int src , int dest){
     cout << " sourse " << src  <<  " destination is " << dest  << endl;
    //  base case 
    if(src==dest){
        cout  <<  "pahuch gya " << endl;
        return;
    }
     // recursive call 
    reachHome(src+1 , dest);

}
int main()
{
    int dest=10;
    int src=1;

    cout << endl;
     reachHome(src , dest);

    
    return 0;
}