#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; ++i) {
        ll a1 = i * i, a2 = a1 * (a1 - 1) / 2;
        if (n > 2) {
            a2 -= 4 * (i - 1)* (i - 2);
        }
        cout << a2 << '\n';
    }
}