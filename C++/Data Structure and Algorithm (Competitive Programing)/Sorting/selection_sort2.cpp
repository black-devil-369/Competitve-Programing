#include<iostream>
#include<math.h>
using namespace std;
/*void swap(int *x,int *y ){
    int temp = *x;
    *x = *y;
    *y = temp;
}*/
void selectionSort(int A[],int n){
    int i,j,min_idx;
    for(i=0;i<n-1;i++){
        min_idx=i;
        for(j=i+1;j<n;j++)
        if(A[j]<A[min_idx])
           min_idx =j;
        if(min_idx!=i)
            swap(A[min_idx],A[i]);
    }
}
void printedarrays(int A[],int size){
    int i;
    for(i=0;i<size;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int A[n];
    cout<<"Enter the Elements inside a arrays"<<endl;
    for(int i =0;i<n;i++){
        cin>>A[i];
    }
    cout<<endl;
    int k =  sizeof(A)/sizeof(A[0]);
    selectionSort(A,k);
    cout<<" "<<endl;
    cout<<"Sorted Arrays"<<endl;
    printedarrays(A,k);
}