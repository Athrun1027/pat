#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    vector<int> input(n);
    vector<int> p(n);
    for (int i = 0; i < n; ++i){
        scanf("%d", &input[i]);
    }
    for (int i = 0; i < n; ++i){
        scanf("%d", &p[i]);
    }

    int index;
    for (index = 0; index < n-1; ++index){
        if (p[index] > p[index+1]){
            break;
        }
    }
    int j;
    for (j = index+1; j < n; ++j){
        if (p[j] != input[j]){
            break;
        }
    }
    if (j == n){
        printf("Insertion Sort\n");
        sort(input.begin(), input.begin()+index+2);
    }else{
        printf("Merge Sort\n");
        int ok=0;
        int k = 1;
        while(ok!=1){
            ok = 1;
            for (int i = 0; i < n; ++i){
                if (p[i] != input[i]){
                    ok = 0;
                    break;
                }
            }
            k = k * 2;
            for (int i = 0; i < n / k; i++)
                sort(input.begin() + i * k, input.begin() + (i + 1) * k);
            sort(input.begin() + n / k * k, input.begin() + n);
        }
    }


    for (int i = 0; i < n-1; ++i){
        printf("%d ", input[i]);
    }
    printf("%d\n", input[n-1]);
    return 0;
}
