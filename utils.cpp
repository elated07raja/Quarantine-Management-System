#include <bits/stdc++.h>
#include "details.cpp"
using namespace std;

// Helper function in Merge Sort (Copy Details of Ob2 to Ob1)
void Assign(struct Details &ob1, struct Details &ob2){
    ob1.name = ob2.name;
    ob1.Age = ob2.Age;
    ob1.ArrivalDate = ob2.ArrivalDate;
    ob1.Room_No = ob2.Room_No;
    ob1.Address = ob2.Address;
    ob1.Goingto = ob2.Goingto;
    ob1.DischargeDate = ob2.DischargeDate;
    ob1.ComingFrom = ob2.ComingFrom;
}

// Helper Function for ChangeRooms
void SwapDetail(struct Details &ob1, struct Details &ob2)
{
    struct Details A;
    Assign(A, ob1);
    Assign(ob1, ob2);
    Assign(ob2, A);
    ob2.Room_No = ob1.Room_No;
    ob1.Room_No = A.Room_No;
}

// Helper function in Discharge Patient
void Swaps(struct Details &ob1, struct Details &ob2)
{
    struct Details A;
    Assign(A, ob1);
    Assign(ob1, ob2);
    Assign(ob2, A);
}

struct Details SortedArray[323];

bool myCompareOp(struct Details obj1, struct Details obj2)
{
    if ((obj1.name).compare(obj2.name) < 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Binary Search
int BinarySearchStruc(struct Details arr[], string x, int n)
{
    int lower = 0;
    int upper = n - 1;
    while (lower <= upper)
    {
        int mid = lower + (upper - lower) / 2;
        int res;
        if (x.compare(arr[mid].name) == 0)
            res = 0;
        if (res == 0)
        {
            arr[mid].displayInfo();
            return 1;
        }
        if (x.compare(arr[mid].name) > 0)
        {
            lower = mid + 1;
        }
        else
        {
            upper = mid - 1;
        }
    }
    cout << "Not found" << endl;
    return 0;
}

// Filled Rooms
int RoomFilled(struct Details arr[], int n)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].Age != 0 && arr[i].name != "0" && arr[i].Room_No != 0)
        {
            c = c + sizeof(arr[i]);
        }
    }
    c = c / sizeof(arr[0]);
    return c;
}

// Statistics Of filled Rooms :
void RoomStatus(struct Details arr[], int n)
{
    int c = RoomFilled(arr, n);
    cout << "____________________" << endl;
    cout << "Rooms Statistics" << endl;
    cout << "Filled Rooms :" << c << endl;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].Age != 0 && arr[i].name != "0" && arr[i].Room_No != 0)
        {
            cout << i + 89 << " ";
        }
    }
    cout << endl;
    cout << "Vacant Rooms :" << n - c << endl;
    for (int i = 0; i < n; i++)
    {
        if (i % 10 != 0)
        {
            if (arr[i].Age == 0 && arr[i].name == "0" && arr[i].Room_No == 0)
            {
                cout << i + 89 << " ";
            }
        }
        else
        {
            cout << endl;
            if (arr[i].Age == 0 && arr[i].name == "0" && arr[i].Room_No == 0)
            {
                cout << i + 89 << " ";
            }
        }
    }
    cout << endl;
    cout << "____________________" << endl;
}

// Add new entry :
int AddNew(struct Details arr[], int n)
{
    struct Details A;
    int c = RoomFilled(arr, n);
    if (c < n)
    {
        A.getName();
        A.getAge();
        A.getArrivalDate();
        A.getDischargeDate();
        A.getAddress();
        A.getComingFrom();
        A.getGoingTo();
        A.Room_No = c + 89;
        arr[c] = A;
        return 1;
    }
    else
    {
        cout << "Sorry Rooms are Full" << endl;
        return 0;
    }
}

// Add Multiple New Entries : AddNewMultiple()
void AddNewMultiple(struct Details arr[], int n)
{
    int c;
    cout << "Enter No. of Entries you want to Fill" << endl;
    cin >> c;
    cin.ignore();
    if (c > 0)
    {
        for (int i = 0; i < c; i++)
        {
            AddNew(arr, n);
        }
    }
    else
    {
        cout << "Invalid Input" << endl;
    }
}

// Display Details of All patients : DisplayAll()
void DisplayAll(struct Details arr[], int n)
{
    cout << "____________________" << endl;
    cout << "All Entries" << endl;
    int c = RoomFilled(arr, n);
    for (int i = 0; i < c; i++)
    {
        arr[i].displayInfo();
    }
}

// Change Rooms of Patients : ChangeRooms()
void ChangeRooms(struct Details arr[], int n)
{
    int c, d;
    cout << "____________________" << endl;
    cout << "Enter Room no. (89-411) of Patient 1 whose room you want to change" << endl;
    cin >> c;
    cin.ignore();
    cout << "Enter Room no. (89-411) of Patient 2 " << endl;
    cin >> d;
    cin.ignore();
    c = c - 89;
    d = d - 89;
    if (c < 0 || d < 0)
    {
        cout << "Invalid Room no" << endl;
    }
    else
    {
        SwapDetail(arr[c], arr[d]);
    }
    cout << "____________________" << endl;
}

// Search Patient Detail By Room : SearchByRoom()
void SearchByRoom(struct Details arr[], int n)
{
    int d;
    cout << "____________________" << endl;
    cout << "Enter Room no. of Patient you want to Search" << endl;
    cin >> d;
    cin.ignore();
    d = d - 89;
    if (d < 0)
    {
        cout << "Invalid Room no" << endl;
    }
    else
    {
        arr[d].displayInfo();
    }
}

// Discharge Patient by Room no.
int DischargePatient(struct Details arr[], int n)
{
    int d;
    cout << "____________________" << endl;
    cout << "Enter Room no. of patient you want to discharge " << endl;
    cout << "(According to discharge date of patient)" << endl;
    cin >> d;
    cin.ignore();
    d = d - 89;
    int c = RoomFilled(arr, n);
    if (d < 0 || d > c || c == 0)
    {
        cout << "Invalid Room no or Room not filled yet" << endl;
        cout << "____________________" << endl;
        return 0;
    }
    else
    {
        struct Details A;
        Assign(arr[d], A);
        cout << "Please fill Room no." << d + 89 << " Because it is vacant now" << endl;
    }
    cout << "____________________" << endl;
}

// Sorting Names Using Merge Sort
void SortNames(struct Details arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        SortedArray[i] = arr[i];
    }
    int c;
    c = RoomFilled(arr, n);
    sort(SortedArray, SortedArray + c, myCompareOp);
    DisplayAll(SortedArray, n);
}

// Search patient Details by name (Binary Search)
void SearchByName(struct Details arr[], int n)
{
    string x;
    cout << "____________________" << endl;
    cout << "Enter the Name you want to Search" << endl;
    cin >> x;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        SortedArray[i] = arr[i];
    }
    int c;
    c = RoomFilled(arr, n);
    sort(SortedArray, SortedArray + c, myCompareOp);
    BinarySearchStruc(SortedArray, x, c);
    cout << "____________________" << endl;
}
string RandomString(int n)
{
    int MAX = 26;
    char alphabet[MAX] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    string res = "";
    for (int i = 0; i < n; i++)
        res = res + alphabet[rand() % MAX];
    return res;
}
int RandomPositiveInt()
{
    int d;
    do
    {
        d = rand() % 45;
    } while (d <= 8);
    return d;
}
int RandomEntries(Details arr[], int n)
{
    int d;
    cout << "Enter the no. of Random Entries you want to add (Please enter positive integer)" << endl;
    cin >> d;
    cin.ignore();
    for (int i = 0; i < d; i++)
    {
        struct Details A;
        int c = RoomFilled(arr, n);
        if (c < n)
        {
            A.name = RandomString(6);
            A.Age = RandomPositiveInt();
            A.ArrivalDate = "0";
            A.DischargeDate = "0";
            A.Address = RandomString(10);
            A.ComingFrom = RandomString(8);
            A.Goingto = RandomString(8);
            A.Room_No = c + 89;
            arr[c] = A;
        }
        else
        {
            cout << "Sorry Rooms are Full" << endl;
            return 0;
        }
    }
}
void AddSpecific(Details arr[], int n)
{
    int d;
    cout << "Enter the Room no. you want to fill (should be in 89-411)" << endl;
    cin >> d;
    cin.ignore();
    d = d - 89;
    struct Details A;
    int c = RoomFilled(arr, n);
    if (c < n)
    {
        A.getName();
        A.getAge();
        A.getArrivalDate();
        A.getDischargeDate();
        A.getAddress();
        A.getComingFrom();
        A.getGoingTo();
        A.Room_No = d + 89;
        arr[d] = A;
    }
    else
    {
        cout << "Sorry Rooms are Full" << endl;
    }
}
void DischargeAll(Details arr[], int n)
{
    cout << "Discharging All ....." << endl;
    struct Details A;
    for (int i = 0; i < n; i++)
    {
        Assign(arr[i], A);
    }
    cout << "DONE" << endl;
    cout << "____________________" << endl;
}
