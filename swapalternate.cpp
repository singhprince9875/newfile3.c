#include<iostream>
using namespace std;
int main(){int x = 12,count =0;
    int arr[4]={10,4,2,8};
    for(int i=0;i<=4;i++){
        for(int j=i+1;j<4;j++){
            if(arr[i]+arr[j] == x){
                count++;            
                 cout<<arr[i]<<" ";
                cout<<arr[j]<<" ";
                
            }
        }
    } cout<<"yournumber of the pairs is"<<count;
}