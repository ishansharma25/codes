



#include <climits>
int countSmallerThanMid(vector<vector<int>>&row, int mid,int i)
{
     int low = 0;
     int count=0;
     int high= row[i].size() - 1;
     while(low<=high)
     {
         int md=low+(high-low)/2;
        if(row[i][md]<=mid)
         {
            
           low=md+1;
        } else {
           high = md - 1;
        }
        
     }
     return low;
}
int median(vector<vector<int>> &a,int m, int n) 
{
    int min_val = INT_MAX; 
    int max_val = INT_MIN;
   // int n=a.size();
    //int m=a[0].size();
    for (int i = 0; i < m; i++) 
    {
       
            if (a[i][0] < min_val) 
            {
                min_val = a[i][0];
            }
            if (a[i][n-1] > max_val) 
            {
                max_val = a[i][n-1]; 
            }
        
    }

int low=min_val;
int high=max_val;
while(low<=high)
{
    int mid=low+(high-low)/2;
    int count=0;
    for (int i = 0; i < m; i++) 
    {
        count+=countSmallerThanMid(a,mid,i);
    }
    if(count<=(int)((n*m)/2))
    {
        low=mid+1;
    }
    else
    {
        high=mid-1;
    }
}
return low;
}

/*int median(vector<vector<int>> &matrix, int m, int n) {
    int index = 0;
    vector<int> med(m * n);

    // Flatten the matrix into a 1D vector
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            med[index] = matrix[i][j];
            index++;
        }
    }

    // Sort the vector
    sort(med.begin(), med.end());

    // Find median
    return med[(m * n) / 2];
}*/


int main()
{
  int row = 3, col = 3;
  int arr[3][3] = {{1, 3, 8},
                   {2, 3, 4},
                   {1, 2, 5}};
  cout <<"The median of the row-wise sorted matrix is: "<<Findmedian
  (arr, row, col) << endl;
  return 0;
}
