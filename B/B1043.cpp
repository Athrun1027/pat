#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    int hash[6] = {0};
    string len1;
    cin>>len1;
    for(int i=0;i<len1.size();i++){
        if(len1[i] == 'P'){
            hash[0]++;
        }else if(len1[i] == 'A'){
            hash[1]++;
        }else if(len1[i] == 'T'){
            hash[2]++;
        }else if(len1[i] == 'e'){
            hash[3]++;
        }else if(len1[i] == 's'){
            hash[4]++;
        }else if(len1[i] == 't'){
            hash[5]++;
        }
    }
    int max = 0;
    for(int i=0;i<6;i++){
        if(max < hash[i]){
            max = hash[i];
        }
    }
    string mp = "PATest";
    while(max--){
        for(int i=0;i<6;i++){
            if(hash[i] > 0){
                printf("%c", mp[i]);
                hash[i]--;
            }
        }
    }
    printf("\n");
    return 0;
}