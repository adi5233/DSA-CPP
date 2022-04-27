#include <iostream>
using namespace std;

int main() {

    int row, col, n;
    cout << "Enter the number: ";
    cin >> n;

    row = 1;
    while(row <= n) {

        int col = 1;
        int star = n - row;
        while( star ) {

            cout << " ";
            star-- ;  

        }

        int space = row;
        while( space ) {

            cout << row; 
            space--; 
                    
        }

        cout << endl;
        row++;

    }

}