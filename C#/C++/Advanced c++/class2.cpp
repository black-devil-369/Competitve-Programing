#include<bits/stdc++.h>
using namespace std;
// use public method in class
class Circle{
    public:
    double radius;
    double compute_area(){
        return 3.14*radius*radius;
    }
};
// use of Private Method in class
class Circle2{
    private:
    double radius;
    public:
    double compute_area(double r){
        radius =r;
        double area = 3.14*r*r;
        cout<<"Radius is:"<<radius<<endl;
        cout<<"Area is : "<<area<<endl;
    }
};
// use protected method in class
class Parrent{
    protected:
    double radius;
};
class Child: public Parrent{
    public:
    void compute_area(double r){
        radius = r;
        double area = 3.14*r*r;
        cout<<"Radisu is:"<<radius<<endl;
        cout<<"Area is : "<<area<<endl;
    }

};
// Define member funtion without aruguments within class
class Loop{
    int id;
    char name[100];
    public:
    void set_p(){
        cout<<"Enter the id"<<endl;
        cin>>id;
        fflush(stdin);
        cout<<"Enter the name";
        cin.get(name,100);
    }
    void display_p(){
        cout<<endl<<"\t"<<name;
    }
};
class Student:public Loop{
    char course[50];
    int fee;
    public:
    void set_s(){
        set_p();
        cout<<"Enter the course name"<<endl;
        fflush(stdin);
        cin.getline(course,50);
        cout<<"Enter the course fee"<<endl;
        cin>>fee;
    }
    void display_s(){
        display_p();
        cout<<"t"<<course<<"\t"<<fee;
    }
};
// Define the member function with arguments outside the class
class Ajay
{
    int id;
    char name[100];
    
    public:
        void set_p(int,char[]);
        void display_p();
};
  
void Ajay::set_p(int id,char n[])
{
    this->id=id;
    strcpy(this->name,n);        
}
  
void Ajay::display_p()
{
    cout<<endl<<id<<"\t"<<name;
}
  
class Chauhan: private Ajay // Derived child class from base or parrent  (Ajay class)
{
    char course[50];
    int fee;
    public:
    void set_s(int,char[],char[],int);
    void display_s();
};
  
void Chauhan::set_s(int id, char n[],char c[],int f)
{
    set_p(id,n);
    strcpy(course,c);
    fee=f;
}
  
  
void Chauhan::display_s()
{
    display_p();
    cout<<"t"<<course<<"\t"<<fee;
}
int main(){
    Chauhan c;
    c.set_s(1001,'Ram','B.tech',2000);
    c.display_s();
    Student obj4;
    Child obj3;
    Circle obj;
    Circle2 obj2;
    obj4.set_s();
    obj4.display_s();
    obj3.compute_area(14.4);
    obj2.compute_area(13.1);
    obj.radius = 34.2;
    cout<<"Radius is:"<<obj.radius<<endl;
    cout<<"Area is :"<<obj.compute_area()<<endl;
    return 0;
}
