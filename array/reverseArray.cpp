#include <iostream>

using namespace std;

void reverse(int arr[], int n) {
    
    int low = 0;
    int high = n - 1;
    
    while( low < high ) {
        int x = arr[low];
        arr[low] = arr[high];
        arr[high] = x;
        low++;
        high--;
    }
    
    for (int i=0; i<n; i++ ) {
          cout << arr[i] << " ";
    }
}

int main()
{
    int arr[100], i, n, low, high, x;
    cout << "Enter the number of array element to be inserted: ";
    cin >> n;
    for(int i=0; i<n; i++ ) {
          cin >> arr[i];
    }
     
    reverse(arr, n);
    return 0;
}