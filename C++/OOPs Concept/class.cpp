/*#include<bits/stdc++.h>
using namespace std;
class Ajay{
    public:
    int a;
    void ajay(){
        cin>>a;
        cout<<"The value of a is"<<a<<endl;
    }
    int rno;
    char name[10];
    int fees;
    public:
    Ajay(){
        cout<<"Enter the Rollno"<<endl;
        cin>>rno;
        cout<<"Enter the Name"<<endl;
        cin>>name;
        cout<<"Enter the fees"<<endl;
        cin>>fees;
    }
    void display(){
        cout<<endl<<rno<<"\t"<<name<<"\t"<<fees<<endl;
    }

};
int main(){
    Ajay a1;
    a1.ajay();
    cout<<"Called Construtur"<<endl;
    a1.display();
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;

class Ajay{
    public:
    int a;
    void sum(int,int);

};
void Ajay::sum( int b,int c)
{
      int a1 = b+c;
     cout<<a1<<endl;
}