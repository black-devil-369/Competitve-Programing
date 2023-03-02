#include<iostream>
#include<iterator>
#include<map>
using namespace std;
int main(){
    pair<int,int>p1;
    int k;
    cout<<"Enter the elment inside a pair"<<endl;
    for(int i=1;i<5;++i){
        p1.first=i;
        cin>>k;
        p1.second=k;
    }
    multimap<int,int>m1;
    multimap<int,int>::iterator it;
    m1.insert(p1);
    cout<<"\tKey\tValue"<<endl;
    for(it=m1.begin();it!=m1.end();++it){
        std::cout<<'\t'<<it->first<<'\t'<<it->second<<std::endl;
    }
}