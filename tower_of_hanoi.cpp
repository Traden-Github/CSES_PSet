#include <bits/stdc++.h>
using namespace std;

#define ll long long

void hanoi(int n, int from, int to, int with) {
    if(n == 0) {
        return;
    }
    hanoi(n - 1, from, with, to);
    cout << from << " " << to << endl;
    hanoi(n - 1, with, to, from);
}

void solve() {
    int n;
    cin >> n;
    cout << pow(2, n) - 1 << endl;

    hanoi(n, 1, 3, 2);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int test = 1;
    // cin >> test;
    for (int t = 1; t <= test; ++t) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}