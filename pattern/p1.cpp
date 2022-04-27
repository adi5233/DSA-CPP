#include <iostream>
using namespace std;

int main() {

    int n, i;
    cout << "Enter the number: ";
    cin >> n;

    i = 1;
    while( i <= n) {

        int j = 1;
        while( j <= n) {

            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;

    }

}