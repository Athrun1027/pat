#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct node {
    int id;
    string name;
    int score;
};
int k;

bool cmp(node a, node b){
    if(k == 1){
        return a.id < b.id;
    }else if(k == 2){
        if(a.name != b.name){
            return a.name < b.name;
        }else{
            return a.id < b.id;
        }
    }else if(k == 3){
        if(a.score != b.score){
            return a.score < b.score;
        }else{
            return a.id < b.id;
        }
    }
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d %d", &n, &k);
    vector<node> nodes(n);
    for(int i = 0; i < n; i++){
        scanf("%d", &nodes[i].id);
        cin>>nodes[i].name;
        scanf("%d", &nodes[i].score);
    }
    sort(nodes.begin(), nodes.end(), cmp);
    for(int i = 0; i < n; i++){
        printf("%06d %s %d\n", nodes[i].id, nodes[i].name.c_str(), nodes[i].score);
    }
    return 0;
}