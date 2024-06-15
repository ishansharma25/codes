

#include<bits/stdc++.h>


using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    map<int, int> numberFrequency;

    for (int i = 0; i < n; ++i) {
        numberFrequency[arr[i]]++;
    }

    cout << "Number Frequencies:" << endl;
    for (const auto& pair : numberFrequency) {
        cout << pair.first << ": " << pair.second << " times" << endl;
    }

    cout<<"\n\n";
vector<int> a;
for(auto n1:numberFrequency)
{
    int first=n1.first;
    int second=n1.second;
    for(int i=0;i<second;i++)
    {
        a.push_back(first);
       
    }
}
    for(int i=0;i<n;i++)
    {
       
        cout<<a[i];

    }


    return 0;
}
