#include <bits/stdc++.h>
using namespace std ;
char getMaxOccureChar(string s){
    int arr[26] = {0};
    //create a array in character 
    for(int i=0 ; i<s.length() ; i++){
        //lower case 
        char ch = s[i];
        int number=0;
        if(ch >= 'a' && ch<= 'z'){
             number = ch-'a';
        }
        else { // upper case 
              number = ch - 'A';
        }
            arr[number]++;
    }

    int maxi=-1 , ans=0;
    for(int i=0 ; i< 26; i++){
        if(maxi< arr[i]){
       ans=i;
        maxi = arr[i];
        }
    }
    char finalValue = 'a' + ans;
    return finalValue;
}
int main()
{
    string s;
    cout << "etner the name of anythings " << endl;
    cin >> s;

    cout << getMaxOccureChar(s) << endl;

    

    
    return 0;
}