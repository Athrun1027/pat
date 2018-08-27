#include <bits/stdc++.h>
using namespace std;


int main(){
    string num1, num2;
    int d1, d2;
    cin>>num1>>d1>>num2>>d2;
    int p1=0, p2=0;
    for (int i = 0; i < num1.size(); ++i){
        if (num1[i]-'0' == d1){
            p1++;
        }
    }
    for (int i = 0; i < num2.size(); ++i){
        if (num2[i]-'0' == d2){
            p2++;
        }
    }
    if(p1)
        num1.assign(p1, '0'+d1);
    else
        num1 = "0";
    if(p2)
        num2.assign(p2, '0'+d2);
    else
        num2 = "0";
    cout<<stoi(num1)+stoi(num2)<<endl;
    return 0;
}