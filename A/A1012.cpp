#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

struct node{
  int name;
  int grade[4];
  int rank[4];
};

int flag;

bool cmp(node a, node b){
  if(a.grade[flag] != b.grade[flag]){
    return a.grade[flag] > b.grade[flag];
  }else{
    return a.name < b.name;
  }
}

int main(){
  int n, m;
  scanf("%d %d", &n, &m);
  map<string, int> hash;
  vector<node> students(n);
  for(int i = 0; i < n; i++){
    node temp;
    scanf("%d %d %d %d", &students[i].name, &students[i].grade[1], &students[i].grade[2], &students[i].grade[3]);
    hash[to_string(students[i].name)] = 1;
    students[i].grade[0] = (students[i].grade[1] + students[i].grade[2] + students[i].grade[3]) / 3.0 + 0.5;
  }
  for(int i = 0; i < 4; i++){
    flag = i;
    sort(students.begin(), students.end(), cmp);
    students[0].rank[i] = 1;
    hash[to_string(students[0].name)] = 1;
    for(int j = 1; j < n; j++){
      if(students[j].grade[i] == students[j-1].grade[i]){
        students[j].rank[i] = students[j-1].rank[i];
      }else{
        students[j].rank[i] = j + 1;
      }
      hash[to_string(students[j].name)] = j + 1;
    }
  }
  for(int i = 0; i < m; i++){
    int name;
    scanf("%d", &name);
    if(hash[to_string(name)] == 0){
      printf("N/A\n");
    }else{
      node temp = students[hash[to_string(name)] - 1];
      int minrank = 1e9;
      char mintype;
      if(temp.rank[0] <= temp.rank[1]){
        minrank = temp.rank[0];
        mintype = 'A';
      }else{
        minrank = temp.rank[1];
        mintype = 'C';
      }
      if(minrank > temp.rank[2]){
        minrank = temp.rank[2];
        mintype = 'M';
      }
      if(minrank > temp.rank[3]){
        minrank = temp.rank[3];
        mintype = 'E';
      }
      printf("%d %c\n", minrank, mintype);
    }
  }
  return 0;
}