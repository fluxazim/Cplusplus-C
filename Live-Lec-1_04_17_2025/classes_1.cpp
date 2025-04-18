#include<iostream>
#include<string>

using namespace std;
class Person {

private : 
    string name;
    int age;
    bool gender; // 1 -> male  0 -> female
public :

//setters 
void setName(const string& newName){ name  = newName;}
void setAge(const int& nA){age = nA;}
void setGender(const bool& nG){gender = nG;}

//getters
string getName(){ return name;}
int getAge(){return age;}
bool getGender(){return gender;}

//constructors
//parametrized constructors
Person(const string& nname,int nage,bool  ngender)
{
    name = nname;
    age = nage;
    gender = ngender;
}
//default constructor
Person()
{
    name = "Mohammed Azim";
    age = 35;
    gender = true;
}
//copy constructor
Person(Person& P)
{
    name = P.name;
    age = P.age;
    gender = P.gender;
}
//Destructor
virtual ~Person(){ cout << "Person Destroyed Name "<< name << " and destroyed at age "<< age << endl;}

};


int main()
{

    //Default Constructor Example 
Person x;

cout<<x.getName()<<" is of age " <<x.getAge()<<endl;

// Parametric Constructor
Person y("Salman",21,true);

cout<<y.getName()<<" is of age " <<y.getAge()<<endl;

// Copy Constructor
Person z(y);

cout<<z.getName()<<" is of age " <<z.getAge()<<endl;

z.setGender(false);
z.setName("Rabia Khatun");

cout<<z.getName()<<" is of age " <<z.getAge()<<endl;




}
