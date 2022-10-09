# Quarantine Management System

Each quarantined person will be allotted a single room for his stay at the quarantine centre for the said period. All the rooms in the quarantined centre are single occupancy and the rooms are numbered from 89 to 411. Once the quarantined period is over, a quarantined person(s) are discharged from the quarantine centre after vacating his room. So, the figure of occupied rooms keeps on changing after a certain period of time. Subject to the availability of rooms in the quarantine centre, district administration allows a limited no. of passengers to the said facility. So , each day a limited no. of passengers are directed to the quarantine facility at NIT Silchar. The nodal officer who administers the quarantine centre has to keep tract of the records of the quarantined persons like the name of the person, address, age, arrival date, coming from, going to, allotted Room no, discharged date etc

___
## Assumptions

- Assuming out of maximum number of rooms alloted (room no. 1 to 500) , room no. 1-88 and 412-500 are already occupied , so we aren't involving those rooms.
- It has been assumed that any number of patients can be inputted into the database, but only a maximum of 500 patients will be allotted a room.
- No patient is allowed to discharge before his discharge date.
- If we want to use properly ledger then firstly discharge all then use it.

___

## Methods Used

**Statistics Of filled Rooms :**
If the user wants to get the status of rooms available this option can be used . This option gives the stats of number of Vacant Rooms available and number of Filled Rooms.

**Add Multiple New Entries :**
This option is used to add patients manually. First the user is asked for the number of patients to be added. Then for each patient, the name, address, age, source and destination is asked.

**Display Details of All patients :**
This function displays the entries of all the patients whose information have been entered.

**Change Rooms of Patients :**
If the user wants to swap two rooms , this option can be used . This allows the user to change the rooms of two patients , following the necessary conditions.

**Search Patient Detail By Room :**
If the user wants to search a patient’s details , this option can be used . This allows the user to get the patient’s detail , just by entering the room number.

**Discharge Patient by Room no. :**
If the user wants to discharge a specific patient, this option can be used. The user will be asked for the patient’s room number. The details are found, the room being occupied by the patient is made vacant again and the status of vacant room is updated

**Sorting Names Using Merge Sort :** If the user wants to sort the names of the patients , this option can be used.

**Search patient Details by name (Binary Search) :**
If the user wants to search a patient’s details , this option can be used . This allows the user to get the patient’s detail, just by entering his name.

**Adding new entry at specific room no. (Recommended after Discharge):**
If the user wants to add a new entry at a specific room , this option can be used( Specified room must be empty).

**Discharging all Patients:**
If under specific conditions for the user it is required to discharge all the patients , this option can be used .

**Random Entries:**
If the user wants to add random entries , this option can be used.
___