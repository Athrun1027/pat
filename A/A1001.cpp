#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int a,b,sum;
    cin>>a>>b;
    sum = a + b;
    if (sum < 0){
        cout<<'-';
        sum = sum * -1;
    }else if(sum == 0){
        cout<<'0';
        return 0;
    }
    int sum_list[10],index=0;
    while(sum){
        sum_list[index++] = sum % 10;
        sum = sum / 10;
    }
    for(int i = index-1;i>=0;i--){
        cout<<sum_list[i];
        if (i % 3 == 0 && i>0)
            cout<<',';
    }
    cout<<endl;
    return 0;
}