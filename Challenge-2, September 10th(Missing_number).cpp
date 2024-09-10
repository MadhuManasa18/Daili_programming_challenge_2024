#include<bits/stdc++.h>
using namespace std;
int missing_number(vector<int> &vec, int n);

int main(){
    int n;
    cout<<"Enter number of elements"<<endl;
    cin>>n;
    vector<int> vec(n);
    cout<<"Enter elements"<<endl;
    for(int i =0; i<n; i++){
        cin>>vec[i];
    }
    int miss = missing_number(vec,n+1);
    cout<<"Missing number is: "<<miss<<endl;
    return 0;
}

int missing_number(vector<int> &vec, int n){
    int xor1=0,xor2=0;
    for(int i = 1; i<=n; i++){
        xor1 ^= i;
    }
    for(int j = 0; j<vec.size(); j++){
        xor2 ^= vec[j];
    }
    return xor1^xor2;
}
