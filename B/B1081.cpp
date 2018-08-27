#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    getchar();
    while(n--){
        string input;
        int c_c=0, n_c=0, d_c=0, td=0;
        getline(cin, input);
        if(input.size() < 6){
            printf("Your password is tai duan le.\n");
            continue;
        }
        for(int i=0;i<input.size();i++){
            if((input[i] >= 'a' && input[i] <= 'z') ||
            (input[i] >= 'A' && input[i] <= 'Z')){
                c_c++;
            }else if(input[i] >= '0' && input[i] <= '9'){
                n_c++;
            }else if(input[i] == '.'){
                d_c++;
            }else{
                printf("Your password is tai luan le.\n");
                td++;
                break;
            }
        }
        if(td > 0){
            continue;
        }
        if(c_c == 0){
            printf("Your password needs zi mu.\n");
            continue;
        }else if(n_c == 0){
            printf("Your password needs shu zi.\n");
            continue;
        }

        if(c_c > 0 && n_c > 0){
            printf("Your password is wan mei.\n");
        }
    }

    return 0;
}
