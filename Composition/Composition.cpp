 #include <iostream>
#include <string>

using namespace std;

class Birthday{

public:
    Birthday(int cmonth, int cday, int cyear){
        cmonth = month;
        cday = day;
        cyear = year;

    }
    void printDate(){
        cout<<month <<"/" <<day <<"/" <<year <<endl;

    }
private:
    int month;
    int day;
    int year;

};

class People{

public:
    People(string cname, Birthday cdateOfBirth)
    :name(cname),
    dateOfBirth(cdateOfBirth)
    {

    }
    void printInfo(){
        cout<<name <<" was born on: ";
        dateOfBirth.printDate();
    }

private:
    string name;
    Birthday dateOfBirth;

};


int main() {

    Birthday birthObject(7,9,97);
    People infoObject("Lenny the Cowboy", birthObject);
    infoObject.printInfo();

}
