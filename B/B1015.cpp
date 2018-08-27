#include <bits/stdc++.h>
using namespace std;

struct student{
    int num, de, cai;
};

bool cmp(student a, student b){
    if ((a.de+a.cai) != (b.de+b.cai)){
        return (a.de+a.cai) > (b.de+b.cai);
    }else if (a.de != b.de){
        return a.de > b.de;
    }else
        return a.num < b.num;
};

int main(){
    int N,low,high;
    scanf("%d %d %d", &N, &low, &high);
    vector<student> v[4];
    int count = 0;
    for (int i = 0; i < N; ++i){
        int num, de, cai;
        student item;
        scanf("%d %d %d", &item.num, &item.de, &item.cai);
        if(item.de < low || item.cai < low)
            continue;
        count++;
        if(item.de >= high && item.cai >= high)
            v[0].push_back(item);
        else if (item.de >= high && item.cai < high)
            v[1].push_back(item);
        else if (item.de < high && item.cai < high && item.de >= item.cai)
            v[2].push_back(item);
        else
            v[3].push_back(item);
    }
    printf("%d\n", count);
    for (int i = 0; i < 4; ++i){
        sort(v[i].begin(), v[i].end(), cmp);
        for(student it:v[i])
            printf("%d %d %d\n", it.num, it.de, it.cai);
    }
    return 0;
}