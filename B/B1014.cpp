#include <bits/stdc++.h>
using namespace std;

int main(){
    string Day[] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    string len1, len2, len3, len4;
    cin>>len1>>len2>>len3>>len4;
    char day='*', time;
    if(len1.size()>len2.size()) swap(len1, len2);
    int index=0;
    for(unsigned i=0;i<len1.size();i++){
        if(len1[i] == len2[i] && (len1[i] >= 'A' && len1[i] <= 'G')){
            day = len1[i];
            index = i+1;
            break;
        }
    }
    for(unsigned i=index;i<len1.size();i++){
        if(len1[i] == len2[i]){
            if(len1[i] >= 'A' && len1[i] <= 'N') {
                time = len1[i];
                break;
            }
            else if(len1[i] >= '0' && len1[i] <= '9'){
                time = len1[i];
                break;
            }
        }
    }
    int second;
    if(len3.size()>len4.size()) swap(len3, len4);
    for(unsigned i=0;i<len3.size();i++){
        if(len3[i] == len4[i] && isalpha(len3[i])){
            second = i;
            break;
        }
    }
    cout<<Day[day-'A']<<" ";
    if (time <= '9' && time >= '0'){
        cout<<"0"<<time<<":";
    }else if(time <= 'N' && time >= 'A')
        cout<<time-'A'+10<<":";
    printf("%02d\n", second);
    return 0;
}