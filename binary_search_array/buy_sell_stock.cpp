#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int bestTimeToBuyAndSellStock(vector<int>&prices) {
    int n=prices.size();
    int buy=99999;
    int sell=0;
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(buy>prices[i])
        {
            buy=prices[i];
        }
        else
        {
            sell=max(sell,-buy+prices[i]);
           // j++;
        }
    }

    return sell;
}

int main() 
{
    int n;
    vector<int> a = {1,2,3,1,1,1,1};
    /*int n;
    cout<<"Enter sum:";
    cin>>n;*/
   
    int number =  bestTimeToBuyAndSellStock(a);
    cout<<"\n";
    cout<<number;
    return 0;
}

