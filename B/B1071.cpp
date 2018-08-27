#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int sum, n;
    scanf("%d %d", &sum, &n);
    while(n--){
        int n1, b, t, n2;
        scanf("%d %d %d %d", &n1, &b, &t, &n2);
        if(sum <= 0){
            printf("Game Over.\n");
            return 0;
        }else if(t > sum){
            printf("Not enough tokens.  Total = %d.\n", sum);
            continue;
        }
        if(n2 > n1 == b){
            sum += t;
            printf("Win %d!  Total = %d.\n", t, sum);
        }else {
            sum -= t;
            printf("Lose %d.  Total = %d.\n", t, sum);
        }
    }

    return 0;
}
