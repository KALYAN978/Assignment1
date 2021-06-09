/*Given a sorted array with possibly duplicate elements, the task is to find indexes of first and last occurrences of an element x in the given array. 
Input : arr[] = {1, 3, 5, 5, 5, 5, 7, 123, 125 }    
        x = 7
Output : First Occurrence = 6
         Last Occurrence = 6 */
    
#include<bits/stdc++.h>
using namespace std;

void firstandlast(int arr[],int n,int x){
    int first = -1, last = -1;
    for(int i = 0; i<n; i++){
        if(x != arr[i])
            continue;
        if(first == -1)
            first = i;
        last = i;
    }
    if(first != -1){
        cout<<"first occurence ="<<first<<endl;
        cout<<"last occurence ="<<last<<endl;
    }else{
        cout<<"not found";
    }
}

int main(){
    int arr[] = {1,3,5,5,5,5,7,123,125};
    int n =sizeof(arr)/sizeof(int);
    int x = 7;
    firstandlast(arr,n,x);

    return 0;
}
