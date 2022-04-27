#include <iostream>
using namespace std;

int main() {

    int row, col, n;
    cout << "Enter the number: ";
    cin >> n;

    row = 1;
    while( row <= n) {

        int col = 1;
        while( col <= row) {

            cout <<  (row - col + 1)  << " ";
            
            col++;

        }
        cout << endl;
        row++;

    }
    // while( row <= n) {

    //     int col = 1;
    //     int value = row;
    //     while( col <= row) {

    //         cout <<  value  << " ";
    //         value = value - 1;
    //         col++;

    //     }
    //     cout << endl;
    //     row++;

    // }

}