// pair is use for combine two value of differet data_type
//  It is basically used if we want to store tuples.
// It is simply defined in <utility> header consisting of two data element or object
// general syntax: pair (data_type1, data_type2) Pair_name
 //pair (data_type1, data_type2) Pair_name (value1, value2);// Pair_name = make_pair (value1,value2);
#include<bits/stdc++.h>
#include<utility>
using namespace std;
int main(){
    pair<int ,string>Part1 = make_pair(434,"AjayChauhan");
    pair<int , string>Part2 = make_pair(9,"Jai Bhavani");
    pair<int, int>Part3 =make_pair(3,4);
    
    int a,b,;
    tie(a,b)= Part3;
    cout<<a<< " "<<b<<endl;
    pair<int , int>Part4 = make_pair(1,7);
    tie(a,ignore)=Part4;
    cout<<a<<" "<<b<<endl;
    cout<<"Before Swapping"<<endl;
    cout<<Part1.first<<endl;
    cout<<Part1.second<<endl;
    cout<<Part2.first<<endl;
    cout<<Part2.second<<endl;
    Part1.swap(Part2);
    cout<<"After swapping"<<endl;
    cout<<Part1.first<<endl;
    cout<<Part1.second<<endl;
    cout<<Part2.first<<endl;
    cout<<Part2.second<<endl;

}