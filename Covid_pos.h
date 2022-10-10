#ifndef COVID_POS_H
#define COVID_POS_H
#include "Person.h"
#include<string>

class Covid_pos : public Person
{
    public:
        virtual void fns();
        Covid_pos();
        Covid_pos(std::string name,std::string address,int age,int room_no,int floor,std::string viral_strain);
        virtual void get_info();
        virtual ~Covid_pos();

    protected:

    private:
        std::string viral_strain;
};

#endif // COVID_POS_H

