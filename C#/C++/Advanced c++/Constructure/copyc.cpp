#include<bits/stdc++.h>
using namespace std;
class Point{
    private:
    int x,y;
    public:
    // simply define a constructure
    Point(int x1,int y1){
        x = x1;
        y = y1;
    }
    // copy Consturcture
    Point(const Point&t){
        x = t.x;
        y = t.y;
    }
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
};
// Another class
class Student{
    private:
    int roll_no;
    string name;
    int age;
    public:
    Student(int,string,int);// creating a normal constructure
    Student(Student &t){
        roll_no = t.roll_no;
        name = t.name;
        age = t.age;
    }
    void display();
};
Student::Student(int no,string n,int a){
    roll_no = no;
    name = n;
    age = a;
}
void Student::display(){
    cout<<"roll_no"<<" :: "<<roll_no<<endl;
    cout<<"name "<<" :: "<<name<<endl;
    cout<<"age "<<" :: "<<age<<endl;
}
int main(){
    Point p1(64,74);// Normal constructure called here
    Point p2  = p1;// Copy Constructure called here
    cout<<"p1.x :: "<<p1.getX()<<"p1.y :: "<<p1.getY()<<endl;
    cout<<"p2.x :: "<<p2.getX()<<"p2.y :: "<<p2.getY()<<endl;
    // creating a object for student class
    cout<<"Value for a Another classes name is Students"<<endl;
    Student s(5,"Ajay",20);
    s.display();
    cout<<endl;
    cout<<"Value for Copy constructure"<<endl;
    Student s2(s);
    s2.display();
    return 0;
}