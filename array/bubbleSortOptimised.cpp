#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n);
int main()
{
    int arr[50], n, i;
    
    cout<<"Enter the Size (max. 50): ";
    cin>>n;
    
    cout<<"Enter "<<n<<" Numbers: ";
    for(i=0; i<n; i++)
        cin>>arr[i];
        
    cout<<"\nSorting the Array using Bubble Sort Technique..\n";
    
    bubbleSort(arr, n);
        
    cout <<"\nSorted array is: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
        
    return 0;
}

void bubbleSort(int arr[], int n){

    bool swaped;
    
    for (int i=0; i<n-1; i++)
    {
      swaped = false;
      for (int j=0; j<n-i-1; j++)
      {
         if( arr[j] > arr[j+1])
            swap(arr[j], arr[j+1]);
      }
      if(swaped = false)
      break;
    }
}    

