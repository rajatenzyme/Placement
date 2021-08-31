/*
Whenever we create an object compiler creates two constructors:
1. Default constructor
2. Copy Constructor


If we make our own constructor then compiler will make only copy constructor,
If we make our own copy constructor also, then it won't even make copy constructor.


-> We can also make our own copy constructor by passing refernce of a object

Complex(Complex &c1){  //Copy Constructor
    a = c.a;
    b = c.b; 
}

Complex( int &k){ // Not a copy constructor
    cout<<"k"<<k<<endl;
}
*/


#include<bits/stdc++.h>
using namespace std;

class Complex{
    private:
    int a, b;

    public:
    Complex(){
        cout<<"Hi Constructor"<<endl;
    }
    Complex(Complex &c){
        a = c.a;
        b = c.b;
    }
};

int main(){
    Complex c1;
    Complex c2(c1); //Copy

}