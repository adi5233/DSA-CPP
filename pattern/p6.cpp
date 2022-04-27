#include <iostream>
using namespace std;

int main() {

    int count, row, col, n;
    cout << "Enter the number: ";
    cin >> n;

    row = 1;
    count = 1;
    while( row <= n) {

        int col = 1;
        while( col <= row) {

            cout <<  count << " ";
            count = count + 1;
            col++;

        }
        cout << endl;
        row++;

    }

}