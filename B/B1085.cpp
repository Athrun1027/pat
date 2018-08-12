#include <bits/stdc++.h>
using namespace std;

struct node {
    string school;
    int sum;
    int count;
};

int main(){
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    unordered_map<string, double> mp;
    unordered_map<string, int> count;
    for (int i = 0; i < n; i++) {
        string school, num;
        double score;
        cin>>num>>score>>school;
        transform(num.begin(), num.end(), num.begin(), ::tolower);
        transform(school.begin(), school.end(), school.begin(), ::tolower);
        if (num[0] == 'b') score = score/1.5;
        if(num[0] == 't') score = score*1.5;
        mp[school] += score;
        count[school]++;
    }
    vector<node> nodes;
    for (auto i:mp){
        nodes.push_back(node{i.first, (int)i.second, count[i.first]});
    }
    sort(nodes.begin(), nodes.end(), [](node a, node b){
        if(a.sum != b.sum) return a.sum>b.sum;
        else if(a.count != b.count) return a.count < b.count;
        else return a.school < b.school;
    });
    cout<<nodes.size()<<endl;
    int index=0, index_r=0, last=-1;
    for (node i:nodes) {
        index_r++;
        if(i.sum != last) index = index_r;
        cout<<index<<" "<<i.school<<" "<<i.sum<<" "<<i.count<<endl;
        last = i.sum;
    }
    return 0;
}