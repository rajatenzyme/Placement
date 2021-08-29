//In C++, inheritance is a process in which one object acquires all 
// the properties and behaviors of its parent object automatically. In 
// such way, you can reuse, extend or modify the attributes and behaviors 
// which are defined in other class.

// In C++, the class which inherits the members of another class is called 
// derived class and the class whose members are inherited is called base class. 
// The derived class is the specialized class for the base class.

//------------------------Single Level Inheritance----------------------//

#include<bits/stdc++.h>
using namespace std;


class ParentClass{
    public:
        int salary = 5000;

};

class childClass : public ParentClass{

    public:
        int bonus = 100;
};

int main(){

    childClass obj;
    int TotalSalary = obj.salary + obj.bonus;
    cout<<"Total Salary is "<<TotalSalary<<endl;


    return 0;
}


/*
Types Of Inheritance: 
C++ supports five types of inheritance:

1. Single inheritance
2. Multiple inheritance
3. Hierarchical inheritance
4. Multilevel inheritance
5. Hybrid inheritance

*/


// #include<bits/stdc++.h>
// using namespace std;


// class ParentClass{
//     public:
//         string Employee_details;
    
//     ParentClass(string name){
//         Employee_details = name;
//     }

// };

// class childClass : public ParentClass{
//     private:
//         int accountNumber;

//     public:

//         void setAccountNumber(int x){
//             accountNumber = x;
//         }
//         void getDetails(){
//             cout<<"Employee Details: "<<Employee_details<<" "<<"Account Number: "<<accountNumber;
//         }
// };

// int main(){

//     //ParentClass obj("Rajat");
//     //childClass obj2;

//     childClass obj;
//     obj.setAccountNumber(5);


//     return 0;
// }



