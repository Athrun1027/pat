#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, second;
    scanf("%d%d", &a, &b);
    second = (b - a + 50)/100;
    printf("%02d:%02d:%02d\n", second/3600, second%3600/60, second%60);
    return 0;
}