#include<iostream>
#include<string>

using namespace std;

class Teachers{
private: 
    int id;
    string name;
    bool gender;
    string subject;

public:
//setters
void setId(const int& newId){id = newId;}
void setName(const string& newName){name = newName;}
void setGender(const bool& newGender){gender = newGender;}
void setSubject(const string& newSubject){subject = newSubject;}

//getters
int getId(){return id;}
string getName(){return name;}
bool getGender(){return gender;}
string getSubject(){return subject;}

//constructors
//paramtrized 
Teachers(const int idn, const string& namen, const bool gendern, const string& subjectn){
    id = idn;
    name = namen;
    gender = gendern;
    subject = subjectn;
}
//default
Teachers(){
    id = 1222324;
    name = "BC";
    gender = false;
    subject = "PT";
}
//copy
Teachers(Teachers& x){
    id = x.id;
    name = x.name;
    gender = x.gender;
    subject = x.subject;
}
//destructor
virtual ~Teachers(){}
};

int main(){
    Teachers z;
    cout<<z.getId()<<"    "<<z.getName()<<"    "<<z.getGender()<<"     "<<z.getSubject()<<endl; 

    Teachers t(1111111, "Abi", true, "Science");
    cout<<t.getId()<<"    "<<t.getName()<<"    "<<t.getGender()<<"     "<<t.getSubject()<<endl; 

    Teachers u(t);
    cout<<u.getId()<<"    "<<u.getName()<<"    "<<u.getGender()<<"     "<<u.getSubject()<<endl; 

}