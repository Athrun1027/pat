#include <bits/stdc++.h>
using namespace std;

int main(){
    string input;
    char po1, po2;
    cin>>input;
    po1 = input[0];
    if(po1 == '-')
        cout<<po1;
    input.erase(0, 1);
    string num="";
    for (int i = 0; i < input.size(); ++i){
        if (input[i] != 'E'){
            if(input[i] != '.')
                num += input[i];
        }
        else
            break;
    }
    input.erase(0, num.size()+2);
    int num_e, len=num.size()-1;
    stringstream ss(input);
    ss>>num_e;

    if(num_e <= 0){
        cout<<"0.";
        for (int i = 0; i < abs(num_e)-1; ++i){
            cout<<"0";
        }
        cout<<num;
    }
    else{
        cout<<num[0];
        num.erase(0,1);
        for (int i = 0; i < num.size(); ++i){
            if (i == num_e){
                cout<<".";
            }
            cout<<num[i];
        }
        if(num_e>len)
        for (int i = 0; i < num_e-len; ++i){
            cout<<0;
        }
    }
    cout<<endl;
    return 0;
}