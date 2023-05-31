#include <iostream>
using namespace std;

class student{
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
        return name + collage_name;
    }
// print function....
    void print_info()
    {
        cout << "name is " << name << endl;
        cout << "age is " << age << endl;
        cout << "collage name is " << collage_name << endl << endl;
    }
// paramitarized constructor...
    student (string s,int n, string p){
        name = s;
        age = n;
        collage_name = p;
    };

    
    
};

int main(){

    student DPI[3];
    int t;
    string s, p;
    for (int i = 0; i < 3; i++)
    {
        cout << "put ypur name : ";
        cin >> s;
        cout << "put your age : ";
        cin >> t;
        cout << "put your collage name : ";
        cin >> p;
        DPI[i].set_document(s, t, p);
        cout << endl;
    }
    cout << endl << endl << "your document is here :................." << endl << endl;
    for (int i = 0; i < 3; i++)
    {
        DPI[i].print_info();
        cout << endl << endl;
    }
    student DUET("Rafsan", 17, "DUET");
    DUET.print_info();
    cout << endl;

    student CUET("Tarek", 18, "CUET");
   cout <<  CUET.get_document();
    return 0;
}