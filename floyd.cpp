#include <iostream>
#include <algorithm>
using namespace std;

int const maxn = 256;

int a[maxn][maxn];

int main() {
    int N, M;
    while(scanf("%d %d", &N, &M) != EOF){

        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                if(j == i){
                    a[i][j] = 0;
                }else{
                    a[i][j] = 1e9;
                }
            }
        }

        for(int i=0; i<M; i++){
            int x, y, d;
            scanf("%d %d %d", &x, &y, &d);
            a[x][y] = min(d, a[x][y]);
            a[y][x] = min(d, a[y][x]);
        }

        for(int k=0; k<N; k++)
            for(int i=0; i<N; i++)
                for(int j=0; j<N; j++)
                    a[i][j] = min(a[i][j], a[i][k]+a[k][j]);

        int x, y;
        scanf("%d %d", &x, &y);
        if(a[x][y] == 1e9){
            printf("-1\n");
        }else{
            printf("%d\n", a[x][y]);
        }
    }
    return 0;
}