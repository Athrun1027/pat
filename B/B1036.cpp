#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,col;
    char str;
    scanf("%d %c",&n,&str);
    if(n & 1){
        col = n / 2 + 1;
    }else{
        col = n / 2;
    }
    for (int i = 0; i < col; ++i){
        if(i == 0 || i == (col - 1)){
            for (int j = 0; j < n; ++j){
                printf("%c", str);
            }
        }else{
            printf("%c", str);
            for (int j = 1; j < n-1; ++j){
                printf(" ");
            }
            printf("%c", str);
        }
        printf("\n");
    }
    return 0;
}