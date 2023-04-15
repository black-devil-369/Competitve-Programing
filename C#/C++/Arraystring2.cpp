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
    std::array<std::string,5>name3;
    for(int i =0;i<name3.size();i++){
        std::cin>>name3[i];
    }
    for(int i=0;i<name3.size();i++){
        std::cout<<name3[i]<<" ";
    }
    cout<<endl;
    //==========>>>>>>>>>>>>>>:: 4-way:: <<<<<<<<<<<===========
    // creating a string array by using a 2-D arrays;
    char colour[4][10]
        = { "Blue", "Red", "Orange", "Yellow" };
  
    // Printing Strings stored in 2D array
    for (int i = 0; i < 4; i++)
        std::cout << colour[i] << "\n";
    return 0;   
}