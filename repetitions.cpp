#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    string s;
    cin >> s;
    ll best = 1, count = 0;
    char c = 'A';
    for (char d : s) {
        if (c==d) {
            count++;
            best = max(best,count);
        }
        else {
            c = d;
            count = 1;
        }
    }
    cout << best << '\n';
}