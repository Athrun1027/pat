#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int num,step=0;
	cin>>num;
	while(num != 1){
		if(num & 1)
			num = (3*num + 1) / 2;
		else
			num /= 2;
		step++;
	}
	cout<<step<<endl;
	return 0;
}
