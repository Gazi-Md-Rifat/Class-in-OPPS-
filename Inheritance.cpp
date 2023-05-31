#include <iostream>
using namespace std;

// abstraction class....
class ask_for_adult{
    virtual void condition() = 0; // pure virtual function
};

class student : ask_for_adult{
private:
    string name;
    int age;
    string collage_name;

public:
    student (){
        // default constructor...
    };
// setter functiion..
    void set_document(string s, int t, string p){
        name = s;
        age = t;
        collage_name = p;
    }
  
// getter function....
    string get_document(){
        return name + " " + collage_name;
    }

// print function....
    void print_info()
    {
        cout << "name is " << name << endl;
        cout << "age is " << age << endl;
        cout << "collage name is " << collage_name << endl << endl;
    }

// paramitarized constructor...
    student (string s, int n, string p){
        name = s;
        age = n;
        collage_name = p;
    }; 
// abtraction implementation ....
     void condition(){
        if (age >= 18){
            cout << "your are adult";
        }
        else {
            cout << "your are not adult";
        }
    }
};

// inheritance.....
class Teacher :public student{
public:
    string subject;
    Teacher(string s, int n, string p, string d) 
        : student(s, n, p)
    {
        subject = d;  
    };
   void fix(){
    cout << get_document() << " " << subject;
   }
};

int main(){

    

    Teacher DMPI = Teacher("jakir",12,"dpi", "history");
    // DMPI.print_info();
    // DMPI.set_document("rafsan", 20, "DPI");
    // cout <<  DMPI.get_document();
    // DMPI.print_info();
    cout << endl;
    DMPI.fix();
    DMPI.condition();
    cout << endl;

    student adult;
    adult.condition();
    
    
    
    

   
    return 0;
}