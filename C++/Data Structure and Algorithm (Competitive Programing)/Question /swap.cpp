#include<bits/stdc++.h>
using namespace std;
class Swap{
    public:
    void swap(int,int);
};
void Swap::swap(int data1,int data2){
    int z = data1;
    data1 = data2;
    data2 = z;
    cout<<data1<<" "<<data2<<endl;
}
// Deriver Program
int main(){
    Swap s1;
    s1.swap(52,62);
    s1.swap(90,36);

}
