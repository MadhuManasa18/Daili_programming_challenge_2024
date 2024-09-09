#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cout << "Enter number of elements" << endl;
    cin>>n;
    vector<int> arr(n);
    if(n==0){
        cout<<"sorted array: "<<"[]";
        return 0;

    }
    cout<<"Enter elements of array consisting only zeroes, ones and twos"<<endl;
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    int low = 0;
    int mid = 0;
    int high = n-1;
    while(mid<=high){
        if(arr[mid] == 0){
            swap(arr[low++], arr[mid++]);
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else if(arr[mid] == 2){
            swap(arr[mid], arr[high--]);
        }
    }
    cout<<"Sorted array: ";
    cout<<"[ ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
    return 0;
}
