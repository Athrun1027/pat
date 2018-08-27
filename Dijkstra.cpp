#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

const int maxn = 205;
vector<pair<int, int> > E[maxn];

int n, m;
int d[maxn];

void init(){
    for (int i = 0; i < maxn; ++i){
        E[i].clear();
    }
    for (int i = 0; i < maxn; ++i){
        d[i] = 1e9;
    }
}

int main(int argc, char const *argv[])
{
    while(scanf("%d %d", &n, &m) != EOF){

        init();
        for (int i = 0; i < m; ++i){
            int x, y, d;
            scanf("%d %d %d", &x, &y, &d);
            E[x].push_back(make_pair(y, d));
            E[y].push_back(make_pair(x, d));
        }

        int s, t;
        scanf("%d %d", &s, &t);

        priority_queue<pair<int, int> > Q;
        d[s] = 0;
        Q.push(make_pair(-d[s], s));
        while (Q.empty() == 0 && Q.top().second != t){
            int now = Q.top().second;
            Q.pop();
            for (int i = 0; i < E[now].size(); ++i){
                int v = E[now][i].first;
                if (d[v] > d[now] + E[now][i].second){
                    d[v] = d[now] + E[now][i].second;
                    Q.push(make_pair(-d[v], v));
                }
            }
        }
        if (d[t] == 1e9){
            printf("-1\n");
        }else{
            printf("%d\n", d[t]);
        }
    }

    return 0;
}