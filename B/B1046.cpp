#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a_cups = 0, b_cups = 0;
    scanf("%d", &n);
    while(n--){
        int a_shout, a_wirte, b_shout, b_wirte;
        scanf("%d %d %d %d", &a_shout, &a_wirte, &b_shout, &b_wirte);
        if(a_shout + b_shout == a_wirte && a_wirte != b_wirte) b_cups++;
        if(a_shout + b_shout == b_wirte && a_wirte != b_wirte) a_cups++;
    }
    printf("%d %d\n", a_cups, b_cups);
    return 0;
}