/* Constructor:
    ->name should be same as class name.
    ->it's a member function of a class.
    -> no return type
    ->it can never be static


    ----How to call a constructor---
    -> we don't call it, it is implicitly called, whenever we create an object
    ->is used to solve the problem of initialization


    ---Why we call it as a contructor?--- (Solves Problem of initialization)
    ->It is used to create object of an object
    e.g. - When someone says us - "Being human". But we are already a human.
    Then what is the meaning of this is that we might not have all the characteristics of a human.
     
    e.g. When we create an object of a car variable, it contains some garbage value. We can't even
    say that object is even a car or some random design. This problem is called the problem of initialization.

    Constructor will guarantee that whenever we call it we will get a car with some basic functionalities.
*/

/*-------------------------------------------Constructor---------------------------------*/

#include<bits/stdc++.h>
using namespace std;

class Complex{
    private:
    int a, b;

    public:
    Complex(){
        cout<<"Hi Constructor"<<endl;
    }
};

int main(){
    Complex c1,c2,c3;

}

/* Output:
Hi Constructor
Hi Constructor
Hi Constructor
*/


/*
here we are creating a constructor, it will destroy our default constructor.
Whenever we call an object, it calls our implicit default constructor...we don't make it
compiler made it for us.    
*/

