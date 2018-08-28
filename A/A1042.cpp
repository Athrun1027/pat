#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<int> cards(55, 0);

int main(int argc, char** argv) {
  int k;
  string order_string;
  vector<int> order_list;

  for(int i = 1; i < 55; i++){
    cards[i] = i;
  }
  order_list.push_back(0);

  cin>>k;
  getchar();
  getline(cin, order_string);
  string temp="";
  for(int i = 0; i < order_string.size(); i++){
    if(order_string[i] == ' ' && temp.size() != 0){
      order_list.push_back(stoi(temp));
      temp = "";
    }else{
      temp += order_string[i];
    }
    if(i == order_string.size()-1 && temp.size() != 0){
      order_list.push_back(stoi(temp));
    }
  }

  vector<int> cards_ans = cards;

  while(k--){
    vector<int> cards_temp = cards_ans;
    for(int i = 1; i < order_list.size(); i++){
      cards_ans[order_list[i]] = cards_temp[i];
    }
  }

  for(int i = 1; i < cards_ans.size(); i++){
    int card = cards_ans[i];
    if((card + 12) / 13 == 1){
      printf("S");
    }else if((card + 12) / 13 == 2){
      printf("H");
    }else if((card + 12) / 13 == 3){
      printf("C");
    }else if((card + 12) / 13 == 4){
      printf("D");
    }else if((card + 12) / 13 == 5){
      printf("J");
    }
    if(card % 13 == 0){
      printf("13");
    }else{
      printf("%d", card % 13);
    }
    if(i == cards_ans.size() - 1){
      printf("\n");
    }else{
      printf(" ");
    }
  }
  return 0;
}
