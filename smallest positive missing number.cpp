#include<iostream>
#include<algorithm>
using namespace std;
  int missingNumber(int arr[], int n) 
    { 
        // Your code here
        sort(arr,arr+n);
        int num=1;
        for(int i=0;i<n;i++){
            if(arr[i]==num){
                num++;
            }
        }
        return num;
    } 
int main(){
	int a[5] = {0,-10,-20,1,3};
	cout<<missingNumber(a,5);
}

