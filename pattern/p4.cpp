#include <iostream>
using namespace std;

int main() {

    int n, i, count;
    cout << "Enter the number: ";
    cin >> n;

    i = 1;
    while( n >= 0) {

        int j = 1;
        while( j <= n ) {

            cout << " * ";
            j++;

        }
        cout << endl;
        n--;

    }

}