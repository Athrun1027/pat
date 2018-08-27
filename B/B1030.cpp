#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, p;
    scanf("%d%d", &n, &p);
    if (n == 0) {
        cout << n;
        return 0;
    }
    vector<long long> v1;
    for (int i = 0; i < n; ++i){
        int temp;
        scanf("%d", &temp);
        v1.push_back(temp);
    }
    sort(v1.begin(), v1.end());
    int result = 1;
    for (int i = 0; i <= n - 2; i++) {
        for (int j = i + result; j <= n - 1; j++) {
            if (v1[j] > v1[i] * p) break;
            result = max(result, j - i + 1);
        }
    }
    printf("%d", result);
    return 0;
}
