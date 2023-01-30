#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 //Function to sort the array into a wave-like array.
    void convertToWave(int n, int arr[]){
        
        // Your code here
        sort(arr,arr+n);
        for(int i=0;i<n-1;i+=2){
            swap(arr[i],arr[i+1]);
        }
        
    }
int main(){
	int a[5]= {1,2,3,4,5};
	convertToWave(5,a);
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
}

