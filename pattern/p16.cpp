#include <iostream>
using namespace std;

int main() {

    int row, n;
    cout<<"Enter the number: ";
    cin>>n;

    row = 1;
    while(row <= n) {

        int space = row -1;
        while( space ) {
            cout << " ";
            space--;
        }

        int num = row;;
        int x = n - row + 1; 
        while( x ) {
            cout << num;
            num++;
            x--;
            
        }

        cout<<endl;
        row++;

    }
}