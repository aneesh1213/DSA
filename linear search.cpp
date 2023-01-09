#include<iostream>
using namespace std;
int lsearch(int a[],int n,int x){
	for(int i=0;i<n;i++){
		if(a[i]==x){
			return i;
		}
	}
	return -1;
}
int main(){
	int arr[4]={1,2,3,4};
	cout<<"element is at index:"<<lsearch(arr,4,3)<<endl;
}

