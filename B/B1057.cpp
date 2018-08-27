#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char** argv) {
    string len;
    getline(cin, len);
    int sum=0;
    for (int i = 0; i < len.size(); ++i){
        if (len[i] >= 'a' && len[i] <= 'z'){
            sum += len[i] - 'a' + 1;
        }else if (len[i] >= 'A' && len[i] <= 'Z'){
            sum += len[i] - 'A' + 1;
        }
    }
    int hash[2] = {0};
    while(sum != 0){
        int dash = sum % 2;
        hash[sum % 2]++;
        sum = sum / 2;
    }
    cout<<hash[0]<<" "<<hash[1]<<endl;
    return 0;
}
