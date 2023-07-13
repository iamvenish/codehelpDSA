#include <bits/stdc++.h>
using namespace std ;
char lowerCase(char ch){
    int temp;
    if(ch >= 'a' && ch <= 'z'){
      return ch;
    }
    else {
      temp = ch-'A' + 'a';
    return temp;
    }
}
bool palindrome(char name[], int n){
  int i=0;
  int j=n-1;

  while(i<=j){
      if(lowerCase(name[i]) != lowerCase(name[j])){
        return 0;
      }
      else if(!(name[i]>='a' && name[i]<= 'z')){
        i++;
    }
    else if (!(name[j]>='a' && name[j]<= 'z')){
         j--;
    }
  }
  return 1;
}
int getlength(char name[]){
    int count=0;
    for(int i=0; name[i]!='\0' ; i++){
        count++;
    }
    return count;
    }
int main()
{
    char name[20];
    cout << "enter the name " << endl;
    cin >>name;

    int len = getlength(name);
    cout << " the length of name " << endl;
    cout << len;
    cout << " palindrome  is " << endl; 
    cout << " is palindrome or not " << palindrome(name , len) << endl;
    cout  << " palindrome is :  " << lowerCase('c') << endl;
 

    return 0;
}