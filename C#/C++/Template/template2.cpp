#include<bits/stdc++.h>
using namespace std;
/*template<typename x>
x product(x a,x b){
    return a*b;
}*/
template<class y>
class Char{
    y a;
    y b;
    public:
    Char(y,y);
    y obtainedvalue();
};
template<class y>Char<y>::Char(y d,y e){
    this->a = d;
    this->b = e;
}
template<class y> y Char<y>::obtainedvalue(){
    return a;
}
template<class x>
class Add{
    x a;
    x b;
    public:
    Add(x,x);
    x getvalue();
};
template<class x>Add<x>::Add(x a,x b){
    this->a=a;
    this->b=b;
}
template<class x>x Add<x>::getvalue(){
    return a*b;
}
int main(){
    ios_base::sync_with_stdio(NULL);
    Add<float>a1(6.0,3.8);
    Add<float>a2(7.0,9);

    cout<<a1.getvalue()<<endl;
    cout<<a2.getvalue()<<endl;
   // cout<<a3.getvalue()<<endl;
    Char<char>c1('A','B');
    cout<<c1.obtainedvalue()<<endl;
    //cout<<product(3.2,5.6);
    return 0;
}