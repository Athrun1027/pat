#include <bits/stdc++.h>
using namespace std;

int main(){
    int hash[10]={0};
    string num;
    cin>>num;
    for (int i = 0; i < num.size(); ++i)
        hash[num[i]-'0']++;
    for (int i = 0; i < 10; ++i)
        if (hash[i] != 0)
            printf("%d:%d\n", i, hash[i]);
    return 0;
}