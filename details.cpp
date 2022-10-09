#include <bits/stdc++.h>
using namespace std;

struct Details
{
    string name;
    int Age;
    string ArrivalDate;
    int Room_No;
    string Address;
    string DischargeDate;
    string ComingFrom;
    string Goingto;
    Details()
    {
        name = "0";
        Age = 0;
        ArrivalDate = "0";
        Room_No = 0;
        Address = "0";
        DischargeDate = "0";
        ComingFrom = "0";
        Goingto = "0";
    }
    void getName()
    {
        cout << "Enter Name" << endl;
        getline(cin, name);
    }
    void getArrivalDate()
    {
        cout << "Enter Arrival date" << endl;
        getline(cin, ArrivalDate);
    }
    void getAge()
    {
        cout << "Enter Age" << endl;
        int c;
        cin >> c;
        if (c > 0)
        {
            Age = c;
        }
        else
        {
            cout << "Invalid Age" << endl;
        }
        cin.ignore();
    }
    void getAddress()
    {
        cout << "Enter Permanent Address" << endl;
        getline(cin, Address);
    }
    void getDischargeDate()
    {
        cout << "Enter Discharge date" << endl;
        getline(cin, DischargeDate);
    }
    void getGoingTo()
    {
        cout << "Enter Going-To Location" << endl;
        getline(cin, Goingto);
    }
    void getComingFrom()
    {
        cout << "Enter Coming-From Location" << endl;
        getline(cin, ComingFrom);
    }
    void displayInfo()
    {
        cout << "____________________" << endl;
        cout << "Name : " << name << endl;
        cout << "Age : " << Age << endl;
        cout << "Room no. :" << Room_No << endl;
        cout << "Address :" << Address << endl;
        cout << "Arrival date : " << ArrivalDate << endl;
        cout << "Discharge date : " << DischargeDate << endl;
        cout << "Coming From : " << ComingFrom << endl;
        cout << "Going To : " << Goingto << endl;
        cout << "____________________" << endl;
    }
};
