#include<iostream>
using namespace std;
 int equilibriumPoint(int a[], int n) {
    
       int sum = 0; // initialize sum of whole array 
    int leftsum = 0; // initialize leftsum 

    /* Find sum of the whole array */
    for (int i = 0; i < n; ++i) 
        sum += a[i]; 

    for (int i = 0; i < n; ++i) 
    { 
        sum -= a[i]; // sum is now right sum for index i 

        if (leftsum == sum) 
            return i; 

        leftsum += a[i]; 
    } 

    /* If no equilibrium index found, then return 0 */
    return -1;
    
    }
int main(){
	int arr[5]={1,3,5,2,2};
	cout<<equilibriumPoint(arr,5)<<endl;
}

