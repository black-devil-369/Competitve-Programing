#include<bits/stdc++.h>
using namespace std;
void geeks(){
    int a;
    int *b;
    cin>>a;
    int arr[a];
    cout<<"Enter the Element inside a Arrays"<<endl;
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    b = arr;
    cout<<"The Address of All element"<<endl;
    for(int i = 0; i<a; i++){
        cout<<b<<" "<<endl;
        cout<<*b<<" "<<endl;
        b++;
    }
    cout<<endl;

}
 int main(){
    geeks();
    return 0;
}