#include<iostream>
using namespace std;
void reverse(int arr[],int s,int e){
	while(s<e){
		int temp = arr[s];
		arr[s] = arr[e];
		arr[e] = temp;
		s++;
		e--;
	}
}
void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
}
int main(){
	int a[5] = {2,3,5,1,6};
	reverse(a,0,4);
	print(a,5);
	
}

