/* 

friend funtion:
->Not a member function of a class
->declared in class
->defined outside class
->can access any member of class
->friend function cannot access members of class directly
->has no caller object


*/

#include<bits/stdc++.h>
using namespace std;

class Complex{
    private:
        int a,b;
    public:
        void setData(int x, int y){
            a = x;
            b = y;
        }
        void showData(){
            cout<<a<<b;
        }
        friend void fun(Complex c); // friend function declaration
};

/* This is wrong, we can't dirctly access class variables
void fun(){
    cout<<"Sum is: "<<a+b<<endl;
}

We can access class varibles only through object only otherwise,
if we have more than one object, it will get confused between varibles from different objects.
*/
void fun(Complex c){
    cout<<"Sum is "<<c.a+c.b<<endl;
}


int main(){
    Complex c1,c2,c3;
    c1.setData(2,5);
    fun(c1);
}