// using of swap function
#include<bits/stdc++.h>
using namespace std;
/*class Swapping{
    private:
    int value,value1;
    public:
    void change(int x,int y){
        value = x;
        value1=y;
    }
    int getvalue(){
        return (value,value1);
    }
};*/
int main(){
   /* Swapping s;
    cout<<"Value before swapping"<<endl;
    s.change(53,63);
    cout<<endl<<s.getvalue()<<endl;
    cout<<"Value after swapping"<<endl;
    */
   int x = 34;
   int y = 24;
   cout<<"Value of before swapping"<<endl;
   cout<<endl<<x<<endl;
   cout<<endl<<y<<endl;
   cout<<"Value after swapping"<<endl;
   swap(x,y);
   cout<<x<<endl;
   cout<<y<<endl;
   return 0;
}