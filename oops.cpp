#include "./stdc++.h"
using namespace std;
class Customer{
    public:
    int account, bal;
    string name;
    // default constructor
    Customer(){
        account = 1;
        bal = 100;
        name = "Ronit Roy";
    }
    // Parameterized Constructor
    Customer(string name, int account, int bal){
        this->name = name;
        this->account = account;
        this->bal = bal;

    }
    // Constructor Overloading
    Customer(string name, int account){
        this->name = name;
        this-> account = account;
        bal = 500;
    }
    // Inline Constructor 
    inline Customer(string name): name(name){}; 
    // Copy Constructor: a copy constructor must take a reference to the object being copied
    Customer(Customer &A){
        this->name = A.name;
        this->bal = A.bal;
        this->account = A.account;
    }
    void display(){
         cout << "Hello From Constructor" << " "<< account<< " "<<bal<< " "<< name << endl;
    }
};
int main()
{
    Customer C1;
    C1.display();
    Customer C2("Ronit Roy", 2, 200);
    C2.display();
    Customer C3("Ronit Roy", 3);
    C3.display();
    Customer C4("Ronit");
    C4.display();
    Customer C5(C2);
    C5.display();
    return 0;
}