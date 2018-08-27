#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <stack>

using namespace std;

int main(int argc, char** argv) {
  string zero12[13] = {"tret", "jan", "feb", "mar", "apr",
  "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
  string one12[13] = {"xxx", "tam", "hel", "maa", "huh",
  "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
  map<string, int> rzero12 = {
    {"tret", 0 }, {"jan", 1 }, {"feb", 2 },
    {"mar", 3 }, {"apr", 4 }, {"may", 5 },
    {"jun", 6 }, {"jly", 7 }, {"aug", 8 },
    {"sep", 9 }, {"oct", 10 }, {"nov", 11 }, {"dec", 12 }
  };
  map<string, int> rone12 = {
    {"xxx", 0 }, {"tam", 1 }, {"hel", 2 },
    {"maa", 3 }, {"huh", 4 }, {"tou", 5 },
    {"kes", 6 }, {"hei", 7 }, {"elo", 8 },
    {"syy", 9 }, {"lok", 10 }, {"mer", 11 }, {"jou", 12 }
  };
  int n;
  cin>>n;
  getchar();
  for(int i=0;i<n;i++){
    string temp;

    getline(cin, temp);
    if (temp[0] >= '0' && temp[0] <= '9'){
      int num = stoi(temp);
      if(num < 13){
        cout<<zero12[num]<<endl;
      }else{
        if (num % 13 == 0){
          cout<<one12[num / 13]<<endl;
        }else{
          cout<<one12[num / 13]<<" "<<zero12[num % 13]<<endl;
        }
      }
    }else if (temp[0] >= 'a' && temp[0] <= 'z'){
      vector<string> strs;
      string str="";
      for (int i = 0; i < temp.size(); ++i){
        if (temp[i] == ' '){
          strs.push_back(str);
          str = "";
        }else if(i == temp.size() -1){
          str += temp[i];
          strs.push_back(str);
        }else{
          str += temp[i];
        }
      }
      if (strs.size() == 2){
        cout<<rone12[strs[0]]*13+rzero12[strs[1]]<<endl;
      }else{
        if (rone12[strs[0]] != 0){
          cout<<rone12[strs[0]]*13<<endl;
        }else{
          cout<<rzero12[strs[0]]<<endl;
        }
      }
    }
  }
  return 0;
}