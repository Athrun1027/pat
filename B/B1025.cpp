#include <bits/stdc++.h>
using namespace std;

struct node {
    int addr, next;
    int data;
};

int main(){
    map<int, node> hash;
    int start;
    int n, k, count=0;
    scanf("%d %d %d", &start, &n, &k);
    for (int i = 0; i < n; ++i){
        node item;
        scanf("%d %d %d", &item.addr, &item.data, &item.next);
        hash[item.addr] = item;
    }
    vector<node> nodes;
    for (int i = start; i != -1; ){
        node point = hash[i];
        i = point.next;
        nodes.push_back(point);
    }
    int times = nodes.size()/k;
    for (int i = 0; i < times; i++){
        reverse(nodes.begin()+i*k, nodes.begin()+i*k+k);
    }
    for (int i = 0; i < nodes.size(); i++){
        if(i != nodes.size()-1)
            printf("%05d %d %05d\n", nodes[i].addr, nodes[i].data, nodes[i+1].addr);
        else
            printf("%05d %d -1\n", nodes[i].addr, nodes[i].data);
    }
    return 0;
}
