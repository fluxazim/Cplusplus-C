#include<iostream>
#include<string>

using namespace std;

class Students{

private:
    int id;
    string name;
    float gpa;

public:
//setters
void setId(const int& newId){id = newId;}
void setName(const string& newName){name = newName;}
void setGpa(const float& nG){gpa = nG;}

//getters
int getId(){return id;}
string getName(){return name;}
float getGpa(){return gpa;}

//constructors
Students(const int idn, const string& namen, const float gpan){
    id = idn;
    name = namen;
    gpa = gpan;
}

//default
Students(){
    id = 12324435;
    name = "John Cena";
    gpa = 4.5;
}
 //copy constructor
 Students(Students& x){
    id = x.id;
    name = x.name;
    gpa = x.gpa;
 }
//destructor
virtual ~Students(){}
};

int main(){
    Students y;
    cout<<y.getId()<<"   "<<y.getName()<<"   "<<y.getGpa()<<endl;

    Students z(1234456, "Killmonger", 2.0);
    cout<<z.getId()<<"   "<<z.getName()<<"   "<<z.getGpa()<<endl;
}