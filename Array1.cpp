#include<iostream>
using namespace std;
int main(){
    //find smallest and largest number in array
    int num []={12,23,199,-1,-80,29};
    int size=7;
    int smallest=INT_MAX;
    for(int i=0;i<size;i++){

        if(num[i]<smallest){
       smallest=num[i];
        }

    }
    cout<<"the smallest number="<<smallest;
    return 0;
}