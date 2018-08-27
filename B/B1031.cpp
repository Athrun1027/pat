#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    string m="10X98765432";
    int n, count=0;
    cin>>n;
    for (int i = 0; i < n; ++i){
        string temp;
        cin>>temp;
        int sum=0, success=1;
        for (int i = 0; i < temp.size()-1; ++i){
            if(temp[i] == 'X'){
                success = 0;
                break;
            }
            sum += a[i]*(temp[i]-'0');
        }
        if (m[sum % 11] != temp[temp.size()-1] || success == 0){
            cout<<temp<<endl;
        }else{
            count++;
        }
    }
    if (count == n){
        cout<<"All passed\n";
    }
    return 0;
}
