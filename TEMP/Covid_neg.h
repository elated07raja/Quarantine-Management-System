#ifndef COVID_NEG_H
#define COVID_NEG_H
#include<string>
#include "Person.h"
class Covid_neg : public Person
{
    public:
        Covid_neg();
        Covid_neg(std::string name,std::string address,int age,int room_no,int floor);
        virtual void get_info();
        virtual void fns();
        virtual ~Covid_neg();

    protected:

    private:
};

#endif // COVID_NEG_H
