#include <bits/stdc++.h>

using namespace std;


// 转换成正数
int positive(long long &a){
    if (a < 0){
        a *= -1;
        return -1;
    }
    return 1;
}

// 最大公约数
long long measure(long long a, long long b){
    long long c=b;
    while(a%b!=0){
        c = a % b;
        a = b;
        b = c;
    }
    return c;
}

//输出
void print(int n, long long a, long long b){
    if (b == 0){
        printf("Inf");
        return ;
    }
    if (a == 0){
        printf("0");
        return ;
    }
    long long mea = measure(a, b);
    a = a / mea;
    b = b / mea;
    long long i = a / b;
    a = a - i*b;

    if (n<0){
        printf("(-");
    }
    if (i != 0){
        printf("%d", i);
    }
    if (i != 0 && a != 0){
        printf(" ");
    }
    if (a != 0){
        printf("%d/%d", a, b);
    }
    if (n<0){
        printf(")");
    }
}

//加法
void add(long long n1, long long a1, long long b1, long long n2, long long a2, long long b2){
    long long b = b1*b2;
    long long a = n1*b2*a1+n2*b1*a2;
    int n = positive(a);
    print(n1, a1, b1);
    printf(" + ");
    print(n2, a2, b2);
    printf(" = ");
    print(n, a, b);
    printf("\n");
}

//减法
void sub(long long n1, long long a1, long long b1, long long n2, long long a2, long long b2){
    long long b = b1*b2;
    long long a = n1*b2*a1-n2*b1*a2;
    int n = positive(a);
    print(n1, a1, b1);
    printf(" - ");
    print(n2, a2, b2);
    printf(" = ");
    print(n, a, b);
    printf("\n");
}

//乘法
void mulit(long long n1, long long a1, long long b1, long long n2, long long a2, long long b2){
    long long b = b1*b2;
    long long a = a1*a2;
    int n = n1*n2;
    print(n1, a1, b1);
    printf(" * ");
    print(n2, a2, b2);
    printf(" = ");
    print(n, a, b);
    printf("\n");
}

//除法
void device(long long n1, long long a1, long long b1, long long n2, long long a2, long long b2){
    long long b = b1*a2;
    long long a = a1*b2;
    int n = n1*n2;
    print(n1, a1, b1);
    printf(" / ");
    print(n2, a2, b2);
    printf(" = ");
    print(n, a, b);
    printf("\n");
}

int main(){
    long long a1, b1, a2, b2;
    scanf("%lld/%lld %lld/%lld", &a1, &b1, &a2, &b2);
    int n1 = positive(a1), n2 = positive(a2);
    add(n1, a1, b1, n2, a2, b2);
    sub(n1, a1, b1, n2, a2, b2);
    mulit(n1, a1, b1, n2, a2, b2);
    device(n1, a1, b1, n2, a2, b2);
    return 0;
}
