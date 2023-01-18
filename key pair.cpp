#include<iostream>
#include<algorithm>
using namespace std;
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
         sort(arr, arr+n);

     int s = 0;

     int e = n-1;

     while(s <e){

         if(arr[s] + arr[e]  == x){

             return true;

         }

         else if(arr[s] + arr[e] > x){

             e--;

         }

         else if(arr[s] + arr[e] < x){

             s++;

         }

     }

     return false;
	}
int main(){
	int a[5] = {1,2,4,3,6};
	cout<<hasArrayTwoCandidates(a,5,10)<<endl;
}

