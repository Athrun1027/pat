#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int n1, m1, n2, m2, k;
    scanf("%d/%d %d/%d %d", &n1, &m1, &n2, &m2, &k);
    if(n1 * m2 > n2 * m1) {
        swap(n1, n2);
        swap(m1, m2);
    }
    vector<int> a;
    for (int i = n1*1.0*k/m1 + 1; i < n2*1.0*k/m2; i++){
        if (gcd(i, k) == 1){
            a.push_back(i);
        }
    }
    printf("%d/%d", a[0], k);
    for (int i = 1; i < a.size(); i++) {
        printf(" %d/%d", a[i], k);
    }
    return 0;
}