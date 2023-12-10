#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main() {
    ll moves = 0;
    ll hold = 0;
    ll cur;
    ll n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> cur;
        if (cur >= hold) {
            hold = cur;
        } 
        else {
            while (cur < hold) {
                ++moves;
                ++cur;
            }
            hold = cur;
        }
    }
    cout << moves;
}