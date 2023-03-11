#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    // string in c++ we can create with help of array
    // pointer arrays,2-d arrays
    // creating an array string by using string class
    int n;
    cout<<"Enter the size of arrays"<<endl;
    cin>>n;
    //.............1 way...............
    //creating a string array
    std::string arr[n];
    cout<<"Enter the string element inside a arrays"<<endl;
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }
    cout<<endl;
    //...............2-way......................
    // creating an string array by using a vector
    std::vector<std::string>name;
    // Enter the string inside a vector
    vector<string>::iterator it;
    cout<<"Enter the string element inside a vector"<<endl;
    for(int i=0;i<n;++i){
        string s;
        cin>>s;
        name.push_back(s);
    }
    // print the string element from the vector 
    for(it=name.begin();it!=name.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    //...............3-way...........................
    // crating a array stirng using array class of stl in c++
    std::array<std::string,5>name1;
    for(int i =0;i<name1.size();i++){
        std::cin>>name1[i];
    }
    for(int i=0;i<name1.size();i++){
        std::cout<<name1[i]<<" ";
    }
    cout<<endl;
    //==========>>>>>>>>>>>>>>:: 4-way:: <<<<<<<<<<<===========
    // creating a string array by using a pointer arrays;
    const char* arr1[n];
    for(int i=0;i<arr1.size();i++){
        std::cin>>arr1[i];
    }
}