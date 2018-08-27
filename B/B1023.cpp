#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> hash(10, 0);
    int temp, min = 10;
    for (int i = 0; i < 10; ++i){
        cin>>temp;
        hash[i] = temp;
        if(i < min && i != 0 && temp >0)
            min = i;
    }
    cout<<min;
    hash[min]--;
    for (int i = 0; i < hash[0]; ++i)
        cout<<0;
    for (int i = 1; i < 10; ++i)
        for (int j = 0; j < hash[i]; ++j)
            cout<<i;
    cout<<endl;
    return 0;
}