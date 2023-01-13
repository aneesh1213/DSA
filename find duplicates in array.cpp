#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
    vector<int> duplicates(int arr[], int n) {
        // code here
        vector<int> v;
        int x=-1;
        sort(arr,arr+n);
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1] && (arr[i]-x!=0)){
                v.push_back(arr[i]);
                x=arr[i];
            }
        }
        if(v.size()==0){
            v.push_back(-1);
        }
       return v;
    }
int main(){
	int a[5]={2,3,1,2,3};
	duplicates(a,5);
	return v;
}

