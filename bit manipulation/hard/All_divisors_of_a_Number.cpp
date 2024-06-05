class Solution {
  public:
    void print_divisors(int N) {
        vector<int> d;
        for (int i = 1; i * i <= N; ++i) {
            if (N % i == 0) {
                d.push_back(i);
                if (i != N / i) {
                    d.push_back(N / i);
                }
            }
 //  #to remove duplicate, at last, got 36 is 6 twice #n/i 
              //for 18,2 that is the reverse of 2,18 as both equal 36
          // i * i <= N use this instead of sqrt(N) because of less time complexity
        }
        sort(d.begin(), d.end());
        for (auto i : d) {
            std::cout << i << " ";
        }
    }
};
