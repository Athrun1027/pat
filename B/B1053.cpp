#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char** argv) {
    int n, d;
    double e;
    scanf("%d %lf %d", &n, &e, &d);
    int maybe=0, none=0;
    for (int i = 0; i < n; ++i){
        int k, low=0;
        scanf("%d", &k);
        for (int j = 0; j < k; ++j){
            double temp;
            scanf("%lf", &temp);
            if(temp < e){
                low++;
            }
        }
        if (low*2 > k){
            if (k > d){
                none++;
            }else{
                maybe++;
            }
        }
    }
    printf("%.1f%% %.1f%%\n", maybe*1.0/n*100, none*1.0/n*100);
    return 0;
}
