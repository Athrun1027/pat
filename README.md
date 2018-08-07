# pat
Only one month left, hope to catch up

``` c++
#include <bits/stdc++.h>

using namespace std;

int main(){
  // 关闭同步后，会导致cin的输入不会缓存，实时输入
	ios::sync_with_stdio(false);
	...
	return 0;
}
```

``` c++
num & 1
```
datermine whether {num} is an odd number

``` c++
int sum = 999, num;
string str;
str = to_string(sum);
num = stoi(str);
```
* string to int
* int to string

``` c++
double b=0.5;
int a = int(b);
```
* double to int

``` c++
typedef unsigned intu;
```
* string's size is unsigned int
* so there are so many warning.

find the same num:
using list[1000] = {0}
when touched set the list[index] = 1
judge the list:[index] is 1 or 0

judge the prime:
bool is_prime(int num){
    if (num == 2 || num == 3){
       return true;
    }
    if(num%6!=1 && num%6!=5)
       return false;
    for(int i=5;i<=int(sqrt(num));i+=6)
       if(num%i==0||num%(i+2)==0)
           return false;
    return true;
}

Enter string with spaces:
string str;
getline(cin, str);