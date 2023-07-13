#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<vector<int>>
#define mii map<int,int>
#define ll long long
#define pi  3.14159265358979323846264338327950288419
#define pii pair<int,int> 
#define f first
#define s second
#define vpii vector<pair<int , int>>
#define pb push_back
class Graph{
   public:
   unordered_map<int , list<pair<int ,int> > >  adj;

   void AddEdges(int u , int v , int weight){
      pair<int , int > p = make_pair(v , weight);

      adj[u].push_back(p);
   }

   void printAdj(){
    for(auto i : adj){
        cout << i.first << "->";
        for(auto j : i.second){
          cout << "(" << i.first << "," << j.second << "), ";
        }
        cout << endl;
    }
   }
};

int main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);
    
    Graph g;
    

    
    return 0;
}