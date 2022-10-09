#include <bits/stdc++.h>
#include "utils.cpp"
#include "details.cpp"

using namespace std;

int main()
{
    struct Details Patients[323];
    int choice;
    do {
        cout << "**********Welcome to the quarantine facility management system of NIT SILCHAR **********" << endl;
        cout << "PRESS-1 For add new member" << endl;
        cout << "PRESS-2 For add multiple new member" << endl;
        cout << "PRESS-3 For display all room status" << endl;
        cout << "PRESS-4 For display details of all patients" << endl;
        cout << "PRESS-5 For changes the room of patients" << endl;
        cout << "PRESS-6 For search patient by room number" << endl;
        cout << "PRESS-7 For search patient by name" << endl;
        cout << "PRESS-8 For Sort patients by name" << endl;
        cout << "PRESS-9 For Discharge Patient" << endl;
        cout << "PRESS-10 For Adding new entry at specific room no. (Recommended after Discharge)" << endl;
        cout << "PRESS-11 For Discharging All patients" << endl;
        cout << "PRESS-12 For Some Random entries" << endl;
        cout << "PRESS-13 For EXIT" << endl;
        cin >> choice;
        cin.ignore();
        switch (choice) {
        case 1:
            AddNew(Patients, 323);
            break;
        case 2:
            AddNewMultiple(Patients, 323);
            break;
        case 3:
            RoomStatus(Patients, 323);
            break;
        case 4:
            DisplayAll(Patients, 323);
            break;
        case 5:
            ChangeRooms(Patients, 323);
            break;
        case 6:
            SearchByRoom(Patients, 323);
            break;
        case 7:
            SearchByName(Patients, 323);
            break;
        case 8:
            SortNames(Patients, 323);
            break;
        case 9:
            DischargePatient(Patients, 323);
            break;
        case 10:
            AddSpecific(Patients, 323);
            break;
        case 11:
            DischargeAll(Patients, 323);
            break;
        case 12:
            RandomEntries(Patients, 323);
            break;
        case 13:
            break;
        }
    } while (choice < 13);
}