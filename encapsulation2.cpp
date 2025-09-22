#include<iostream>
using namespace std;
class A{
    int x;
    void get_x(){
        cin>>x;
    }
     void show_x(){
        cout<<x;
    }
    int y;
    protected:
    
    void get_y(){
        cin>>y;
    }
     void show_y(){
        cout<<y;
    }
    
};

class B: protected A{
    public:
    void test(){
        get_y();  // can access encapuslated data
        show_y(); // can access encapuslated data
        
    }
};

class C: private A{
    public:
    void test(){
        get_x();  // cannot access encapuslated data
        show_x(); // cannot access encapuslated data
        
    }
};

/*Complete demonstration of encapuslation*/