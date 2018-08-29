#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

struct node{
  string name;
  int month, day, hour, minite, type, times;
};

bool cmp(node a, node b){
  if(a.name != b.name){
    return a.name > b.name;
  }else if(a.month != b.month){
    return a.month > b.month;
  }else if(a.day != b.day){
    return a.day > b.day;
  }else if(a.hour != b.hour){
    return a.hour > b.hour;
  }else if(a.minite != b.minite){
    return a.minite > b.minite;
  }else{
    return a.type > b.type;
  }
}

vector<int> records(25, 0);

double count_money(node a) {
  double sum = records[a.hour] * a.minite + records[24] *60 * a.day;
  for (int i = 0; i < a.hour; i++)
    sum += records[i] * 60;
  return sum / 100.0;
}

int main(){
  for(int i = 0; i < 24; i++){
    cin>>records[i];
    records[24] += records[i];
  }
  int n;
  cin>>n;
  vector<node> user_records(n);
  for(int i = 0; i < n; i++){
    string name, times, type;
    cin>>name>>times>>type;
    node temp;
    temp.name = name;
    string dash="";
    for(int j = 0; j < 11; j++){
      if(j == 2){
        temp.month = stoi(dash);
        dash = "";
      }else if(j == 5){
        temp.day = stoi(dash);
        dash = "";
      }else if(j == 8){
        temp.hour = stoi(dash);
        dash = "";
      }else{
        dash += times[j];
      }
    }
    temp.minite = stoi(dash);
    if( type == "on-line"){
      temp.type = 1;
    }else{
      temp.type = 0;
    }
    temp.times = temp.day * 24 * 60 + temp.hour * 60 + temp.minite;
    user_records[i] = temp;
  }
  sort(user_records.begin(), user_records.end(), cmp);
  map<string, vector<node> > user_cost;
  for(int i = 1; i < n; i++){
    if(user_records[i].name == user_records[i-1].name && user_records[i].type == 1 && user_records[i-1].type == 0) {
      user_cost[user_records[i-1].name].push_back(user_records[i-1]);
      user_cost[user_records[i].name].push_back(user_records[i]);
    }
  }
  for(auto it : user_cost){
    vector<node> temp = it.second;
    printf("%s %02d\n", it.first.c_str(), temp[0].month);
    double sum_all = 0.0;
    for (int i = temp.size() - 1; i >= 0; i -= 2) {
      double sum = count_money(temp[i-1]) - count_money(temp[i]);
      printf("%02d:%02d:%02d %02d:%02d:%02d %d $%.2f\n",
        temp[i].day, temp[i].hour, temp[i].minite,
        temp[i-1].day, temp[i-1].hour, temp[i-1].minite,
        temp[i-1].times - temp[i].times, sum);
      sum_all += sum;
    }
    printf("Total amount: $%.2f\n", sum_all);
  }
  return 0;
}