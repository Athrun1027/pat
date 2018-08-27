#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    int hash[200] = {0};
    string len1;
    cin>>len1;
    for(int i=0;i<len1.size();i++){
        hash[len1[i] - '0']++;
    }
    string len2;
    cin>>len2;
    for(int i=0;i<len2.size();i++){
        hash[len2[i] - '0']--;
    }
    int less=0, more=0;
    for(int i=0;i<200;i++){
        if(hash[i] < 0){
            less += -1 * hash[i];
        }else if(hash[i] > 0){
            more += hash[i];
        }
    }
    if(less <= 0){
        printf("Yes %d\n", more);
    }else{
        printf("No %d\n", less);
    }
    return 0;
}