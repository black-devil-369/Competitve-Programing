#include<iostream>
using namespace std;
class Car{
    private:
    int x;
    void carprice(){
        cout<<"Enter the car Price"<<endl;
        cin>>x;
    }
    public:
    void getcarprice(){
        carprice();
        int c = x;
        cout<<"The Car price is"<<endl;
        cout<<c<<endl;
    }
};
int main(){
    Car c1;
    c1.getcarprice();
}
