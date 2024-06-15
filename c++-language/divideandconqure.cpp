#include <iostream>
#include <vector>

using namespace std;



void

void divideAndConquer(vector<int>& array, int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;  
        divideAndConquer(array, low, mid);
        divideAndConquer(array, mid + 1, high);

        cout << "Subarray: " << low << " to " << high << endl;
    }
}

int main() {
    vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arraySize = array.size();

    divideAndConquer(array, 0, arraySize - 1);

    return 0;
}
