#ifndef STAFFDATA_H
#define STAFFDATA_H
#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

class StaffData
{
public:
    virtual void print();
    virtual void signUP() = 0;
    virtual void SaveToFile(ofstream&)=0;
    virtual void LoadFromFile(ifstream&)=0;
    virtual bool signIn(string,string) = 0;

    string getPassword();
    string getUser();
    int getTypeId();
    StaffData();
    virtual ~StaffData();

protected:
    string id;
    string name;
    string phone;
    string email;
    string birthDate;
    string gender;
    string address;
    string type;
    int typeID;
    string username;
    string password;
    string passwordvalidaition;
};

#endif // STAFFDATA_H
