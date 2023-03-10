#include<iostream>
using namespace std;
class Time{
    private:
    int hr, min,sec;
    public:
    void setTime(int hr, int min, int sec){
        this->hr = hr;
        this->min = min;
        this->sec = sec;
    }
    void showtime(){
        cout<<"\n"<<hr<<":"<<min<<":"<<sec;
    }
    bool operator(Time t){
        if(hr>t.hr){
            return ture;
        }
        else if(hr<t.hr){
            return false;
        }
        else if(min>t.min){
            return ture;
        }
        else if(min<t.min){
            return false;
        }
        else if(sec>t.sec){
            return ture;
        }
        else{
            return false;
        }
    }
};

// Generic Programing;
// Function template
template<typename X>
X bigger(X a,X b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
// creating a function
// this function return only integers type value
int bigger(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
double bigger(double a,double b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
Time bigger(Time a,Time b){
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    Time t1,t2,t3;
    t1.setTime(3,45,20);
    t1.setTime(3,40,50);
    bigger(t1,t2);
    t3.showtime();
    cout<<endl<<bigger(3,7);
    cout<<endl<<bigger(4.6,3.2);
    cout<<endl;
    return 0;
}

int main(){
    cout<<bigger(3,6)<<endl;;
}