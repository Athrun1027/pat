#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, m;
    scanf("%d %d", &n, &m);
    vector<int> a(m);
    vector<int> b(m);
    for(int i=0; i<m; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<m; i++){
        scanf("%d", &b[i]);
    }
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=0; j<m; j++){
            int temp;
            scanf("%d", &temp);
            if(b[j] == temp){
                sum += a[j];
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
