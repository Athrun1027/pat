#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    int n, top;
    scanf("%d %d", &n, &top);
    for(int i=0; i<n; i++){
        vector<int> all;
        for(int j=0; j<n; j++){
            int temp;
            scanf("%d", &temp);
            if(temp >=0 && temp <= top){
                all.push_back(temp);
            }
        }
        sort(all.begin()+1, all.end());
        int ave=0;
        for(int j=2; j<all.size()-1; j++){
            ave += all[j];
        }
        double score = (ave*1.0/(all.size()-3) + all[0]*1.0) / 2 + 0.5;
        printf("%d\n", int(score));
    }
    return 0;
}