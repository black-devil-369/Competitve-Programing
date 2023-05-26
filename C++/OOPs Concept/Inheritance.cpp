#include<iostream>
#include<string.h>
using namespace std;
// single inheritance 
class Students{
    private:
        char name[20];
        void setname(char n[20])
        {
            name=n;
        }
        void getname(){
            cout<<name<<endl;
        }
    protected:
        int age;
        void setage(int a){
            age = a;
        }
        void getage(){
            cout<<age<<endl;
        }
    public:
        int mobile_no;
        void setno(int mn){
            mobile_no=mn;
        }
        void getno(){
            cout<<mobile_no<<endl;
        }
};
class College:private Students
{

};
int main(){
    College c1;
    c1.setage(89);
    c1.getage();
    return 0;
}