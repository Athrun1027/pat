#include <iostream>

struct node {
    int galleon, sickle, kunt, sum;
};

int main(int argc, char** argv) {
    node P, A;
    scanf("%d.%d.%d %d.%d.%d", &P.galleon, &P.sickle, &P.kunt, &A.galleon, &A.sickle, &A.kunt);
    A.sum = A.galleon * 17 * 29 + A.sickle * 29 + A.kunt;
    P.sum = P.galleon * 17 * 29 + P.sickle * 29 + P.kunt;
    node out;
    out.sum = A.sum - P.sum;

    if(out.sum < 0){
        out.sum *= -1;
        printf("-");
    }
    out.kunt = out.sum % 29;
    out.sum = out.sum / 29;
    out.sickle = out.sum % 17;
    out.galleon = out.sum / 17;
    printf("%d.%d.%d\n", out.galleon, out.sickle, out.kunt);

    return 0;
}