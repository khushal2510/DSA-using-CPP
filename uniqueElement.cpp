#include<iostream>
#include<vector>
using namespace std;

int findElement(vector<int>arr){
    int ans = 0;
    for(int i=0;i<arr.size();i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the size of Array: "<<endl;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }

    int uniqueElement = findElement(arr);
    cout<<uniqueElement<<endl;


    return 0;
}