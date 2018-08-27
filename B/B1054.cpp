#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char** argv) {
    int n, count=0;
    scanf("%d", &n);
    double sum = 0.0;
    for (int i = 0; i < n; ++i){
        char num[50], out[50];
        scanf("%s", num);
        double temp;
        sscanf(num, "%lf", &temp);
        sprintf(out, "%.2f", temp);
        int flag = 1;
        for (int i = 0; i < strlen(num); ++i){
            if (num[i] != out[i]){
                flag = 0;
                break;
            }
        }
        if (flag == 0 || temp < -1000 || temp > 1000){
            printf("ERROR: %s is not a legal number\n", num);
            continue;
        }else{
            sum += temp;
            count++;
        }
    }
    if (count == 1){
        printf("The average of 1 number is %.2f\n", sum/count);
    }else if (count != 0){
        printf("The average of %d numbers is %.2f\n", count, sum/count);
    }else{
        printf("The average of 0 numbers is Undefined\n");
    }
    return 0;
}
