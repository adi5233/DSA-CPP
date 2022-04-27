#include <iostream>
using namespace std;

int main() {

    int row, col, n;
    cout << "Enter the number: ";
    cin >> n;

    row = 1;
    while(row <= n) {

        int col = 1;
        char start = 'A' + n - row;
        while( col <= row) {

            cout << start << ' ' ;            
            start = start + 1;            
            col++;

        }
        cout << endl;
        row++;

    }

}