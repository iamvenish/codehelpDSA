#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, int> m;

    //insertion 
    pair<string , int> p = make_pair("venish" , 3);

    m.insert(p);

    // 2;
    pair<string , int> pair2("patel" , 4);
    m.insert(pair2);

    //3
     m["naam"] = 2;

     // search 
     cout << m["naam"] << endl;
     cout << m.at("venish") << endl;

     cout << m["unknownkey"] << endl;

     cout << m.size() << endl;

     cout << m.count("hiiiiii") << endl;
     
     cout << m.count("venish") << endl;

     cout << m.erase("venish") << endl;

     cout << m.size() << endl;


     unordered_map<string , int> :: iterator it = m.begin();

       while(it != m.end()){

        cout << it->first << " " << it->second  << endl;
        it++;

       }

     
    
    return 0;
}