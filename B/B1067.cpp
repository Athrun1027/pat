#include <iostream>
#include <math.h>
#include <set>
using namespace std;

int main() {
    string password, pass;
    int N, k=0;
    cin >> password >> N;
    getchar();
    while(1){
        if(k >= N){
            cout<<"Account locked\n";
            return 0;
        }
        getline(cin, pass);
        k++;
        if(pass == "#"){
            return 0;
        }
        if(pass == password){
            cout<<"Welcome in\n";
            return 0;
        }else{
            cout<<"Wrong password: "<<pass<<endl;
        }
    }
    return 0;
}