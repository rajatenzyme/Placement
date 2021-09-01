/*

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
            cout<<"a = "<<a<<endl;
            cout<<"b = "<<b<<endl;
        }

        Complex add(Complex c){
            Complex temp;
            temp.a = a + c.a;
            temp.b = b + c.b;
            return temp;
        }

};

int main(){
    Complex c1,c2,c3;
    c1.setData(4,5);
    c2.setData(3,6);
    c3 = c1.add(c2);
    c3.showData();
}

*/


/*
Now if we want to use  '+', at place of "add". Can we use?
yes....using operator overloading.

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
            cout<<"a = "<<a<<endl;
            cout<<"b = "<<b<<endl;
        }

        Complex operator+(Complex c){ //Use operator keyword followed by any operator(which is available in C language)
            Complex temp;
            temp.a = a + c.a;
            temp.b = b + c.b;
            return temp;
        }

};

int main(){
    Complex c1,c2,c3,c4;
    c1.setData(4,5);
    c2.setData(3,6);
    c3 = c1.operator+(c2); //way 1
    c4 = c1 + c2; // way 2 - Can use both the ways.
    c3.showData();
    int z = 4 + 5; //This will also work, operator overloaded function will execute only when
                    // it's argument will be of Complex type.
    cout<<z<<endl;
}


//Also called Polymorphism ( Compile time)
// Can not overload sizeof , ?: operators


//We can also do the same thing for unary operators