#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    string c;
    cin>>c;
    getchar();
    string line, newline="";
    getline(cin, line);
    if(c == "C"){
        int same=1;
        char now = line[0];
        for(int i=1; i<line.size(); i++){
            if(now == line[i]){
                same++;
            }else{
                if(same != 1){
                    newline += to_string(same);
                }
                newline += now;
                now = line[i];
                same = 1;
            }
        }
        if(same != 1){
            newline += to_string(same);
        }
        newline += now;
        cout<<newline<<endl;
    }else {
        line += '*';
        int i=0;
        string same="";
        while(line[i] != '*'){
            if(line[i] >= '0' && line[i] <= '9'){
                same += line[i++];
                continue;
            }else{
                int times;
                if(same == ""){
                    times = 1;
                }else{
                    times = stoi(same);
                    same = "";
                }
                for(int j=0; j<times; j++){
                    cout<<line[i];
                }
                i++;
            }
        }
        cout<<endl;
    }
    return 0;
}