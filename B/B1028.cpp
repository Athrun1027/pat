#include <bits/stdc++.h>
using namespace std;

struct node{
    string name;
    int year, month, day;
};

bool cmp(node a, node b){
    if(a.year != b.year){
        return a.year < b.year;
    }else{
        if(a.month != b.month){
            return a.month < b.month;
        }else{
            if(a.day != b.day){
                return a.day < b.day;
            }
        }
    }
}


int main(){
    int n;
    scanf("%d", &n);
    vector<node> people;
    for (int i = 0; i < n; ++i){
        node person;
        cin>>person.name;
        scanf("%d/%d/%d", &person.year, &person.month, &person.day);
        if(person.year > 2014){
            continue;
        }else if(person.year == 2014){
            if (person.month > 9){
                continue;
            }else if(person.month == 9){
                if (person.day > 6){
                    continue;
                }
            }
        }else if(person.year < 1814){
            continue;
        }else if(person.year == 1814){
            if (person.month < 9){
                continue;
            }else if(person.month == 9){
                if (person.day < 6){
                    continue;
                }
            }
        }
        people.push_back(person);
    }
    printf("%d", people.size());
    sort(people.begin(), people.end(), cmp);
    for (int i = 0; i < people.size(); ++i){
        if(i == 0 || i == (people.size()-1)){
            printf(" %s", people[i].name.c_str());
        }
    }
    if (people.size() == 1){
        printf(" %s", people[0].name.c_str());
    }
    printf("\n");
    return 0;
}
