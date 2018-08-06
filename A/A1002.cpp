#include <bits/stdc++.h>

using namespace std;

typedef unsigned intu;

int main(){
	ios::sync_with_stdio(false);
	string num, words[]={"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
	cin>>num;
	int sum=0;
	for(intu i=0; i<num.size(); i++){
		sum += num[i] - '0';
	}
	num = to_string(sum);
	for(intu i=0; i<num.size(); i++){
		if(i == num.size()-1) 
			cout<<words[num[i]-'0']<<endl;
		else
			cout<<words[num[i]-'0']<<" ";
	}
	return 0;
}