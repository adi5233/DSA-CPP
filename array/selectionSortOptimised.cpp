
#include <iostream>
using namespace std;

void selectionSort(int arr[], int n);
int main()
{
    int arr[50], n, i;
    
    cout<<"Enter the Size (max. 50): ";
    cin>>n;
    
    cout<<"Enter "<<n<<" Numbers: ";
    for(i=0; i<n; i++)
        cin>>arr[i];
        
    cout<<"\nSorting the Array using Bubble Sort Technique..\n";
    
    selectionSort(arr, n);
        
    cout <<"\nSorted array is: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

void selectionSort(int arr[], int n){
     
    
    for (int i=0; i<n-1; i++)
    {
      int min_ind = i;
      for (int j= i+1; j < n; j++)
      {
        if( arr[j] < arr[min_ind])
        {
           min_ind = j;
           swap(arr[i], arr[min_ind]);
        }
      }
    }

}    

