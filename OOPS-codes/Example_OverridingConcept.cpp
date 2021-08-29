#include<bits/stdc++.h>
using namespace std;

class Parent{
    public:
        void f1(){
            cout<<"Parent f1()"<<endl;
        }
        void f2(){
            cout<<"Parent f2()"<<endl;
        }
};

class child : public Parent{
    public:
        void f1(){ //Method Overriding
            cout<<"Child f1()"<<endl;
        }
        void f2(int x){ //Method Hiding
            cout<<"child f2(x)"<<x<<endl;
        }
};

int main(){
    child obj;
    obj.f1(); //Child class
    //obj.f2(); // Error
    obj.f2(5); // Child class -> Not overloading ->overloading occurs when same name functions with
    // different arguments declared in the same class ->This is method hiding

}


//In short Method riding is the technique to execute child functionality instead of parent's with the
//same functions. Some times we want to create same functions for child, but we want to change some
// code. Then we can use Overriding to Override Parent's function.  