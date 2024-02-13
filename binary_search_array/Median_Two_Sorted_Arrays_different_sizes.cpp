

#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;

/*
double median(vector<int>& a, vector<int>& b) 
{
	int n=a.size();
	int m=b.size();
	int left=0;
	int right=0;
	 vector<int> c;
	while(left<n and right<m)
	{
		
		if(a[left]<b[right])
		{
			c.push_back(a[left]);

			left++;
		}
		else{
			c.push_back(b[right]);
			right++;
		}
	}
	while(left<n)
	{

                        c.push_back(a[left]);
                        left++;
                
        }
    while(right<m)
	{
		
			c.push_back(b[right]);
			right++;
		
	}		
       
	
    double media=0.0;
	int val=n+m;
//int odd=((val)/2);
			//cout<<odd<<" ";
	
        if (val % 2 == 0) 
		{
               // media = (double)(a[n - 1] + b[0]) / 2;
				   int z = (n+m) / 2;
					
        int e = c[z];
        int q = c[z - 1];
		//cout<<e<<" "<<q;
       media = (e + q) / 2.0;
        
				//cout<<media;
        }
		else 
		{
			
			int z =( (n+m) / 2);
       media= c[z];
        }
        //        cout<<"\n";
        return media;

}

*/

double median(vector<int>& a, vector<int>& b) {
    int n1 = a.size(), n2 = b.size();
    //if n1 is bigger swap the arrays:
    if (n1 > n2) return median(b, a);

    int n = n1 + n2; //total length
    int left = (n1 + n2 + 1) / 2; //length of left half
    //apply binary search:
    int low = 0, high = n1;
    while (low <= high) {
        int mid1 = (low + high) >> 1;
        int mid2 = left - mid1;
        //calculate l1, l2, r1 and r2;
        int l1 = INT_MIN, l2 = INT_MIN;
        int r1 = INT_MAX, r2 = INT_MAX;
        if (mid1 < n1) r1 = a[mid1];
        if (mid2 < n2) r2 = b[mid2];
        if (mid1 - 1 >= 0) l1 = a[mid1 - 1];
        if (mid2 - 1 >= 0) l2 = b[mid2 - 1];

        if (l1 <= r2 && l2 <= r1) {
            if (n % 2 == 1) return max(l1, l2);
            else return ((double)(max(l1, l2) + min(r1, r2))) / 2.0;
        }

        //eliminate the halves:
        else if (l1 > r2) high = mid1 - 1;
        else low = mid1 + 1;
    }
    return 0; //dummy statement
}


int main()
{
    vector<int> a = {1, 4, 7, 10, 12};
    vector<int> b = {2, 3, 6, 15};
    cout << "The median of two sorted array is " << median(a, b) << '\n';
}




























//m+n yeh odd =exact mid even =md1,mid2


