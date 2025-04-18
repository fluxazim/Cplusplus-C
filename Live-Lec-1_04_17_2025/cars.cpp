#include <iostream>
#include <string>

using namespace std;

class Car
{

private:
    string brand;
    int year; 
    int mileage; 
    int price; 
    char color; //Single character representing colors 

public:

//setters
void setBrand(const string& newBrand){brand = newBrand;}
void setYear(const int& newYear){year = newYear;}
void setMileage(const int& newMileage){mileage = newMileage;}
void setPrice(const int& newPrice){price = newPrice;}
void setColor(const char& newColor){color = newColor;}

//getters
string getBrand(){return brand;}
int getYear(){return year;}
int getMileage(){return mileage;}
int getPrice(){return price;}
int getColor(){return color;}

//below are constructors
//parametrized constructors
Car(const string& bbrand, int yyear, int mmileage, int pprice, char ccolor){
    brand = bbrand;
    year = yyear; 
    mileage = mmileage;
    price = pprice;
    color = ccolor;
}

//default constructor
Car(){
    brand = "Volvo";
    year = 2012;
    mileage = 255000;
    price = 2500;
    color = 'R';
}

//copy constructor
Car(Car& C){
    brand = C.brand;
    year = C.year;
    mileage = C.mileage;
    price = C.price;
    color = C.color;
}

//Destructor
virtual ~Car(){cout<<"The brand of the car was terminated was"
    <<brand<<"year"<<year<<"with total mileage of:"<<mileage<<"roughly estimated to be:"<<price<<"it was also the color:"<<color<<endl;}
};

int main(){
    //Default Constructor Example 
Car x;
cout<<x.getBrand()<<"was released in"<<x.getYear()<<".Today, it has"<<x.getMileage()<<"mileage."
<<"I'm currently selling for"<<x.getPrice()<<"and the color is"<<x.getColor()<<endl;

//Parametric Constructor
Car y("Toyota", 2013, 200000, 2000, 'R');
cout<<"The car I'm selling is a"<<y.getBrand()<<"released in"<<y.getYear()<<"with total mileage of"<<
y.getMileage()<<"the set price is"<<y.getPrice()<<"and the color is"<<y.getColor()<<endl;

//copy Constructor
Car z(y);
cout<<"The car I'm selling is a"<<z.getBrand()<<"released in"<<z.getYear()<<"with total mileage of"<<
z.getMileage()<<"the set price is"<<z.getPrice()<<"and the color is"<<z.getColor()<<endl;

z.setBrand("AzimRide");
cout<<"The car I'm selling is a"<<z.getBrand()<<"released in"<<z.getYear()<<"with total mileage of"<<
z.getMileage()<<"the set price is"<<z.getPrice()<<"and the color is"<<z.getColor()<<endl;
}