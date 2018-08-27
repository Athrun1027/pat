#include <bits/stdc++.h>
using namespace std;


int main(){
    int x;
    char a;
    scanf("%d %c", &x, &a);
    int n = sqrt((x+1)/2);
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < i; ++j){
            printf(" ");
        }
        for (int j = 0; j < 2*n-1-2*i; ++j){
            printf("%c", a);
        }
        printf("\n");
    }
    for (int i = 1; i < n; ++i){
        for (int j = 0; j < n-i-1; ++j){
            printf(" ");
        }
        for (int j = 0; j < 1+2*i; ++j){
            printf("%c", a);
        }
        printf("\n");
    }
    printf("%d\n", x-(2*n*n-1));
    return 0;
}
