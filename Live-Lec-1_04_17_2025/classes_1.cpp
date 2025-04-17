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
virtual ~Person();

};
// Just for showing git pull

int main()
{
return 0;
}
