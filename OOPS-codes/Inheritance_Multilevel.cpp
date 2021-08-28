// Multilevel :
//When one class inherits another class which is further inherited by another class, 
// it is known as multi level inheritance in C++. Inheritance is transitive so the 
// last derived class acquires all the members of all its base classes.

#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    void eat(){
        cout<<"Eating"<<endl;
    }
};

class Dog: public Animal{
    
    public:
    void bark(){
        cout<<"barking"<<endl;
    }

};

class pug : public Dog{
    public:
    void weep(){
        cout<<"Weeping"<<endl;
    }
};

int main(){
    pug p1;
    p1.bark();
    p1.eat();
    p1.weep();
    return 0;
}