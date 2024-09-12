#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the number of elements of 1st array: "<<endl;
    cin>>n;
    vector<int> arr1(n);
    cout<<"Enter elements of array1 in sorted manner"<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr1[i];
    }
    cout<<"Enter the number of elements of 2nd array: "<<endl;
    cin>>m;
    vector<int> arr2(m);
    cout<<"Enter elements of array2 in sorted manner"<<endl;
    for(int i = 0; i<m; i++){
        cin>>arr2[i];
    }
    int left = n-1;
    int right = 0;
    while((left>=0 && right<m) && arr1[left]>=arr2[right]){
        if(arr1[left]>=arr2[right]){
            swap(arr1[left], arr2[right]);
            left--,right++;
        }
    }
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    cout<<"array 1 and array 2"<<endl;
    for(int i = 0; i<n; i++){
        cout<<arr1[i]<<endl;
    }
    for(int i = 0; i<m; i++){
        cout<<arr2[i]<<endl;
    }
    return 0;

}
