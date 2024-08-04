//T.C. for all cases is O(n^2).
//It is an unstable sorting method.
//space complexity of selection sort is O(1).
//less swapping >>> advantage
#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int arr[]={5,1,3,4,2};
    int n=5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //for_each loop====>>>>
    // for(int ele: arr){
    //     cout<<ele<<" ";
    // }
    // cout<<endl;

    for(int i=0;i<n-1;i++){
        int min=INT_MAX ;
        int mindx=-1;//put any value
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                mindx=j;
            }
        }
        swap(arr[i],arr[mindx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}