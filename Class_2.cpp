#include <iostream>
using namespace std;

class student{

    string name;
    public:
    // paramitarisez constructor..
    student(string s){
        cout << "paramitarised constructor" << endl;
        name = s;
    }

    // default constructor..
    student(){
        cout << "default constructor" << endl;

    }

    // copy constructor..
    student(student &a){
        cout << "copy constructor" << endl;
        name = a.name;
        // cout << name;
    }
    void get_name(){
        cout << name;
    }
    void set_name(string n){
        name = n;
    }
    string return_name(){
        return name;
    }




};

int main (){

   student a;
   string t = "rifat";
    a.set_name(t);
    a.get_name() ;
    cout << endl;
   
    student b("rafsan tarek");
    cout << b.return_name() << endl;
    student c(a); // c == a
    c.get_name();

   


    return 0;
}