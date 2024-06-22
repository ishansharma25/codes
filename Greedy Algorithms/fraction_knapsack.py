class Item:
    def __init__(self,val,w):
        self.value = val
        self.weight = w
        
class Solution:    
    # Function to get the maximum total value in the knapsack.
    def fractionalknapsack(self, w, arr, n):
        
        def compare(item):
            return item.value / item.weight
            
            
        arr.sort(key=compare,reverse=True)
        max_val=0

    
        for i in arr:
            if(w>=i.weight):
                w-=i.weight
                max_val+=i.value
            else:
                max_val+=i.value*(w/i.weight)
                break
        return max_val
    '''

#include <iostream>
#include <vector>
#include <algorithm>

class Item {
public:
    int value, weight;
    Item(int v, int w) : value(v), weight(w) {}
};

class Solution {
public:
    // Comparison function to sort items by value-to-weight ratio
    static bool comp(Item a, Item b) {
        double r1 = (double)a.value / (double)a.weight;
        double r2 = (double)b.value / (double)b.weight;
        return r1 > r2;
    }

    // Function to get the maximum total value in the knapsack
    double fractionalknapsack(int W, std::vector<Item>& arr) {
        // Sort items by value-to-weight ratio in descending order
        std::sort(arr.begin(), arr.end(), comp);

        double max_val = 0.0;
        for (Item& item : arr) {
            if (W >= item.weight) {
                // If the item can be fully taken, take it
                W -= item.weight;
                max_val += item.value;
            } else {
                // If the item can't be fully taken, take the fractional part
                max_val += item.value * ((double)W / (double)item.weight);
                break;
            }
        }

        return max_val;
    }
};

int main() {
    std::vector<Item> items = {Item(60, 10), Item(100, 20), Item(120, 30)};
    int W = 50;

    Solution solution;
    double result = solution.fractionalknapsack(W, items);
    std::cout << "Maximum value in Knapsack = " << result << std::endl;

    return 0;
}


    
  '''
