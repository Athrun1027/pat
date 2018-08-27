#include <iostream>
#include <math.h>
#include <set>
using namespace std;

struct node
{
    int num, all, score, wrong;
};

int main() {
    int N;
    cin >> N;
    set<int> a;
    for(int i=0; i<N; i++){
        string temp;
        cin>>temp;
        int sum=0;
        for(int j=0; j<temp.size(); j++){
            sum += temp[j] - '0';
        }
        a.insert(sum);
    }
    printf("%d\n", a.size());
    int k=0;
    for(auto i:a){
        if(k++ != 0){
            printf(" ");
        }
        printf("%d", i);
    }
    printf("\n");
    return 0;
}