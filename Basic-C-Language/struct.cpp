#include<bits/stdc++.h>
using namespace std;

struct book{
    int bookid;
    string title;
    float price;
};

book input(){
    book temp;
    cout<<"Enter details"<<endl;
    cin>>temp.bookid>>temp.title>>temp.price;
    return temp;
}

int main(){

    book b1 = {100, "Rajat Mittal", 550.0};
    book b2;
    b2.bookid = 101;
    //b2.title = "Rajat";
    b2.title = "Rajat";
    b2.price = 549;

    book x;
    x = input();
    cout<<x.bookid<<" "<<x.title<<" "<<x.price<<endl;;

}

