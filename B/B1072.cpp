#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <math.h>
using namespace std;

struct node
{
    int num, all, score, wrong;
};

int main() {
    int N, M;
    cin >> N >> M;
    map<string, int> things;
    for(int i=0; i<M; i++){
        string temp;
        cin>>temp;
        things[temp] = -1;
    }
    int cnt_s=0,cnt_t=0;
    for(int i=0; i<N; i++){
        string name;
        int k;
        cin>>name>>k;
        vector<string> nono;
        for(int j=0; j<k; j++){
            string temp;
            cin>>temp;
            if(things[temp] == -1){
                nono.push_back(temp);
            }
        }
        if(nono.size() != 0){
            cnt_s++;
            cnt_t += nono.size();
            cout<<name<<": ";
        }
        for(int j=0; j<nono.size(); j++){
            cout<<nono[j];
            if(j == nono.size() -1){
                cout<<endl;
            } else{
                cout<<" ";
            }
        }
    }
    cout<<cnt_s<<" "<<cnt_t<<endl;
    return 0;
}