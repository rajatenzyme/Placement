/*
What is Destructor?
-> Instance member of class.
-> use ~(tilde)
->It can never be static
->No return type
->takes no argument


-> Destructor is the function which runs at last in the lifespan of an object
->Misconception:- It doesn't destroy object (Very very important)
->Object will automatically destroy at the end of function.


----Why Destructor?----
->To release resources allocated to an object
*/


#include<bits/stdc++.h>
using namespace std;

class Complex{
    private:
    int a, b;

    public:
    ~Complex(){
        cout<<"Hi Destructor"<<endl;
    }
};

int main(){
    Complex c1;

}