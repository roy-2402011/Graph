#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    int left = 0, right = n - 1;
    int maxH = INT_MIN;
    int ansLeft = 0, ansRight = 1;

    while(left < right) {
        int h = min(arr[left], arr[right]);

        if(h > maxH) {
            maxH = h;
            ansLeft = left;
            ansRight = right;
        }

        if(arr[left] < arr[right]) left++;
        else right--;
    }

    cout << ansLeft << " " << ansRight << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}