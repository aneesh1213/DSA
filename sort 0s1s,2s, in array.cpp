#include<iostream>
using namespace std;
 void sort012(int a[], int n)
    {
        // code here 
	int c0=0,c1=0,c2=0;

         for(int i=0;i<n;i++)

         {

             if(a[i]==0)

             c0++;

             else if(a[i]==1)

             c1++;

             else

             c2++;
    } 
    for(int i=0;i<n;i++){
        if(c0!=0){
            a[i] = 0;
            c0--;
        }
        else if(c1!=0){
            a[i] = 1;
            c1--;
        }
        else if(c2!=0){
            a[i] = 2;
            c2--;
			
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

