/**
#include<bits/stdc++.h>
#include<vector>
using namespace std;
// 2D vector means vector inside of vector.
// Syntax:: vector<vector<data_type>>vector_name{parameters or arguments}
int main(){
    vector<vector<int>>vect1{ {1,3,4},
    {5,2,6},
    {8,9,7} };
    for(int i=0;i<vect1.size();i++){
        for(int j=0; j<vect1[i].size();j++)
            cout<<vect1[i][j]<<" ";
        cout<<endl;
    }
}
**/
/**
#include <iostream>
#include <vector> // for 2D vector
using namespace std;
 
// Driver Code
int main()
{
    // Initializing 2D vector "vect" with
    // values
    vector<vector<int> > vect{ { 1, 2, 3 },
                               { 4, 5, 6 },
                               { 7, 8, 9 } };
 
    // Displaying the 2D vector
    for (int i = 0; i < vect.size(); i++) {
        for (int j = 0; j < vect[i].size(); j++)
            cout << vect[i][j] << " ";
        cout << endl;
    }
 
    return 0;
}
**/

// Sorting of vector

#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>>vect{ {1,6,3},
                             {5,8,4},
                             {2,9,0} };
    int m = vect.size();
    int n = vect[0].size();
    cout<<"The Matrix 1 element before sorting\n";
    for(int i = 0; i<vect.size(); i++){
        for(int j = 0; j<vect[i].size(); j++)
            cout<<vect[i][j]<<" ";
        cout<<endl;
    }
    sort(vect[0].begin(), vect[0].end());
    cout<<"The Martix of 1 row after sorting\n";
    for(int i =0; i<m; i++){
        for(int j = 0; j<n; j++)
            cout<<vect[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
    