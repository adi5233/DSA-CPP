#include <iostream>
using namespace std;

const int CHAR = 256;
int leftRep(string str);
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

    int FIndex[CHAR];
    fill(FIndex, FIndex + CHAR, -1);

    int res = -1;
    
    for( int i = 0; i < str.length(); i++ ) {

        int FI = FIndex[str[i]];
        if( FI == -1 )
            FIndex[str[i]] = i;
        else
            res = min(FIndex[str[i]], i); 
    }
    
    return res;
   
}    

