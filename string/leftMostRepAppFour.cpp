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

    bool visited[CHAR];

    fill(visited, visited + CHAR, false);

    int res = -1;
    
    for( int i = str.length() - 1; i >= 0; i-- ) {
        if(visited[str[i]])
            res = i;
        else
            visited[str[i]] = true;
    }
    
    return res;
   
}    

