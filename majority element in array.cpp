#include<iostream>
#include<algorithm>
using namespace std;
 int majorityElement(int a[], int size)
    {
  if(size==1){

            return a[0];

        }

        int count=1;

       sort(a,a+size);

        for(int i=0;i<size-1;i++){

            if((a[i]==a[i+1])){

                count=count+1;

            }

            else if(a[i]!=a[i+1]){

                count--;

            }

              if(count>size/2){

                return a[i];

            }

            

        }

       return -1;

 
       
     }
int main(){
	int a[5] = {1,3,3,3,3};
	cout<<majorityElement(a,5)<<endl;
}

