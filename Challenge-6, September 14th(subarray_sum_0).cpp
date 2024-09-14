#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<pair<int, int>> findZeroSumSubarrays(const vector<int>& arr) {
    vector<pair<int, int>> result;
    unordered_map<int, vector<int>> sumMap;
    int sum = 0;

    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];

        if (sum == 0) {
            result.push_back({0, i});
        }

        if (sumMap.find(sum) != sumMap.end()) {
            for (auto it : sumMap[sum]) {
                result.push_back({it + 1, i});
            }
        }

        sumMap[sum].push_back(i);
    }

    return result;
}

int main() {
    int n;
    vector<int> arr;

    cout << "Enter the number of elements in the array:"<<endl;
    cin >> n;

    cout << "Enter the elements of the array:"<<endl;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    vector<pair<int, int>> subarrays = findZeroSumSubarrays(arr);
    cout<<"[ ";
    if (!subarrays.empty()) {
        for (auto &p : subarrays) {
            cout << "(" << p.first << ", " << p.second << ")"<<" ";
        }
    }
    cout<<"]";
    return 0;
}

