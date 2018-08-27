#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char** argv) {
    vector<string> lines[3];
    for (int i = 0; i < 3; ++i){
        string line;
        getline(cin, line);
        for (int j = 0; j < line.size(); ++j){
            if (line[j] == '['){
                string temp="";
                j++;
                while(line[j] != ']'){
                    temp += line[j];
                    j++;
                }
                lines[i].push_back(temp);
            }
        }
    }
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i){
        int ls, ly, z, ry, rs;
        cin>>ls>>ly>>z>>ry>>rs;
        ls--;
        ly--;
        z--;
        ry--;
        rs--;
        if (ls >= lines[0].size() ||  ly >= lines[1].size() || z >= lines[2].size() || ry >= lines[1].size() || rs >= lines[0].size()){
            cout<<"Are you kidding me? @\\/@\n";
        }else {
            cout<<lines[0][ls]<<"("<<lines[1][ly]<<lines[2][z]<<lines[1][ry]<<")"<<lines[0][rs]<<endl;
        }
    }
    return 0;
}