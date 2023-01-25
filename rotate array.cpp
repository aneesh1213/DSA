#include<iostream>
using namespace std;
    void rotateArr(int arr[], int d, int n){
        // code here
        int arr1[n];

         int j=0;

         d=d%n;

         for(int i=d;i<n;i++){

             arr1[j]=arr[i];

             j++;

         }

         for(int k=0;k<d;k++)

         {

             arr1[j]=arr[k];

             j++;

         }

         for(int i=0;i<n;i++)

         arr[i]=arr1[i];
    
    }
int main(){
	int a[5] = {1,2,3,4,5};
	int d = 2;
	rotateArr(a,2,5);
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
}

