#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;

    while (cin >> n >> k) {
        int butt = n;
        int cig = n;
        while (butt >= k) {
            int new_cig = butt / k;
            cig += new_cig;
            butt = (butt / k) + (butt % k);
        }
        cout << cig << endl;
    }
    return 0;
}
