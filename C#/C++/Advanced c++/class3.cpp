#include<bits/stdc++.h>
using namespace std;
class Abstraction{
    private:
    int a,b;
    public:
    void set(int x,int y){
        a = x;
        b = y;
    }
    void display(){
        cout<<"Value of a is :"<<a<<endl;
        cout<<"Value of b is :"<<b<<endl;
    }
};
int main(){
    Abstraction c;
    c.set(34,43);
    c.display();
    return 0;
}