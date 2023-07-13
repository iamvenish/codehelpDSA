#include <bits/stdc++.h>
using namespace std ;
class animal{
    public :
     int age;
     int weight;

     public:
     void bark(){
        cout << " barking dog " << endl;
     }
};

class human{
    
      public :
       string colour;

       public :
       void speak(){
          cout << " speaking " << endl;
       }
};
class hybrid: public animal  , public human{
      
};
int main()
{

    hybrid obj1;
    obj1.speak();
    obj1.bark();
    
    

    
    return 0;
}