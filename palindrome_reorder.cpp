#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    string s;
    cin >> s;
    ll count = 0;
    ll letters[26] = {0};
    for (char c: s) {
        count++;
        letters[c - 'A']++;
    }
    char ordered[count];
    if (count % 2) {
        ll mid_c = 0;
        for (int i = 0; i < 26; ++i) {
            if (letters[i] % 2) {
                mid_c++;
            }
        }
        if (mid_c != 1) {
            cout << "NO SOLUTION\n";
            return 0;
        }
        ll index = 0;
        for (char d: s) {
            if (letters[d - 'A'] % 2 == 0 && letters[d - 'A'] != 0) {
                for (ll i = 0; i < letters[d - 'A'] / 2; ++i) {
                    ordered[index] = ordered[count - index - 1] = d;
                    index++;
                }
                letters[d - 'A'] = 0;
            }
            else if (letters[d - 'A'] % 2 == 1) {
                ordered[count / 2] = d;
                for (ll j = 1; j <= (letters[d - 'A'] - 1) / 2; j++) {
                    ordered[count / 2 - j] = ordered[count / 2 + j] = d;
                }
            }
        }
    }
    else {
        ll index = 0;
        for (int i = 0; i < 26; i++) {
            if (letters[i] % 2 == 1) {
                cout << "NO SOLUTION\n";
                return 0;
            }
        }
        for (char d: s) {
            for (ll i = 0; i < letters[d - 'A'] / 2; ++i) {
                ordered[index] = ordered[count - index - 1] = d;
                index++;
            }
            letters[d - 'A'] = 0;
        }
    }
    for (ll k = 0; k < count; k++) {
        cout << ordered[k];
    }
    cout << '\n';
}