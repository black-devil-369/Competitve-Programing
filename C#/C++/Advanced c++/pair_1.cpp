#include<bits/stdc++.h>
#include<utility>
using namespace std;
int main(){
    pair<int ,string>Part1;
    pair<char ,double>Part2('A', 134.34);
    pair<int, string>a;
    a = make_pair(143,"Ajay");
    Part1.first = 534;
    Part1.second = "Ajay Chauhan";
    cout<<Part1.first<<endl;
    cout<<Part1.second<<endl;
    cout<<Part2.first<<endl;
    cout<<Part2.second<<endl;
    cout<<a.first<<endl;
    cout<<a.second<<endl;
    return 0;
}