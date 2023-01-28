#include<iostream>
using namespace std;
int transitionPoint(int arr[], int n) {
    // code here
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            return i;
        }
    }
    return -1;
}
int main(){
	int a[5] = {0,0,0,1,1};
	cout<<transitionPoint(a,5)<<endl;
}

