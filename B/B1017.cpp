#include <bits/stdc++.h>
using namespace std;

int main(){
    string A, result="";
    int B;
    cin>>A>>B;
    int buf=0;
    for (int i = 0; i < A.size(); ++i){
        int bit = buf * 10 + A[i] - '0';
        result += '0'+bit/B;
        buf = bit%B;
    }
    if(result[0]=='0'&&result.size()>1)
        result.erase(0,1);
    cout<<result<<" "<<buf<<endl;
    return 0;
}