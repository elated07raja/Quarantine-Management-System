# Quarantine Management System

Each quarantined person will be allotted a single room for his stay at the quarantine centre for the said period. All the rooms in the quarantined centre are single occupancy and the rooms are numbered from 89 to 411. Once the quarantined period is over, a quarantined person(s) are discharged from the quarantine centre after vacating his room. So, the figure of occupied rooms keeps on changing after a certain period of time. Subject to the availability of rooms in the quarantine centre, district administration allows a limited no. of passengers to the said facility. So , each day a limited no. of passengers are directed to the quarantine facility at NIT Silchar. The nodal officer who administers the quarantine centre has to keep tract of the records of the quarantined persons like the name of the person, address, age, arrival date, coming from, going to, allotted Room no, discharged date etc

### Assumptions

- Assuming out of maximum number of rooms alloted (room no. 1 to 500) , room no. 1-88 and 412-500 are already occupied , so we aren't involving those rooms.
- It has been assumed that any number of patients can be inputted into the database, but only a maximum of 500 patients will be allotted a room.
- No patient is allowed to discharge before his discharge date.
- If we want to use properly ledger then firstly discharge all then use it.