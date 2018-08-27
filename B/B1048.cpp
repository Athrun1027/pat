#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char** argv) {
    string A, B;
    cin>>A>>B;
    int dash=1;
    if(A.size() > B.size()){
        dash = 0;
    }
    string add="";

    if(dash){
        for(int i=0; i<B.size() - A.size();i++){
            add += "0";
        }
        A = add + A;
    }else{
        for(int i=0; i<A.size() - B.size();i++){
            add += "0";
        }
        B = add + B;
    }
    for(int i=0; i<A.size(); i++){
        int temp;
        if((A.size() - i) & 1){
            temp = (A[i]-'0' + B[i]-'0') % 13;
            if(temp == 10){
                cout<<"J";
            }else if(temp == 11){
                cout<<"Q";
            }else if(temp == 12){
                cout<<"K";
            }else{
                cout<<temp;
            }
        }else{
            temp = (B[i]-'0') - (A[i]-'0');
            if(temp < 0){
                cout<<temp + 10;
            }else{
                cout<<temp;
            }
        }
    }
    printf("\n");
    return 0;
}