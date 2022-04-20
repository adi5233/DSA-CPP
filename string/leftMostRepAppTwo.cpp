#include <iostream>
using namespace std;

int leftRep(string str);
const int CHAR = 256;
int main() {

    string str;

    cout<< "\nLeft most reperting character\n";

    cout<< "Enter the String : ";
    cin>> str;
 
    int x = leftRep(str);
    cout<< x << endl;  

    return 0;
 
}

int leftRep(string str) {

    int count[ CHAR ]= {0};

    for( int i = 0; i < str.length(); i++)
        count[str[i]]++;

    for( int i = 0; i < str.length(); i++) {
        if(count[str[i]] > 0)
        return i;
    }
    return -1;
   
}    

