#include <bits/stdc++.h>
using namespace std ;
void reverse(char name[], int n){
    int i=0;
    int j=n-1;

    while(i<=j){
        swap(name[i++] , name[j--]);
    }
}
int length(char name[]){
    int count=0;
    for(int i=0 ; name[i]!=0 ; i++){
        count++;
    }
    return count;
}
int main()
{
    char name[20];
    cout << " enter the name " << endl;
    cin >> name;

     int len = length(name);

     cout << "length is : ";
     cout << len << endl;

     cout << " reverse the array " << endl;
     reverse(name , len);
     cout << " enter the name "; 
     cout << name << endl;
    
    return 0;
}