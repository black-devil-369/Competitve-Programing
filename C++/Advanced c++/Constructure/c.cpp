#include<bits/stdc++.h>
using namespace std;
class Ajay{
    private:
    int x,y;
    public:
    Ajay(int x1,int y1){
        x = x1;
        y = y1;
    }
    int getx(){
        return x;
    }
    int gety(){
        return y;
    }
};
int main(){
    Ajay a1(64,35); // When create a object of class then Constructure is automatically called;
    cout<<"getx :"<<a1.getx()<<" :: "<<"gety : "<<a1.gety();
    return 0;
}