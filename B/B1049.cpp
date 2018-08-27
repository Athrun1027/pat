#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char** argv) {
    int n;
    scanf("%d", &n);
    vector<double> v(n);
    double sum=0.0;
    for(int i=0; i<n; i++){
        scanf("%lf", &v[i]);
    }
    for(int i=0; i<n; i++){
        sum += (double)(n - i)*(double)(i + 1)*v[i];
    }
    printf("%.2f\n", sum);
    return 0;
}