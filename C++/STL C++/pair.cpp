#include<bits/stdc++.h>
using namespace std;
int main(){
    // ceating a pair syntax is
    // pair<data_type , data_type>pair_name
    pair<int, int>p1 = make_pair(1,6);
    pair<int,pair<char , double> >p2 = {2,{'A',34.25}};
    pair<int ,int>p3 = make_pair(34,62);
    int x,y;
    char c;
    //tie(x,ignore) = p1.second;
    tie(x,ignore) = p2;
    cout<<x<<endl;
    tie(c,y) = p2.second;
    cout<<c<<" "<<y<<endl;

    cout<<p1.first<<endl;
    cout<<p1.second<<endl;
    cout<<p2.first<<endl;
    cout<<p2.second.first<<endl;
    cout<<p2.second.second<<endl;
    cout<<"Before Swapping p1 and p3"<<endl;
    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p3.first<<" "<<p3.second<<endl;
    cout<<"After the swapping the p1 and p2 pair"<<endl;
    p1.swap(p3);
    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p3.first<<" "<<p3.second<<endl;
    return 0;

}