#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    string len1, len2, len3;
    int hash[21] = {0};
    cin>>len1;
    reverse(len1.begin(), len1.end());
    cin>>len2>>len3;
    int sub = len2.size() - len3.size();
    string zero(abs(sub), '0');
    if(sub > 0){
        len3 = zero + len3;
    }else{
        len2 = zero + len2;
    }
    reverse(len2.begin(), len2.end());
    reverse(len3.begin(), len3.end());
    int dash = 0;
    string ans="";
    for(int i=0; i<len1.size(); i++){
        int sum = len2[i] - '0' + len3[i] - '0' + dash;
        int boss = len1[i]-'0';
        if(boss == 0){
            boss = 10;
        }
        ans += (sum % boss) + '0';
        dash = sum / boss;
    }
    if(dash != 0){
        ans += dash + '0';
    }
    reverse(ans.begin(), ans.end());
    int count = 0;
    for(int i=0; i<ans.size(); i++){
        if(ans[i] == '0' && count == 0){
            continue;
        }
        cout<<ans[i];
        count++;
    }
    if(count == 0){
        cout<<0;
    }
    cout<<endl;
    return 0;
}