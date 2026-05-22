#include<iostream>
using namespace std;
int main(){
    //find smallest and largest number in array
    int num []={12,23,199,-1,-80,29};
    int size=7;
    int largest=INT_MIN;
    int smallest=INT_MAX;
    for(int i=0;i<size;i++){
       /* if(num[i]<smallest){
            smallest=num[i];
        }*/

    largest=max(num[i],largest);
    smallest=min(num[i],smallest);

    }
    cout<<"the smallest number="<<smallest<<endl;

    cout<<"the largest number="<<largest;
    return 0;
}