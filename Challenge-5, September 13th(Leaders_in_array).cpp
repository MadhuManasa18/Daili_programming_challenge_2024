#include<bits/stdc++.h>
using namespace std;

vector<int> find_leaders(vector<int> &vec, int n){
 vector<int> leaders;
 leaders.push_back(vec[n-1]);
 int maxi = vec[n-1];
 for(int i = n-2; i>=0;i--){
    if(vec[i]>maxi){
        leaders.push_back(vec[i]);
        maxi = vec[i];
    }
 }
 return leaders;
}

int main(){
    int n;
    cout<<"Enter the number of elements: "<<endl;
    cin>>n;
    vector<int> vec(n);
    cout<<"Enter the elements: "<<endl;
    for(int i = 0; i<n; i++){
        cin>>vec[i];
    }
    vector<int> leaders;
    leaders = find_leaders(vec,n);
    cout<<"Leaders of the array are: "<<endl;
    for(int i=leaders.size()-1; i>=0; i--){
        cout<<leaders[i]<<" ";
    }
    return 0;
}
