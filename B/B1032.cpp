#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> hash(n, 0);
    int max=-1, sum=-1;
    for (int i = 0; i < n; ++i){
        int num, sorce;
        cin>>num>>sorce;
        hash[num] += sorce;
        if (hash[num]>sum){
            max = num;
            sum = hash[num];
        }
    }
    cout<<max<<" "<<sum<<endl;
    return 0;
}
