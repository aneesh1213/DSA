#include<iostream>
using namespace std;
 void sort012(int a[], int n)
    {
        // code here 
    int s=0;
    int mid=0;
    int e=n-1;
    while(mid<=e){
            if(a[mid]==0){
                swap(a[mid],a[s]);
                s++;
                mid++;
            }
            else if(a[mid]==2){
                 swap(a[mid],a[e]);
                e--;
            }
            else{
                mid++;
            }
         
        }
     
    }
int main(){
	int a[5] = {1,0,2,0,1};
	sort012(a,5);
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
}

