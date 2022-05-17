#include <bits/stdc++.h>
using namespace std;
vector<string> reducedFractionSum(vector<string>s){
    vector<string>v;
    string a="", b="", c="", d="";

    int i,j,k,l;
    for(i=0;s[i]!='/';i++){
        a+=s[i];
    }
    for(j=i+1; s[j]!='+';j++){
        b+=s[j];
    }
    for(k=j+1;s[k]!='/';k++){
        c+=s[k];
    }
    for(l=k+1;s[l]!='\0';l++){
        d+=s[l];
    }

    int a1 = stoi(a);
    int b1 = stoi(b);
    int c1 = stoi(c);
    int d1 = stoi(d);
    
    int num = (a1*d1 + b1*c1);
    int den = (b1*d1);
   
    int gcd = __gcd(num, den);
    num = num/gcd;
    den = den/gcd;
   
    string numerator = to_string(num);
    string denominator = to_string(den);

    
    string ans = numerator + '/' + denominator;
    v.push_back(ans);
    return v;
    //cout<<ans<<endl;
}

int main() {
    vector<string> s {'1','/','2','+','2','/','3'};
    reducedFractionSum(s);
    
}
