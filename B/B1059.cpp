#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <math.h>
using namespace std;

bool is_prime(int num) {
    if (num == 2 || num == 3) {
        return true;
    }
    if (num % 6 != 1 && num % 6 != 5)
        return false;
    for (int i = 5; i <= int(sqrt(num)); i += 6)
        if (num%i == 0 || num % (i + 2) == 0)
            return false;
    return true;
}

int main() {
    int N;
    cin >> N;
    map<string, int> rank;
    for (int i = 0; i < N; i++){
        string Id;
        cin >> Id;
        rank[Id] = i + 1;
    }
    int M;
    cin >> M;
    map<string, int> got;
    for (int i = 0; i < M; i++) {
        string input;
        cin >> input;
        if (rank[input] == 0) {
            cout << input << ": " << "Are you kidding?\n";
            continue;
        }
        if (got[input] == 1) {
            cout << input << ": " << "Checked\n";
            continue;
        }
        got[input] = 1;
        if (rank[input] == 1) {
            cout << input << ": " << "Mystery Award\n";
        }
        else if (is_prime(rank[input])) {
            cout << input << ": " << "Minion\n";
        }
        else {
            cout << input << ": " << "Chocolate\n";
        }
    }
    system("pause");
    return 0;
}