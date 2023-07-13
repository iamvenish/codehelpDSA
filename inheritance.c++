#include <bits/stdc++.h>
using namespace std ;
class Human{
   public:
   int height;
   int weight;
   private :
   int age;

   public :
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
    this->weight = w;
    }
};
class Male : public   Human{
    public :
    string colour;

    void sleep(){
        cout << " male is sleeping " << endl;
    }
    int getHeight(){
        return this->height;
    }
};
int main()
{
    Male obj1;
  cout << obj1.getHeight()  << endl;


//     cout << obj1.age << endl;
//     cout << obj1.weight << endl;
//     cout << obj1.height << endl;

//     cout << obj1.colour << endl;
//     obj1.sleep();

//    obj1.setWeight(80);

//    cout << obj1.weight << endl;

    

    
    return 0;
}