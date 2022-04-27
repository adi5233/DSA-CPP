#include <iostream>
using namespace std;

int main() {

    int row, n;
    cout<<"Enter the number: ";
    cin>>n;

    row = 1;
    int count = 1; 
    while(row <= n) {

        int space = n -row;
        while( space ) {
            cout << "  ";
            space--;
        }

        int num = row;;
        while( num ) {
            cout << count << " ";
            count++;
            num--;            
        }

        cout<<endl;
        row++;

    }

}