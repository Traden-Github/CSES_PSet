#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main() {
    ll n;
    cin >> n;
    ll s = n * (n + 1) / 2;
    if (s % 2 == 1) {
        cout << "NO";
        return 0;
    }
    
    cout << "YES" << '\n';
    if (n % 2 == 0) {
        cout << n / 2 << '\n';
        for (ll i = 1; i <= n / 4; i++) {
            cout << i << " " << n - i + 1 << " ";
        }
        cout << '\n' << n / 2 << '\n';
        for (ll i = n / 4  + 1; i <= n / 2; i++) {
            cout << i << " " << n - i + 1 << " ";
        }
    }
    else {
        ll a = n / 2 + 1;
        ll l = 1, r = n;
        while (r - l > a) {
            ++l;
            --r;
        }
        cout << a << '\n';
        for (ll i = 1; i < l; i++) {
            cout << i << " " << n - i + 1 << " ";
        }
        cout << l << " " << a << '\n';
        cout << n - a << '\n';
        for (ll i = n / 2; i > l; i--) {
            cout << i << " " << n - i + 1 << " ";
        }
        cout << r;
    }
}
