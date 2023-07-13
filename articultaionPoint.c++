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
void dfs(int node , int parent , int &time ,  unordered_map<int , bool> &visited , vector<int> &disc , vector<int> &low , vector<int> &ap , unordered_map<int , list<int>> &adj){
   
     visited[node] = true;
     disc[node] = low[node] = time++;

     int child = 0;
     for(auto nebr : adj[node]){
      
       if(nebr == parent){
        continue;
       }

       if(!visited[nebr]){

            dfs(nebr , node , time , visited , disc , low , ap , adj);
            low[node] = min(low[node] , low[nebr]);

            if(low[nebr] >= disc[node] && parent!=-1){
                ap[node] = 1;
            }
            child++;
       }
       else {
           low[node] = min(low[node] , disc[nebr]);
       }
     }

     if(parent == -1 && child > 1){
        ap[node] = 1;
     }
}

int main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);
    int n=5;
    int e=5;


    vector<pair<int , int>> edges;

    edges.push_back(make_pair(0,3));
    edges.push_back(make_pair(3,4));
    edges.push_back(make_pair(0,4));
    edges.push_back(make_pair(0,1));
    edges.push_back(make_pair(1,2));


    unordered_map<int , list<int>> adj;

      
    for(int i=0 ; i<edges.size() ; i++){
        int u = edges[i].first;
        int v = edges[i].second;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }


    int time=0;
    vector<int> disc(n);
    vector<int> low(n);

    unordered_map<int , bool> visited;

    vector<int> ap(n,0);


    for(int i=0 ; i<n ; i++){
        disc[i] = -1;
        low[i] = -1;
    }

     for(int i=0 ; i<n ; i++){
        if(!visited[i]){
            dfs(i , -1 ,  time ,  visited , disc, low , ap , adj);
        }
     }


     cout << "articulation point are " << endl;

     for(int i=0 ; i<n ; i++){
        if(ap[i] != 0)
        {
                
          cout << i << " ";

        }
     } cout  << endl;

    
    return 0;
}