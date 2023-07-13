#include <bits/stdc++.h>
using namespace std ;
void rechHome(int src , int dest){
    cout << " src " << src << " " << " destination " << dest  << endl;
    if(src==dest){
        cout << "stop it "<< endl;
        return;
    }

    src++;

    rechHome(src , dest);
}
int main()
{
    int dest = 10;
    int src = 1;
    cout << endl;

    rechHome(src,dest);



    
    return 0;
}