#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*----------------------------------BURTE FORCE O(N)-----------------
class Solution
{
public:
int remove_dublicate(int a[],int n)
{
  
    int temp[n];
    int j=0;
   
    for(int i=0;i<n-1;i++)
    {
     
        if(a[i]!=a[i+1])
        {
            temp[j]=a[i];
           
            j++;
            
        }
    
    }
         temp[j]=a[n-1];
       j++;
    
    
    for (int i = 0; i < j; i++)
    {
        a[i]=temp[i];
    }
    return j;
    
}
};

int main()
{
	int arr[] = { 1, 2, 2, 3, 4, 4, 4, 5, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);

Solution s;
	n = s.remove_dublicate(arr,n);


	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

	return 0;
}
*/



/*----------------------------------BURTE FORCE O(N)-----------------
#include <iostream>
#include <unordered_map>
#include <vector>

class Solution {
public:
    vector<int> getFrequency(const vector<int>& nums) {
        unordered_map<int, int> frequency;
        vector<int> a;

        for (int i=0;i<nums.size();i++) {
            
            frequency[nums[i]]++;
        }
        for (const auto& pair : frequency) 
        {
            a.push_back(pair.first);
        }
       
        return a;
    }
};

int main() {
    vector<int> nums = {1, 2, 2, 3, 4, 4, 4, 5, 5};

    Solution s;
    vector<int> frequencyMap = s.getFrequency(nums);
      for (int i=0;i<frequencyMap.size();i++)
        {
            cout<<frequencyMap[i];
        }

  

    return 0;
}
*/

/*----------------------------------optimal approach O(N)-----------------*/


class Solution {
public:
    int  getFrequency( vector<int>& nums) {
        
        int n=nums.size();
        int j=0;
        int i;
        for(i=0;i<n;i++)
        {
            if(nums[i]!=nums[j])
            {
                nums[j+1]=nums[i];
                j++;
            }
        }
        return j+1;
    }
};

int main() {
    vector<int> nums = {1, 2, 2, 3, 4, 4, 4, 5, 5};

    Solution s;
    int  frequencyMap = s.getFrequency(nums);
      for (int i=0;i<frequencyMap;i++)
        {
            cout<<nums[i];
        }

  

    return 0;
}