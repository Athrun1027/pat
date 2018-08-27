#include <bits/stdc++.h>
using namespace std;

int main(){
    int hash[130]={0};
    string a, b;
    cin>>a>>b;
    int index=0;
    for (int i = 0; i < a.size(); ++i){
        if (a[i] == b[index]){
            index++;
        }else{
            int bit;
            if(a[i]>='a'){
                bit = a[i]-32-'0';
            }else{
                bit = a[i]-'0';
            }
            if (++hash[bit] == 1){
                printf("%c", '0'+bit);
            }
        }
    }
    cout<<endl;
    return 0;
}
