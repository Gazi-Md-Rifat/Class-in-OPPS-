#include <iostream>
using namespace std;

class student{
    int age;
    string locaton = "Bangladesh";
    string ok = "Dhaka";
    public:
    string name;
    bool gender;
    void manage_age(int element){ // setter function..
        age = element;
    }
    string mange_privet(){ // get functiion..
        cout << ok;
        return locaton;
    }
    void print(){
        cout << " name is : " << name << endl;
        cout << " age is : " << age << endl; 
        cout << "gender is : " << gender << endl;    
    }


};

int main (){

    student array[2];
    for (int i = 0; i < 2; i++){
        cin >> array[i].name;
        int element;
        cin >> element;
        array[i].manage_age(element);
        cin >> array[i].gender;
    }
    for (int i = 0; i < 2; i++){
        array[i].print();
    }
    student place;
    cout << endl << place.mange_privet();



    return 0;
}