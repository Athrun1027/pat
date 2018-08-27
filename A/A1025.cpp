#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

struct node{
  string r_number;
  int score, loc_number, loc_rank;
};

bool cmp(node a, node b){
  if (a.score != b.score){
    return a.score > b.score;
  }else{
    return a.r_number < b.r_number;
  }
}

int main(int argc, char** argv) {
  int N;
  cin>>N;
  vector<node> all_students;
  for (int i = 0; i < N; ++i){
    int M;
    cin>>M;
    vector<node> temp_students;
    for (int j = 0; j < M; ++j){
      node item_student;
      cin>>item_student.r_number>>item_student.score;\
      item_student.loc_number = i + 1;
      temp_students.push_back(item_student);
    }
    sort(temp_students.begin(), temp_students.end(), cmp);
    for (int j = 0; j < M; ++j){
      if (j != 0 && temp_students[j].score == temp_students[j-1].score){
        temp_students[j].loc_rank = temp_students[j-1].loc_rank;
      }else{
        temp_students[j].loc_rank = j + 1;
      }
      all_students.push_back(temp_students[j]);
    }
  }
  sort(all_students.begin(), all_students.end(), cmp);
  cout<<all_students.size()<<endl;
  int final_rank = 1;
  for (int i = 0; i < all_students.size(); ++i){
    if (i != 0 && all_students[i].score == all_students[i-1].score){
        final_rank = final_rank;
      }else{
        final_rank = i + 1;
      }
    cout<<all_students[i].r_number<<" "<<final_rank<<" "<<all_students[i].loc_number<<" "<<all_students[i].loc_rank<<endl;
  }
  return 0;
}