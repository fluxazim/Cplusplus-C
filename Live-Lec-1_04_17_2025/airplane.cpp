#include <iostream>
#include <string>

using namespace std;

class Airplane
{

private:
    string model;
    int year;
    int flightHours;
    int value;
    char type; //'C' for commercial, 'P' for private

public:

//setters
void setModel(const string& newModel){model = newModel;}
void setYear(const int& newYear){year = newYear;}
void setFlightHours(const int& newHours){flightHours = newHours;}
void setValue(const int& newValue){value = newValue;}
void setType(const char& newType){type = newType;}

//getters
string getModel(){return model;}
int getYear(){return year;}
int getFlightHours(){return flightHours;}
int getValue(){return value;}
int getType(){return type;}

//parametrized constructor
Airplane(const string& mmodel, int yyear, int fhours, int vvalue, char ttype){
    model = mmodel;
    year = yyear;
    flightHours = fhours;
    value = vvalue;
    type = ttype;
}

//default constructor
Airplane(){
    model = "SkyLine";
    year = 2024;
    flightHours = 103;
    value = 3023;
    type = 'C';
}

//copy constructor
Airplane(Airplane& A){
    model = A.model;
    year = A.year;
    flightHours = A.flightHours;
    value = A.value;
    type = A.type;
}

//destructor
virtual ~Airplane(){
    cout<<"The airplane model "<<model<<" was retired. It was built in "<<year
    <<" and had "<<flightHours<<" flight hours. Value was "<<value
    <<" and type was "<<type<<endl;
}
};

int main(){

    // Default Constructor Example
    Airplane a;
    cout<<a.getModel()<<" was built in "<<a.getYear()<<". It has "<<a.getFlightHours()
    <<" flight hours. Value is "<<a.getValue()<<" and type is "<<a.getType()<<endl;

    // Parametric Constructor
    Airplane b("CloudFlyer", 2021, 200, 500, 'P');
    cout<<"The airplane is "<<b.getModel()<<" built in "<<b.getYear()<<" with "
    <<b.getFlightHours()<<" flight hours. Value: "<<b.getValue()<<" type: "<<b.getType()<<endl;

    // Copy Constructor
    Airplane c(b);
    cout<<"The airplane is "<<c.getModel()<<" built in "<<c.getYear()<<" with "
    <<c.getFlightHours()<<" flight hours. Value: "<<c.getValue()<<" type: "<<c.getType()<<endl;

    // Changing values with setters
    c.setModel("TinyJet");
    cout<<"The airplane is "<<c.getModel()<<" built in "<<c.getYear()<<" with "
    <<c.getFlightHours()<<" flight hours. Value: "<<c.getValue()<<" type: "<<c.getType()<<endl;
}