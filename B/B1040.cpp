#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string input;
    cin>>input;
    int p=0, pa=0, pat=0;
    for(int i = 0; i < input.size(); i++){
        if(input[i] == 'P'){
            p++;
        }else if(input[i] == 'A'){
            pa += p;
            pa %= 1000000007;
        }else if(input[i] == 'T'){
            pat += pa;
            pat %= 1000000007;
        }
    }
    cout<<pat<<endl;
    return 0;
}
