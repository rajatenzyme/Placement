//In normal terms Encapsulation is defined as wrapping up of data and information 
//under a single unit. In Object Oriented Programming, Encapsulation is defined as 
//binding together the data and the functions that manipulates them...

#include<bits/stdc++.h>
using namespace std;


class Encapsulation{
    private:
        int id;

    public:
    void setid(int x){
        id = x;
    }

    void getid(){
        cout<<"Value of ID is: "<<id<<endl;
    }
};

int main(){
    //Encapsulation *obj = new Encapsulation();
    Encapsulation obj;
    obj.setid(5);
    obj.getid();

    return 0;
}


//the variable x and the functions get() and set() are binded together which is nothing but encapsulation.