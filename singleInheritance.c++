#include <bits/stdc++.h>
using namespace std ;
class animal{
   public :
   int age;
   int weight;

   public :
     void speak(){
        cout << " animal are speaking " << endl;
     }
};
class dog : public animal{

};
int main()
{

  dog d1;

  d1.speak();
  cout << d1.age << endl;

    
    return 0;
}