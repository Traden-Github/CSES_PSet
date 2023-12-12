#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t;
    cin >> t;
    for (ll i = 0; i < t; ++i) {
        ll a, b;
        cin >> a >> b;
        if (((a + b) % 3 == 0) && max(a, b) <= 2 * min(a, b)) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}