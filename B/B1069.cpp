#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int M, N, S;
    cin >> M >> N >> S;
    map<string, int> mp;
    int cnt=0, now=1;
    for(int i=0; i<M; i++){
        string temp;
        cin>>temp;
        if(mp[temp] > 0){
            continue;
        }
        int dash = now - S;
        if(dash >= 0 && dash % N == 0){
            cout<<temp<<endl;
            mp[temp]++;
            cnt++;
        }
        now++;
    }
    if(cnt == 0){
        cout<<"Keep going...\n";
    }
    return 0;
}