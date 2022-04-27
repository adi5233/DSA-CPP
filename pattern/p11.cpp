#include <iostream>
using namespace std;

int main() {

    int row, col, n;
    cout << "Enter the number: ";
    cin >> n;

    row = 1;
    while( row <= n) {

        int col = 1;
        while( col <= n) {

            char ch = 'A' + row + col - 2;
            cout << ch << ' ' ;            
            col++;

        }
        cout << endl;
        row++;

    }
    // while( row <= n) {

    //     char ch = ('A' + row -1);
    //     int col = 1;
    //     while( col <= n) {

    //         cout << ch << ' ' ;            
    //         ch = ch + 1;
    //         col++;

    //     }
    //     cout << endl;
    //     row++;

    // }

}