#include <iostream>
using namespace std;
int main() {
    int i, cases, booksPerCase, shelves;
    cin >> cases;

    for (i = 0; i < cases; i++) {
        cin >> booksPerCase;

        if (booksPerCase % 5 == 0) {
            shelves = booksPerCase / 5;
            cout << shelves << endl;
        } else {
            shelves = (booksPerCase / 5) + 1;
            cout << shelves << endl;
        }
    }
    return 0;
}
