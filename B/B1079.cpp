#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool huiwen(string line){
    string temp = line;
    reverse(temp.begin(), temp.end());
    if(line == temp)
        return 1;
    return 0;
}

string add(string a){
    string temp = a;
    reverse(temp.begin(), temp.end());
    string add="";
    int dash=0;
    for(int i=0; i<a.size(); i++){
        int sum = a[i] - '0' + temp[i] - '0' + dash;
        add += '0' + (sum % 10);
        if(sum >= 10){
            dash = 1;
        }else {
            dash = 0;
        }
    }
    if(dash == 1){
        add += "1";
    }
    reverse(add.begin(), add.end());
    return add;
}

int main() {
    string num;
    cin>>num;
    int step=0;
    while(huiwen(num) != 1){
        if(++step > 10){
            cout<<"Not found in 10 iterations.\n";
            return 0;
        }
        string temp = num;
        reverse(temp.begin(), temp.end());
        cout<<num<<" + "<<temp<<" = ";
        num = add(num);
        cout<<num<<endl;
    }
    cout<<num<<" is a palindromic number.\n";
    return 0;
}