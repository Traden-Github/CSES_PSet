#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n;
    cin >> n;

    if (n == 1) {
        cout << 1;
        return 0;
    }
    if (n < 4) {
        cout << "NO SOLUTION";
        return 0;
    }
    ll ar[n];
    if (n % 2 == 0) {
        cout << n / 2; 
        cout << " " << n;
        cout << " " << 1;
        cout << " " << n / 2 + 1;
        ll l = 2, r = n - 1;
        for (ll i = 4; i < n; i+=2, l++, r--) {
            cout << " " << l;
            cout << " " << r;
        }
    }
    else {
        cout << 1;
        cout << " " << n / 2 + 1;
        cout << " " << n;
        ll l = 2, r = n - 1;
        for (ll j = 3; j < n; j+=2, l++, r--) {
            cout << " " << l;
            cout << " " << r;
        }
    }
}