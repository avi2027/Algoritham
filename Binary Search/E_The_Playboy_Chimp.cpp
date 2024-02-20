#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> ladyChimps(n);
    for (int i = 0; i < n; ++i) {
        cin >> ladyChimps[i];
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; ++i) {
        int luchuHeight;
        cin >> luchuHeight;

        // Binary search for the tallest lady chimp shorter than Luchu
        int lo = 0, hi = n - 1, tallestShorter = -1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (ladyChimps[mid] < luchuHeight) {
                tallestShorter = ladyChimps[mid];
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }

        // Binary search for the shortest lady chimp taller than Luchu
        lo = 0, hi = n - 1;
        int shortestTaller = -1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (ladyChimps[mid] > luchuHeight) {
                shortestTaller = ladyChimps[mid];
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }

        // Output the results
        if (tallestShorter != -1) {
            cout << tallestShorter << " ";
        } else {
            cout << "X ";
        }

        if (shortestTaller != -1) {
            cout << shortestTaller << endl;
        } else {
            cout << "X" << endl;
        }
    }

    return 0;
}