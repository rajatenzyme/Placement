
/*-------------------------------------------Constructor Overloading---------------------------------*/

#include<bits/stdc++.h>
using namespace std;

class Complex{
    private:
    int a, b;

    public:
    Complex(){
        cout<<"Constructor without parameters"<<endl;
    }
    Complex(int x, int y){
        a = x;
        b = y;
    }

    Complex (int k){   // Constructor overloading (same method name, different arguments)
        a = k;
    }
};

int main(){
    Complex c1(3,5);
    Complex c2(5);
    //for single value we can also write it as:
    Complex c5 = 6; //Valid only for single value constructor
    Complex c3; 
    Complex c4 = Complex(1,5); // different way to write - same meaning
    Complex *c6 = new Complex(1,5); // new keyword used for pointer
    //Complex c4 = new Complex(1,5); // this will be wrong as c4 is not pointer



}
