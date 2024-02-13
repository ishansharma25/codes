#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
void merge(int arr[],int l,int r,int mid)
{
    int n=r-l+1;

    int temp[n];
   int right=mid+1;
   int left=l;
   int j=0;
    while(left<=mid&&right<=r)
    {
        if(arr[left]<=arr[right])
        {
            temp[j] = arr[left];
            left++;
            j++;
        }
        else
        {
              temp[j] = arr[right];
            right++;
             j++;
           

        }
        
        
    }
    while(left<=mid)
    {
        temp[j] = arr[left];
            left++;
            j++;
    }
       while(right<=r)
    {
        temp[j] = arr[right];
        right++;
        j++;
    }
    for(int i=l;i<=r;i++)
    {
         arr[i] = temp[i - l];
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {  // Corrected base case condition
        int mid = l + (r - l) / 2;  // Avoid potential overflow
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, r, mid);
    }
}
int main()
{
    
    
    
    int n;
    cout<<"Enter size:";
    cin>>n;
    int arr[n];
     for (int i = 0; i < n; i++) {
        cout <<"Enter element:";
        cin>>arr[i];
    }
    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    mergeSort(arr, 0, n - 1);
    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    return 0 ;
}

