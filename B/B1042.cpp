#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    int hash[30] = {0};
    string len1;
    getline(cin, len1);
    for(int i=0;i<len1.size();i++){
        if(len1[i] >= 'A' && len1[i] <= 'Z'){
            hash[len1[i] + 32 - 'a']++;
        }else if(len1[i] >= 'a' && len1[i] <= 'z'){
            hash[len1[i] - 'a']++;
        }
    }
    int max=0;
    for(int i=0;i<30;i++){
        if(hash[max] < hash[i]){
            max = i;
        }
    }
    printf("%c %d\n", max + 'a', hash[max]);

    return 0;
}