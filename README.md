# pat
Only one month left, hope to catch up

``` c++
unordered_map<string, double> mp;
```
* kind of map unordered

``` c++
double b=0.5;
cout<<(int)b<<endl;
```
* double to int

``` c++
transform(num.begin(), num.end(), num.begin(), ::tolower);
transform(num.begin(), num.end(), num.begin(), ::toupper);
```
* string tolower or toupper

find the same num:
using list[1000] = {0}
when touched set the list[index] = 1
judge the list:[index] is 1 or 0

judge the prime:
``` c++
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
```


``` c++
list //链表
```