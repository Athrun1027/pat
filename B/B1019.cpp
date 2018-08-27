#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    stringstream ss;
    ss<<setw(4)<<setfill('0')<<n;
    string num=ss.str();
    do{
        string a=num, b=num;
        sort(a.begin(), a.end());
        b = a;
        reverse(b.begin(), b.end());
        int result;
        result = stoi(b)-stoi(a);
        ss.str("");
        ss<<setw(4)<<setfill('0')<<result;
        num=ss.str();
        printf("%04d - %04d = %04d\n", stoi(b), stoi(a), result);
    }while(num != "6174" && num != "0000");
    return 0;
}