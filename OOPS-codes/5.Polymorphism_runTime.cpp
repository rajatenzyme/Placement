// /*
// Runtime polymorphism: This type of polymorphism is achieved by Function Overriding.
// Function overriding on the other hand occurs when a derived class has a definition 
// for one of the member functions of the base class. That base function is said to be overridden.
// */

// C++ program for function overriding



#include <bits/stdc++.h>
using namespace std;
class Base
{
   public:
   void show_val()
   {
      cout << "Class::Base"<<endl;
   }
};
class Derived:public Base
{
   public:
   void show_val() //function overridden from base
   {
      cout << "Class::Derived"<<endl;
   }
};
int main()
{
   Base b;
   Derived d;
   b.show_val();
   d.show_val();
}

/*
Class::Base
Class::Derived
*/


// #include <bits/stdc++.h>
// using namespace std;

// class base
// {
// public:
// 	virtual void print ()
// 	{ cout<< "print base class" <<endl; }

// 	void show ()
// 	{ cout<< "show base class" <<endl; }
// };

// class derived:public base
// {
// public:
// 	void print () //print () is already virtual function in derived class, we could also declared as virtual void print () explicitly
// 	{ cout<< "print derived class" <<endl; }

// 	void show ()
// 	{ cout<< "show derived class" <<endl; }
// };

// int main()
// {
// 	base *bptr;
// 	derived d;
// 	bptr = &d;
	
// 	//virtual function, binded at runtime (Runtime polymorphism)
// 	bptr->print();
	
// 	// Non-virtual function, binded at compile time
// 	bptr->show();

// 	return 0;
// }

/*
print derived class
show base class
*/
