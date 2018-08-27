#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a_r[3]={0}, b_r[3]={0};
    int a_c[3]={0}, b_c[3]={0};
    for (int i = 0; i < n; ++i){
        string a, b;
        cin>>a>>b;
        if (a == "B"){
            if (b == "C"){
                a_c[0]++;
                b_c[2]++;
                a_r[0]++;
            }else if (b == "J"){
                a_c[2]++;
                b_c[0]++;
                b_r[2]++;
            }else{
                a_c[1]++;
                b_c[1]++;
            }
        }else if(a == "C"){
            if (b == "J"){
                a_c[0]++;
                b_c[2]++;
                a_r[1]++;
            }else if (b == "B"){
                a_c[2]++;
                b_c[0]++;
                b_r[0]++;
            }else{
                a_c[1]++;
                b_c[1]++;
            }
        }else {
            if (b == "B"){
                a_c[0]++;
                b_c[2]++;
                a_r[2]++;
            }else if (b == "C"){
                a_c[2]++;
                b_c[0]++;
                b_r[1]++;
            }else{
                a_c[1]++;
                b_c[1]++;
            }
        }
    }
    cout<<a_c[0]<<" "<<a_c[1]<<" "<<a_c[2]<<endl;
    cout<<b_c[0]<<" "<<b_c[1]<<" "<<b_c[2]<<endl;
    string output="BCJ";
    int max=0;
    if (a_r[0] < a_r[1]) max = 1;
    if (a_r[max] < a_r[2]) max = 2;
    cout<<output[max]<<" ";
    max=0;
    if (b_r[0] < b_r[1]) max = 1;
    if (b_r[max] < b_r[2]) max = 2;
    cout<<output[max]<<endl;
    return 0;
}