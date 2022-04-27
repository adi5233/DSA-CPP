#include <iostream>
using namespace std;

int main() {

    int row, col, n;
    cout << "Enter the number: ";
    cin >> n;

    row = 1;
    while(row <= n) {

        int col = 1;
        int space = row - 1;
        while( space ) {

            cout << ' ' ; 
            space--; 
                    
        }
        int star = n - row + 1;
        while( star ) {

            cout << row;
            star-- ;  

        }
        cout << endl;
        row++;

    }

}