/*

int rrow(vector<vector<int>> &matrix, int n, int m,int i)
{
   int count=0;
  for (int j = 0; j < m; j++)
{
   if(matrix[i][j]==1)
   {
      count++;
   }
  }
  return count;
}

int rowWithMax1s(vector<vector<int>> &matrix, int n, int m) {
   int count_r;
   int mini=0;
   int ans=-1;
   for(int i=0;i<n;i++)
   {
         count_r=rrow(matrix,n,m,i);
         if(count_r>mini)
         {
            mini=count_r;
            ans=i;
         }
   }
   

   return ans;
}
*/


int rrow(vector<int> &matrix, int m) 
{
int low=0;
int high=m-1;
int ans1 = 0;

while(low<=high)
{
   int mid=low+(high-low)/2;
   if (matrix[mid] >= 1) 
  {
 
      ans1=mid;
     
      high = mid - 1;  
    }
 else  
   {
      
      low=mid+1;
   }
   

}

  return ans1;
 
}
int rowWithMax1s(vector<vector<int>> &matrix, int n, int m) {
   
   int mini=0;
   int ans=-1;
   
   for (int j = 0; j < n; j++) 
   {
    int count_r =rrow(matrix[j], m);
   //cout<<count_r;
   if (count_r > mini)
   {
      mini = count_r;
      ans = j;
   }
   }
  // cout<<"/n";
   return ans;
}

int main()
{
    vector<vector<int>> matrix = {{1, 1, 1}, {0, 0, 1}, {0, 0, 0}};
    int n = 3, m = 3;
    cout << "The row with maximum no. of 1's is: " <<
         rowWithMax1s(matrix, n, m) << '\n';
}

