#include <bits/stdc++.h>
using namespace std ;
int getlength(char name[]){
    int count=0;
    for(int i=0 ; name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main()
{
    char name[20];

    cout << " enter your name " << endl;
    cin >> name;

    // name[2] = '\0';

    cout << "your name is ";
    cout << name;

  cout << " length is : " << getlength(name) << endl;
    
    return 0;
}