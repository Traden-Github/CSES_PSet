#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<string> get(int n) {
    vector<string> actual;
    if (n == 1) {
        actual.push_back("0");
        actual.push_back("1");
        return actual;
    }
    vector<string> previous = get(n - 1);
    for (int i = 0; i < (int)previous.size(); ++i) {
        actual.push_back("0" + previous[i]);
    }
    for (int j = (int)previous.size() - 1; j >= 0; --j) {
        actual.push_back("1" + previous[j]);
    }
    return actual; 
}

void solve() {
    int n;
    cin >> n;
    vector<string> answer;
    answer = get(n);
    for (string bitString: answer) {
        cout << bitString << endl;
    }
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