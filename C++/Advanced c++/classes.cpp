/**#include <iostream>
using namespace std;
 
class car {
public:
    int car_id;
    double distance;
 
    //void distance_travelled();
 
    void display(int a, int b)
    {
        cout << "car id is=\t" << a << "\ndistance travelled =\t" << b + 5;
    }
};
 
int main()
{
    car c1; // Declare c1 of type car
    c1.car_id = 321;
    c1.distance = 12;
    c1.display(321, 12);
 
    return 0;
}**/
// practice set program

/**
#include<bits/stdc++.h>
using namespace std;
class ajay{
    public:
    //int age;
    //int height;
    void display(int a , int b)
    {
        cout<<"Age: "<<a<<"\nHeight: "<<b<<endl;
    }
};
int main()
{
    ajay a1;
    //a1.age = 34;
   // a1.height = 5;
    a1.display(33,5);
    return 0;
}
**/

#include<bits/stdc++.h>
using namespace std;
class patern{
    public:
    void ajay(){
        int n;
        cin>>n;
        for(int i = 1; i<=n; i++){
            for(int j = 1; j<=i; j++){
                cout<<" * ";
            }
            cout<<endl;
        }
    }
    void jay(){
        int n;
        cin>>n;
        for(int i =1; i<=n; i++){
            for(int j=n; j>=i; j--){
                cout<<" * ";
            }
            cout<<endl;
        }
    }
    void bond(){
        int n;
        cin>>n;
        for(int i = 1; i<=n; i++){
            for(int j = 1; j<=i; j++){
                cout<<" * ";
            }
            cout<<endl;
        }
        for(int i =1; i<=n; i++){
            for(int j=n; j>=i; j--){
                cout<<" * ";
            }
            cout<<endl;
        }

    }
};
int main()
{
    patern p1;
    p1.ajay();
    p1.jay();
    p1.bond();
    return 0;
}