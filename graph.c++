#include <bits/stdc++.h>
using namespace std;
// #define vi vector<int>
// #define vii vector<vector<int>>
// #define mii map<int,int>
// #define ll long long
// #define pi  3.14159265358979323846264338327950288419
// #define pii pair<int,int> 
// #define f first
// #define s second
// #define vpii vector<pair<int , int>>
// #define pb push_back
class Graph{
    public :
   unordered_map<int  , list<int>> adj;
 void addEdge(int u , int v , bool direction){
    // direction  = 0-1 ->undirected graph 
     //  direction  = 0-1 directed graph 
       

       // create a edge from u to v 
       adj[u].push_back(v);

       if(direction == 0){
         
           adj[v].push_back(u);
           
       }
   }
     void printAdjList(){
            for (auto i: adj){
                  cout << i.first << "->";
                   for(auto j : i.second){
                    cout << j << " , ";
                   }
                   cout << endl;
            }
     }
};
int main()
{
//  ios_base:: sync_with_stdio();
//  cin.tie(0);
//  cout.tie(0);
    
     int n;
     cout <<  " enter the number of nodes " << endl;
     cin >> n;

     int m;
     cout << "enter the number of edges " << endl;
     cin  >> m;
     
        Graph g; 

     for(int i=0 ; i<m ; i++){
        int u,v;

        cin >> u >> v;
        // creating an undirected graph 
     
        g.addEdge(u,v,0);
     }

     g.printAdjList();  
    
    return 0;
}