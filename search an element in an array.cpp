#include<iostream>
using namespace std;
    int search(int arr[], int N, int X)
    {
        
        // Your code here
        for(int i=0;i<N;i++){
            if(arr[i]==X){
               return i;
            }
           
    
        }
        return -1;
 
    }
int main(){
	int a[4] = {1,2,3,4};
	cout<<search(a,4,3)<<endl;
}

