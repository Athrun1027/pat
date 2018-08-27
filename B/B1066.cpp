#include <bits/stdc++.h>
using namespace std;

int main(){
    int col, n, low, high, num;
    scanf("%d %d %d %d %d", &col, &n, &low, &high, &num);
    for (int i = 0; i < col; ++i){
        for(int j=0; j<n; j++){
            int temp;
            scanf("%d", &temp);
            if (temp >= low && temp <= high){
                temp = num;
            }
            if(j == n-1){
                printf("%03d\n", temp);
            }else{
                printf("%03d ", temp);
            }
        }
    }
    return 0;
}
