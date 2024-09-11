#include <iostream>
#include <vector>

using namespace std;

int find_Duplicate(const vector<int>& arr) {
    int i = arr[0];
    int j = arr[0];

    do {
        i = arr[i];
        j = arr[arr[j]];
    } while (i != j);

    i = arr[0];
    while (i != j) {
        i = arr[i];
        j = arr[j];
    }

    return j;
}

int main() {
    cout<<"Enter the number of elements:"<<endl;
    int n;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements"<<endl;
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    int duplicate = find_Duplicate(arr);
    cout << "The duplicate number is: " << duplicate << endl;

    return 0;
}

