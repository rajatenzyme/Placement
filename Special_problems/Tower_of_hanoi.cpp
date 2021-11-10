#include <bits/stdc++.h>
using namespace std;
void ToH(char s,char d,char h, int n){
    if (n==1){
        cout<<"Moving disk 1 from "<< s<< " to "<<d<<endl;
        return;
    }

    ToH(s,h,d,n-1);
    cout<<"Moving disk " << n<< " from "<< s<< " to "<<h<<endl;
    ToH(h, d, s, n-1);
}

int main()
{
	char source = 'A', destination = 'C', helper = 'H';
    int noOfPlates;
    cin>>noOfPlates;
    //int noOfPlates = 3;
    ToH(source,destination,helper,noOfPlates);

	return 0;
}
