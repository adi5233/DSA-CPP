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

            char ch = 'A' + row -1;
            cout << ch << ' ' ;            
            col++;

        }
        cout << endl;
        row++;

    }

}