#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int multi_Dimensionalarray[n][k];
    cout<<"Enter the for Multi Dimensional Arrasys"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<k; j++){
            cin>>multi_Dimensionalarray[i][j];
        }
    }
    cout<<"The Element of Arrays Enter by you"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<k; j++){
            cout<<multi_Dimensionalarray[i][j]<<endl;
        }
    }
    cout<<"The size of Arrays is"<<endl;
    cout<<sizeof(multi_Dimensionalarray)<<endl;
    cout<<"The Lenght of Arrays is "<<endl;
    int c = sizeof(multi_Dimensionalarray)/sizeof(int);
    cout<<c<<endl;

}