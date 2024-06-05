
class Solution{
	public:
	bool isprime(int x)
	{
	    if(x<=1)
	    {
	        return false;
	    }
	    int c=0;
	    for (int i=2;i<x;i++)
	    {
	        if(x%i==0)
	        {
	            c++;
	        }
	    }
	    if(c==0)
	    {
	        return true;
	    }
	    else
	    {
	        return false;
	    }
	}
	vector<int>AllPrimeFactors(int N) {
	    vector<int> v;
	    for(int i=2;i<=N;i++)
	    {
	        if(N%i==0)
	        {
	            if(isprime(i))
	            {
	                v.push_back(i);
	            }
	        }
	    }
	    return v;
	    
	    // Code here
	}
};
