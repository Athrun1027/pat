#include <iostream>

int main(int argc, char** argv) {
    int n, hash[100001] = {0};
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        int num;
        scanf("%d", &num);
        hash[num]++;
    }
    int m;
    scanf("%d", &m);
    for(int i=0;i<m;i++){
        int num;
        scanf("%d", &num);
        printf("%d", hash[num]);
        if(i != m-1){
            printf(" ");
        }
    }
    return 0;
}