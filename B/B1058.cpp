#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <math.h>
using namespace std;

struct node
{
    int num, all, score, wrong;
};

int main() {
    int N, M;
    cin >> N >> M;
    vector<node> a;
    for (int i = 0; i < M; i++){
        int all, no, raw, score=0;
        cin >> all >> no >> raw;
        for (int j = 0; j < raw; j++){
            string temp;
            cin >> temp;
            score += pow(2, temp[0] - 'a');
        }
        a.push_back(node{i+1, all, score, 0});
    }
    getchar();
    for (int i = 0; i < N; i++){
        string input;
        getline(cin, input);
        int times=0, all_sum=0;
        for (int j = 0; j < input.size(); j++){
            if (input[j] == '('){
                j++;
                int count = input[j++] - '0', sum=0;
                for (int k = 0; k < count * 2; k++){
                    if (input[j] != ' '){
                        sum += pow(2, input[j] - 'a');
                    }
                    j++;
                }
                if (a[times].score == sum){
                    all_sum += a[times].all;
                }else{
                    a[times].wrong++;
                }
                times++;
            }
        }
        cout << all_sum << endl;
    }
    int max = 0;
    for (int i = 0; i < a.size(); i++){
        if (a[i].wrong > max){
            max = a[i].wrong;
        }
    }
    if (max == 0){
        cout << "Too simple\n";
    }
    else {
        cout << max;
        for (int i = 0; i < a.size(); i++) {
            if (a[i].wrong == max) {
                cout << " " << i + 1;
            }
        }
    }
    return 0;
}