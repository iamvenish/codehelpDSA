#include <bits/stdc++.h>
using namespace std ;
class Hero{
   // properties 
   private:
   int health;
   public:
   char *name;
   char level;
   static int timeToComplete;

   
   Hero(){
    cout << " constructor called " << endl;
    name  = new char[100];

   }
   Hero(int health){
    cout << " this " << this << endl;
    this -> health = health;
   }
   Hero(int health , char level){
     this->level = level;
     this -> health = health;
   }

   Hero(Hero &temp){
    char *ch  = new char[strlen(temp.name) +1];
    strcpy(ch , temp.name);
    this->name = ch;
    cout << " copy constructor is created " << endl;
    this->health = temp.health;
    this->level = temp.level;
   }
   void print(){
    cout << endl;
    cout << " name is " << this->name  << endl;
     cout << " health is " << this->health  << endl;
     cout << " level is " << this->level << endl;
   }

   int getHealth(){
      return health;
   }

   char getLevel(){
      return level;
   }

   void setHealth(int h){
      health = h;
   }

   void setLevel(char ch){
    level = ch;
   }
   void setName(char name[] ){
     strcpy(this->name , name);
   }
   
   ~Hero(){
     cout << " destructor called " << endl;
   }

   static int random(){
    cout << timeToComplete << endl;
   }
};

int Hero::timeToComplete =5;


int main()
{


   cout << Hero::timeToComplete << endl;

   Hero h5;

   cout << h5.timeToComplete << endl; // it's not recommonded 






    //    // static 
    //    Hero h2;


    //    // dynamically 
    //    Hero *h3 = new Hero();
    //    delete h3;







// //     Hero h3(98 , 'A');
// //     h3.print();

// //   // copy constructor 
// //     Hero h4(h3);
// //     h4.print();

//    Hero hero1;
//    hero1.setHealth(98);
//    hero1.setLevel('b');
//    char name[7] = "venish";
//    hero1.setName(name);

// //    hero1.print();

//    Hero hero2(hero1);

// //    hero2.print();
//    // Hero hero2 = hero1;

//    hero1.name[0] = 'H';
//    hero1.print();
//    hero2.print();

//    hero1  = hero2;
//       hero1.print();
//    hero2.print();






    // // object is created statically 
    // Hero h2(20);
    // cout << " adress of the h2 " << &h2  << endl;


    
    // Hero h;
  
    // //  cout << " health is  " << h.getHealth() << endl;
    // //  cout << " level is " << h.level  << endl;

    //  // dynamically memory allocation 
    //  Hero *h1 = new Hero;
    //  h1->setHealth(98);
    //  h1->setLevel('A');

    //  cout << " health is  " << (*h1).getHealth() << endl; // garbage value 
    //  cout << " level is " << (*h1).level  << endl;

    // //  other way to write 
    // cout << " health is " << h1 -> getHealth() << endl;
    // cout << " level is " << h1->level  << endl;
 


    // // h.health = 98;
    // h.setHealth(98);
    // h.level = 'A';

    // cout << " size : " << sizeof(h) << endl;

    //  cout << " health is " << h.getHealth() << endl;
    //  cout << "level is " << h.level << endl;

     



    
    return 0;
}