/* Virtual Function
    Pointer: Pointe can point to same data type pointer only. e.g.
    we create one int pointer, then it can point to int variables only.
    Base class Pointer:
    ->Base class pointer can point to the object of any its descendent's (children) class
    ->But Converse is not true.
    ->Thus, If we create a pointer of Parent class, it can also point to it's
    child (descendent) classes also. 
    But conversely, child class's pointer can't point to parent class's pointer. 


    Let's say, we create a pointer(ptr) and an object of Parent Class A.  (Parent *ptr, objParent)
    We create another object from Child Class B. (Child objChild)
    Now, we store address of child class's object address to pointer ptr. (ptr = &objChild)

    If we call p->f1() Then it will do Early Binding and it will call parent f1() functionality.
    But we have saved address of Child class object then why it is calling parent class??
    This is just because compiler on compile time differentiate on the basis of pointer type not on
    address, because compiler doesn't know about the memory allocation of pointers.

    To avoid this, we use virtual function. It will help compiler in Dynamic (late) binding.
    This will call child class functionality if we store address of child object in pointer.


*/

/*---------------------------------Without Virtual Function---------------------------------*/

#include<bits/stdc++.h>
using namespace std;

class Parent{
    public:
    void f1(){
        cout<<"Parent f1()"<<endl;
    }
};

class child: public Parent{
    public:
    void f1(){
        cout<<"Child f1()"<<endl;
    }
};

int main()
{
    Parent objParent, *ptr;
    child objChild;

    ptr = &objChild;
    
    ptr->f1();

}

/*
Output-> Parent f1()
*/

/*-------------------------------VIRTUAL FUNCTION------------------------------------*/

#include<bits/stdc++.h>
using namespace std;

class Parent{
    public:
    virtual void f1(){
        cout<<"Parent f1()"<<endl;
    }
};

class child: public Parent{
    public:
    void f1(){
        cout<<"Child f1()"<<endl;
    }
};

int main()
{   
    Parent objParent, *ptr;
    child objChild;

    ptr = &objChild;
    
    ptr->f1();

}

/*
Output-> Child f1()
*/






/*
Prabhat:

Personal individual person 
Content very less
repitition
Grammar was is 




renjith
quality ok
content less
Not able to convince



community support 
*/


/*
Quote - Master of all, jack of none
Communication Point

Time given to someone else




Lack of attention taking
Audience might leave don't bore others with Aaa aaa aaa 

*/