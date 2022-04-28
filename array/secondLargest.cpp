#include <iostream>

using namespace std;

int largest(int arr[], int n) 
{
    int largest= arr[0];
    for(int i=1; i<n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}
void secondLargest(int arr[], int n) 
{
    int x = largest(arr, n);
    int secondLargest = arr[0];
    for(int i=1; i<n; i++) {
      if(arr[i] != x) 
      {
         if(arr[i] > secondLargest) 
            {
               secondLargest = arr[i];
            }  
      }
       
    }
    cout << secondLargest;
}

int main()
{
    int arr[100], i, n, low, high, x;
    cout << "Enter the number of array element to be inserted: ";
    cin >> n;
    for(int i=0; i<n; i++ ) {
          cin >> arr[i];
    }
    secondLargest(arr, n);
    return 0;
}

