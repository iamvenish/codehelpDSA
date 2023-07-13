#include <bits/stdc++.h>
using namespace std ;
    string removeDuplicates(string s) {
        string s1 = "";
        for(int i=0 ; i<s.length() ; i++){
        if(s[i]== s[i+1]){
          s1 = s[i];
        i++;
        }
            else {
               s.erase(s[i] , s[i+1]);
            }
            i--;
        }
        return s1;
    }
int main()
{
    string s;
    cout << " enter the s " << endl;
    cin >> s;

    removeDuplicates(s);

    
    return 0;
}