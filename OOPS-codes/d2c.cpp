
#include<bits/stdc++.h>
using namespace std;


class ParentClass{
    protected:
        int print(){
            cout<<"Parent"<<endl;
            return 0;
        }

};

class childClass : public ParentClass{

    public:
        int print(){
            cout<<"Child"<<endl;
            return 1;
        }
};

int main(){

    ParentClass *obj = new ParentClass();
    childClass *sub = new childClass();

    cout<<obj->print()<<" "<<sub->print()<<endl;


    return 0;
}