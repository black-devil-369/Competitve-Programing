#include<iostream>
#include<fstream>
using namespace std;
void writing(){
    ofstream fine;
    fine.open("file1.txt",ios::out);
    char str[] = "My name is Ajay Chauhan";
    fine<<"Hello world"<<endl;
    fine.close();
}
void reading(){
    char ch;
    ifstream loop;
    loop.open("file1.txt",ios::in);
    loop>>ch.getline();
    cout<<ch<<endl;
}
int main(){
    writing();
    reading();
    return 0;
}