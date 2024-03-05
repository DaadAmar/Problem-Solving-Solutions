#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int C, K;
        cin >> C >> K;

        string seats;
        cin >> seats;

        bool found = false;
        int consecutiveEmptySeats = 0;

        for (int i = 0; i < C; i++) {
            if (seats[i] == '0') {
                consecutiveEmptySeats++;
                if (consecutiveEmptySeats == K + 1) {
                    found = true;
                    break;
                }
            } else {
                consecutiveEmptySeats = 0;
            }
        }

        if (found) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}
