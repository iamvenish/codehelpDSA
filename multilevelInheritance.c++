#include <bits/stdc++.h>
using namespace std ;
class animal {
   public :
   int age;
   int weight;

   public :
     void speak(){
        cout << " do0g is speaking " << endl;
     }

};
class dog : public animal{
    
};
class galikakuta  : public dog{

};
int main()
{
   galikakuta  g1;
   g1.speak();
     

    
    return 0;
}