#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{
    int Galleon_a, Sickle_a, Knut_a;
    int Galleon_b, Sickle_b, Knut_b;
    int Galleon_c, Sickle_c, Knut_c;
    scanf("%d.%d.%d %d.%d.%d", &Galleon_a, &Sickle_a, &Knut_a,
            &Galleon_b, &Sickle_b, &Knut_b);
    int temp = Knut_a + Knut_b;
    Knut_c = temp % 29;
    int dash = temp / 29;
    temp = Sickle_a + Sickle_b + dash;
    Sickle_c = temp % 17;
    Galleon_c = Galleon_a + Galleon_b + temp / 17;
    printf("%d.%d.%d\n", Galleon_c, Sickle_c, Knut_c);
    return 0;
}