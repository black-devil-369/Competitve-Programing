#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;
int main(){
    // By iterating method , by use of for loop to copy them
    cout<<"By Iterating Method"<<endl;
    vector<int>vect1{1,3,4,6};
    vector<int>vect2;
    for(int i=0;i<vect1.size(); i++)
        vect2.push_back(vect1[i]);
    
    cout<<"Element of Old vector-1"<<endl;
    for(int i=0;i<vect1.size();i++)
       cout<<vect1[i]<< " "<<endl;
    
    cout<<"Elemtn of New vector-2"<<endl;
    for(int i=0;i<vect2.size();i++)
        cout<<vect2[i]<<endl;
    
    vect1[0]=4;
    cout<<"First Element of Old vector-1 is = "<< vect1[0]<<endl;
    cout<<"First Element of New vector-2 is = "<<vect2[0]<<endl;
    


  // Assigement Operator
    cout<<" By Assigement Operator"<<endl;
    vector<int>vect3{1,3,5,4,6};
    vector<int>vect4;
    vect4 =vect3;
    cout<<"Element of Old vector-3 "<<endl;
    for(int i=0;i<vect3.size();i++){
        cout<<vect3[i]<<" "<<endl;
    }
    cout<<"Element of New vector-4"<<endl;
    for(int i=0;i<vect4.size();i++){
        cout<<vect4[i]<<" "<<endl;
    }
    vect3[0]=5;
    cout<<"First Element of vector-3 ="<<vect3[0]<<endl;
    cout<<"First Elemtn of vector-4 ="<<vect4[0]<<endl;


    //By passing vector as constructor.
    cout<<"By passing vector as constructor."<<endl;
    vector<int> vect5{1, 2, 3, 4};
    vector<int> vect6(vect5); 
    cout << "Old vector elements are : "<<endl;
    for (int i=0; i<vect5.size(); i++){
        cout << vect5[i] << " "<< endl;
    }
  
    cout << "New vector elements are : "<<endl;
    for (int i=0; i<vect6.size(); i++){
        cout << vect6[i] << " "<< endl;
    }


    // By using inbuilt functions
    cout<<"By using inbuilt Functions"<<endl;
    vector<int> vect7{6,5,2,73};
    vector<int> vect8;
    copy(vect7.begin(), vect7.end(), back_inserter(vect8));
    cout << "Old vector elements are : "<<endl;
    for (int i=0; i<vect7.size(); i++)
    cout << vect7[i] << " " << endl;
  
    cout << "New vector elements are : "<<endl;
    for (int i=0; i<vect8.size(); i++)
        cout << vect8[i] << " "<< endl;

    cout<<"By Another using of inbuilt"<<endl;
    vector<int> vect9{64,74,71,90};
  
    vector<int> vect10;
  
    vect10.assign(vect9.begin(), vect9.end());
  
    cout << "Old vector elements are : "<<endl;
    for (int i=0; i<vect9.size(); i++)
        cout << vect9[i] << " "<< endl;
  
    cout << "New vector elements are : "<<endl;
    for (int i=0; i<vect10.size(); i++)
        cout << vect10[i] << " "<< endl;
    return 0;
    
}

