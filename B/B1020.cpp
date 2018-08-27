#include <bits/stdc++.h>
using namespace std;

struct node {
    double stone, total;
    double unit;
};

int main(){
    int N, need;
    cin>>N>>need;
    vector<double> stone;
    vector<double> total;
    vector<node> nodes;
    for(int i=0;i<N;i++){
        double temp;
        cin>>temp;
        stone.push_back(temp);
    }
    for(int i=0;i<N;i++){
        double temp;
        cin>>temp;
        total.push_back(temp);
    }
    for (int i = 0; i < stone.size(); ++i){
        nodes.push_back(node{stone[i], total[i], total[i]/stone[i]});
    }
    sort(nodes.begin(), nodes.end(), [](node a, node b){return a.unit>b.unit;});
    double sum=0.0;
    for (int i = 0; i < nodes.size(); ++i){
        if (nodes[i].stone < need){
            sum += nodes[i].total;
            need -= nodes[i].stone;
        }else{
            sum += need*nodes[i].unit;
            need -= nodes[i].stone;
        }
        if (need <= 0){
            break;
        }
    }
    printf("%.2f\n", sum);
    return 0;
}