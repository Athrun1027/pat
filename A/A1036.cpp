#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct node{
  string name;
  int in, out;
};

int main(){
  int n;
  cin>>n;
  int fmax = -1, mmin = 1e9;
  string f_name="", m_name="";
  string f_id="", m_id="";
  for(int i = 0; i < n; i++){
    string name, gender, id;
    int grade;
    cin>>name>>gender>>id>>grade;
    if(gender == "M"){
      if(grade < mmin){
        mmin = grade;
        m_name = name;
        m_id = id;
      }
    }else if(gender == "F"){
      if(grade > fmax){
        fmax = grade;
        f_name = name;
        f_id = id;
      }
    }
  }
  if(fmax == -1){
    cout<<"Absent"<<endl;
  }else{
    cout<<f_name<<" "<<f_id<<endl;
  }
  if(mmin == 1e9){
    cout<<"Absent"<<endl;
  }else{
    cout<<m_name<<" "<<m_id<<endl;
  }
  if(fmax == -1 || mmin == 1e9){
    cout<<"NA"<<endl;
  }else{
    cout<<(fmax - mmin)<<endl;
  }
  return 0;
}