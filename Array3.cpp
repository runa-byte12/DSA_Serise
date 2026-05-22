#include<iostream>
using namespace std;

//Linear search to arr[]={2,35,5,65,78,-11,100}

    int Linearsearch(int arr[],int sz,int target){
        for(int i=0;i<sz;i++){
            if(arr[i]==target){
                return i;
            }
        }
        return -1;
    }

   int main(){
  int arr[]={2,34,5,65,78,-11,100};
   int sz=7;
   int target=100;
   cout<<"The num is=";
   cout<<Linearsearch(arr,sz,target)<<endl;
   
   }


