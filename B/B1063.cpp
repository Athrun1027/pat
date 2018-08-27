#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int max=0;
    for(int i=0; i<N; i++){
        int a, b;
        cin>>a>>b;
        if(a*a+b*b > max)
            max = a*a+b*b;
    }
    printf("%.2f", sqrt(max));
    return 0;
}