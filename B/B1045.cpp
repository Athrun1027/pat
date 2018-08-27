#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    vector<int> input(n), s(n);
    vector<int> output;
    int max=0, count=0;
    for(int i = 0; i < n; i++){
        scanf("%d", &input[i]);
    }
    s = input;
    sort(s.begin(), s.end());
    for(int i = 0; i < n; i++){
        if(input[i] == s[i]){
            if(input[i] > max){
                output.push_back(input[i]);
            }
        }
        if(input[i] > max){
            max = input[i];
        }
    }
    cout<<output.size()<<endl;
    for(int i = 0; i < output.size(); i++){
        printf("%d", output[i]);
        if(i == output.size() - 1){
            printf("\n");
        }else {
            printf(" ");
        }
    }
    if(output.size() == 0){
        printf("\n");
    }
    return 0;
}
