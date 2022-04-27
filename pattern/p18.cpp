#include <iostream>
using namespace std;

int main() {

    int row, n;
    cout<<"Enter the number: ";
    cin>>n;

    row = 1;
   
    while(row <= n) {

        int space1 = n -row;
        while( space1 ) {
            cout << "  ";
            space1--;
        }

        int num = row;
        int count = 1; 
        while( num ) {
            cout << count << " ";
            count++;
            num--;            
        }

        int num2 = row - 1;
        while( num2 ) {
            cout << num2 << " ";
            num2--;            
        }

        int space2 = n -row + 1;
        while( space2 ) {
            cout << "  ";
            space2--;
        }

        cout<<endl;
        row++;

    }

}