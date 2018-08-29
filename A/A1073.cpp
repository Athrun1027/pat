#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  string line, num="", ex="";
  cin>>line;
  char dash = line[0];
  if(dash == '-'){
    cout<<dash;
  }
  int flag=1, point;
  for(int i = 1; i < line.size(); i++){
    if(line[i] == 'E'){
      flag = 2;
    }else if(line[i] == '.'){
      point = i;
    }else if(flag == 1){
      num += line[i];
    }else if(flag == 2){
      ex += line[i];
    }
  }
  int num_e = stoi(ex);
  if(num_e < 0){
    cout<<"0.";
    for(int i = 1; i < abs(num_e); i++){
      cout<<0;
    }
    cout<<num;
  }else{
    cout<<num[0];
    num.erase(0,1);
    for (int i = 0; i < num.size(); ++i){
        if (i == num_e){
            cout<<".";
        }
        cout<<num[i];
    }
    if(num_e>num.size())
      for (int i = 0; i < num_e-num.size(); ++i){
          cout<<0;
      }
  }
  cout<<endl;
  return 0;
}