#include <iostream>
using namespace std;

int main() {
    int k, s, count = 0;
    cin >> k >> s;

    for (int x = 0; x <= k; x++) {
        for (int y = 0; y <= k; y++) {
            int z = s - x - y;
            if (z >= 0 && z <= k) {
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}