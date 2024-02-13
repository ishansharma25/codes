#include <iostream>
#include <vector>
using namespace std;

int merge(vector<int> &a,int low,int mid,int high)
{
  
    int left=low;
    int right=mid+1;
      int count=0;
 
         while (left <= mid && right <= high) {
        if (a[left] > 2 * a[right]) {
            count += mid - left + 1;
            right++;
        } else {
            left++;
        }
    }
     vector<int> ans;
    left=low;
     right=mid+1;
       
    while(left<=mid&&right<=high)
    {  
       
        if(a[left]<=a[right])
        {
            ans.push_back(a[left]);
            left++;
        }
        else
        {
              ans.push_back(a[right]);
            right++;
        }
      
    }
    while (left<=mid)
    {
        ans.push_back(a[left]);
            left++;
    }
    while (right<=high)
    {
       ans.push_back(a[right]);
            right++;
    }
    for(int i=low;i<=high;i++)
    {
        a[i]=ans[i-low];
   
    }
    return count;
}

int mergesort(vector<int> &a,int low,int high)
{
    int cont=0;
    if(low>=high)
    {
        return cont;
    }
  
       int mid=low+(high-low)/2;
       cont+=mergesort(a,low,mid);
       cont+=mergesort(a,mid+1,high);
       cont+=merge(a,low,mid,high);
    
    return cont;
}




int team(vector<int> &a, int n)
{

   return mergesort(a,0,n-1);
}

int main()
{
    vector<int> a = {4, 1, 2, 3, 1};
    int n = 5;
    int cnt = team(a, n);
    cout << "The number of reverse pair is: "
         << cnt << endl;
    return 0;
}
/*




int merge(std::vector<int>& skill, int s, int e, int mid) {
    int i = s;
    int j = mid + 1;
    int count = 0;

    while (i <= mid && j <= e) {
        if (skill[i] > 2 * skill[j]) {
            count += mid - i + 1;
            j++;
        } else {
            i++;
        }
    }

    std::vector<int> arr3;
    i = s;
    j = mid + 1;

    while (i <= mid && j <= e) {
        if (skill[i] <= skill[j]) {
            arr3.push_back(skill[i]);
            i++;
        } else {
            arr3.push_back(skill[j]);
            j++;
        }
    }

    while (i <= mid) {
        arr3.push_back(skill[i]);
        i++;
    }

    while (j <= e) {
        arr3.push_back(skill[j]);
        j++;
    }

    for (int i = s; i <= e; i++) {
        skill[i] = arr3[i - s];
    }

    return count;
}

int mergesort(std::vector<int>& skill, int s, int e) {
    int cnt = 0;

    if (s >= e) {
        return cnt;
    }

    int mid = (s + e) / 2;
    cnt += mergesort(skill, s, mid);
    cnt += mergesort(skill, mid + 1, e);
    cnt += merge(skill, s, e, mid);

    return cnt;
}

int team(std::vector<int>& skill, int n) {
    return mergesort(skill, 0, n - 1);
}

int main() {
    // Example usage
    std::vector<int> skills = {4, 1, 2, 3, 1};
    int result = team(skills, skills.size());
    std::cout << "Number of inversions: " << result << std::endl;

    return 0;
}*/
