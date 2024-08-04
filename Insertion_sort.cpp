#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
//T.C. for worst case and avg. case is O(n^2).
//T.C. for Best case is O(n).
//it is a stable sorting algorithm.
int main(){
    int arr[]={5,1,3,4,2};
    int n=5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<=n-1;i++){
        int j=i;
        // while(j>=1 && arr[j]<arr[j-1]){
        //     swap(arr[j],arr[j-1]);
        //     j--;
        // }
        while(j>=1){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            else{
                break;
            }
        j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}