#include <iostream>
using namespace std;

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
    
   for( int i = 0; i < str.length(); i++) {
       bool flag = true;
       for( int j = 0; j < str.length(); j++ ) {
          if(i != j && str[i] == str[j])
          flag = false;
          break;
       }
       if(flag == true)
        return i;
   }
   return -1;
    
}    
