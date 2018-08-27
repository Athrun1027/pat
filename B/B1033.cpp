#include <bits/stdc++.h>
using namespace std;

int main(){
    int hash[130]={0};
    string a, b;
    getline(cin, a);
    getline(cin, b);
    for(int i=0; i<a.size(); i++){
        hash[a[i]-'\a']++;
    }
    int count=0;
    for(int i=0; i<b.size(); i++){
        char temp=b[i];
        int success=1;
        if (temp>='a' && temp<='z'){
            temp -= 32;
        }
        if (hash[temp-'\a'] != 0){
            success = 0;
        }
        if (hash['+'-'\a'] != 0 && b[i]>='A' && b[i]<='Z'){
            success = 0;
        }
        if (success == 1){
            cout<<b[i];
            count++;
        }
    }
    cout<<endl;
    return 0;
}
