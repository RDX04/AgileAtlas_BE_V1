#include "./stdc++.h"
using namespace std;
class Student {
 public: 
 int age, roll_no;
 string name, grade;
 // Getter and Setter
 public : 
    void setName( string Name){
        name = Name;
    }
     string getName(){
    return name;
    }
};
int main()
{
    Student s1 ;
    Student s2;
    Student *s3 = new Student ;
    (*s3).name = "Hello";
    /* First way of assign value to class keys and creating objetcs*/
    // s1.name = "Ronit";
    // s1.age = 24;
    // s1.grade = "A+";
    // s1.roll_no = 241;
    // cout << s1.name << " " << s1.age << " " << s1.grade << " " << s1.roll_no;

    s1.setName("Ronit");
    s2.setName("Raju");
    cout << s1.getName()<< " "<< s2.getName() << " " << s3->getName();
    return 0;
}