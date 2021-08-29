/*
Pure Virtual Function:
DO nothing function which doesn't has any definition.
->We can't create object from it's class.
->We can create child class. But make sure to override do nothing function in child class.
->bUt due to early binding we can still call this do nothing function, thus make it virtual.   
https://www.geeksforgeeks.org/pure-virtual-functions-and-abstract-classes/
*/

/*------------------------Abstract Class-------------------*/
/*In C++, if we have atleast 1 pure virtual function in the class, then that class will be
known as Abstract Class and we can't create object from it*/


#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
        virtual void fun() = 0;
        
};

class Student: public Person{
    public:
     void fun(){
         cout<<"hi"<<endl;
     }
};


int main(){
    // Person p1; We can't make objects 0f an Abstract class
    Student s1;
    s1.fun();
}








/*
Why Abstract Class?

e.g. - >

Person- Student/Faculty
some common features are there for both from Person class.

But are we interested in making an object of Person class? NOOOO (It will represent Nothing)
Student/Faculty objects will represent accordingly.

So we will make Person class Abstract to avoid making objects out of it.

*/