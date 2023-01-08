#include<iostream>
using namespace std;
    int binarysearch(int arr[], int n, int k) {
        int start=0,end=n-1;
        int mid;//=start+(end-start)/2;
        
        while(start<=end){
             mid=start+(end-start)/2;
            if(arr[mid]==k){
                return mid;
            }
            if(arr[mid]<k){
                start=mid+1;
            }
            else{
                end=mid-1;   
            }
            
        }
        return -1;
    }
int main(){
	int arr[5]={1,2,3,4,5};
	cout<<binarysearch(arr,5,3)<<endl;
}

