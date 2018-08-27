#include <bits/stdc++.h>
using namespace std;

bool is_prime(int num){
    if (num == 2 || num == 3){
       return true;
    }
    if(num%6!=1 && num%6!=5)
       return false;
    for(int i=5;i<=int(sqrt(num));i+=6)
       if(num%i==0||num%(i+2)==0)
           return false;
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    int M, N;
    cin>>M>>N;
    int num=2, count=0;
    vector<int> v;
    while(count <= N){
        if(is_prime(num)){
            count++;
            if(count >= M && count <= N)
                v.push_back(num);
        }
        num++;
    }
    for (unsigned i = 0; i < v.size(); ++i){
        cout<<v[i];
        if (i % 10 == 9 || i == v.size()-1) cout<<endl;
        else cout<<" ";
    }
    return 0;
}