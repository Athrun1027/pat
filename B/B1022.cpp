#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned a, b, sum;
    int d;
    cin>>a>>b>>d;
    sum = a + b;
    string output="";
    do{
        output += '0' + sum % d;
        sum /= d;
    }while(sum != 0);
    reverse(output.begin(), output.end());
    cout<<output<<endl;
    return 0;
}