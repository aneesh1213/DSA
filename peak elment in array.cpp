#include<iostream>
using namespace std;
   int peakElement(int arr[], int n)
    {
       // Your code here
       for(int i=0;i<n;i++){
           if(n==1){
               return 0;
           }
           else if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1] ){
               return i;
           }
       }
    }
int main(){
	int a[3] = {1,2,3};
	cout<<peakElement(a,3)<<endl;
}

