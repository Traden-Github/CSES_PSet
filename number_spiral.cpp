#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t;
    cin >> t;
    ll row[t];
    ll col[t];
    for (ll i = 0; i < t; ++i) {
        cin >> row[i] >> col[i];
    }
    for (ll j = 0; j < t; j++) { 
        ll sqr = max(row[j],col[j]);
        if (sqr % 2 == 0) {
            cout << sqr * sqr - (sqr - row[j]) - (col[j] - 1);
        }
        else {
            cout << sqr * sqr - (sqr - col[j]) - (row[j] - 1);
        }
        if (j != t - 1) {
            cout << '\n';
        }
    }
}