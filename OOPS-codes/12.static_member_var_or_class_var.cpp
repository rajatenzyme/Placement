#include<bits/stdc++.h>
using namespace std;

class Account{
    private:
    int balance;
    static float roi; //class variable

    public:
        static void setRoi(float r){
            roi = r;
        }
        static void getRoi(){
            cout<<roi<<endl;
        }

};

float Account :: roi; //Need to define here (by default 0)

int main(){
    // Account a1;
    // a1.setRoi(3.5);
    // a1.getRoi();
    //Account :: setRoi()
    Account::setRoi(5.5); //Here we're accessing static class methods without objects
    Account::getRoi();
}