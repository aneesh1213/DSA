#include<iostream>
#include<algorithm>
using namespace std;
 bool findTriplets(int arr[], int n)
    { 
        //Your code here
         sort(arr, arr+n);  

        for(int i=0; i<n;i++) {

            int j=i+1, k=n-1;  

 

            while(j<k)  {

                if(arr[i] +arr[j]+arr[k]==0) {

                    return true;  }

                else if(arr[i]+arr[j]+arr[k]>0)  {

                    k--; }

                else  {

                    j++; }

            }    }

 

    return false;
    }
int main(){
	int a[5] = {0,-1,2,3,-1};
	cout<<findTriplets(a,5)<<endl;
}

