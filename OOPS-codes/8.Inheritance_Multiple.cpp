#include<bits/stdc++.h>
using namespace std;


class Employee{
    protected:
        int salary = 5000;

};  

class bonus{

    protected:
        int base = 100;
};

class incentive : public Employee, public bonus{
    private:
        int inc = salary * 0.1 + base;
        int TotalSalary = salary + base + inc;
    public:
    void getSalary(){
        //cout<<salary<<" "<<base<< " "<<inc<<endl;
        cout<<"Total Salary is: "<<TotalSalary<<endl;
    }
};

int main(){

    incentive obj;
    obj.getSalary();

    return 0;
}