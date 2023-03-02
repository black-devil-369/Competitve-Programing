#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,int>m1;
    map<int,int>::iterator it;
    m1[1] = 34;
    m1[2] = 42;
    m1[3] = 98;
    m1[5] = 65;
    cout<<"\tKey\tValue\n";
    for(it=m1.begin();it!=m1.end(); ++it){
        std::cout<<'\t'<<it->first<<'\t'<<it->second<<std::endl;
    }
}