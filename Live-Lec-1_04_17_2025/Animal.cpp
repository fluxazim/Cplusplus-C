#include <iostream>
#include <string>

using namespace std;

class Animal{

private:
    string name;
    int population;
    string region;

public:
//setters 
void setName(const string& newName){name = newName;}
void setPopulation(const int& newPopulation){population = newPopulation;}
void setRegion(const string& newRegion){region = newRegion;}

//getters
string getName(){return name;}
int getPopulation(){return population;}
string getRegion(){return region;}

//constructors
//parametrized constructors
Animal(const string& nname, int ppopulation, string& rregion){
    name = nname;
    population = ppopulation;
    region = rregion;
}
//default constructor
Animal()
{
    name = "Lion";
    population = 10000;
    region = "Africa";
}
//copy constructor
Animal(Animal& A)
{
    name = A.name;
    population = A.population;
    region = A.region;
}
//Destructor
virtual ~Animal(){};

};

int main()
{
    //Default Constructor Example
Animal x; 
cout<<x.getName()<<" has a population "<<endl;
}