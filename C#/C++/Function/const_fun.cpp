#include<bits/stdc++.h>
// In the Demo class we using a normal function
using namespace std;
class Demo{
    private:
    int x;
    public:
    void set_data(int a){
        x = a;
    }
    int get_data(){
        ++x;
        return x;
    }
};
/*
class Demo1{
    private:
    int x;
    public:
    void set_data(int a){
        x = a;
    }
// Constant member function define inside a class
    int get_data()const{ // Constant memeber function
        ++x; //given an error while modify the data member
        return x;
    }
};
*/
// Constant member function define outside the class
class Demo1{
    int x;
    public:
    void set_data(int);
    int get_data()const;
};
void Demo1::set_data(int a){
    x = a;
}
int Demo1::get_data()const{
    //++x;
    return x;
}
class Test{
    int value;
    public:
    Test(int v =0){
        value = v;
    }
    int get_value()const{
        return value;
    }
};
class Constant{
    int value;
    public:
    Constant(int v = 0){
        value = v;
    }
    void showmessage(){
        cout<<"Hello World We are Tushar, "
        "Ramswarup, Nilesh and Subhash Inside"
        " showMessage() Function"<<endl;
    }
    void display()const{
        cout<<"Hello world I'm Rancho "
        "Baba Inside display() Function"<<endl;
    }
};
int main(){
    Demo d;
    Demo1 d2;
    Test t(500);
    const Constant c;
    cout<<" Calling of constant member function with constant obj"<<endl;
    c.display();
    d.set_data(100);
    cout<<endl<<d.get_data()<<endl;
    cout<<"The value when we declare const function outside the class"<<endl;
    d2.set_data(56);
    cout<<endl<<d2.get_data()<<endl;
    cout<<endl<<"The value of Test class"<<endl;
    cout<<t.get_value()<<endl;
    return 0;
}