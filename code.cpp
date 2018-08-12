#include <bits/stdc++.h>
#include <time.h>
using namespace std;


int main(){
	ios::sync_with_stdio(false);

	time_t a, b;
	clock_t start,end;
	a = time(NULL);
	start = clock();
	int n=10000000;
	while(n--){
		cout<<" $_$ ";
	}
	b = time(NULL);
	end = clock();
	cout<<endl<<"1970-01-01 到现在的小时数 = "<<time(NULL)/3600<<endl;
	cout<<"刚才的函数执行时间 = "<<b-a<<endl;
	cout<<"刚才的函数执行时间 = "<<(end-start)*1.0/CLOCKS_PER_SEC<<endl;
	return 0;
}
