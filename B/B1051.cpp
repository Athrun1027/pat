#include<bits/stdc++.h>

int main(int argc, char const *argv[])
{
    double r1, p1, r2, p2;
    scanf("%lf %lf %lf %lf", &r1, &p1, &r2, &p2);
    double r3, p3;
    r3 = r1*r2*(cos(p1)*cos(p2)-sin(p1)*sin(p2));
    p3 = r1*r2*(sin(p1)*cos(p2)+sin(p2)*cos(p1));
    if(r3 < 0 && r3 + 0.005 >=0)
        printf("0.00");
    else
        printf("%.2f", r3);
    if(p3 > 0)
        printf("+%.2fi\n", p3);
    else if(p3 < 0 && p3 + 0.005 >=0)
        printf("+0.00i\n");
    else
        printf("%.2fi\n", p3);
    return 0;
}
