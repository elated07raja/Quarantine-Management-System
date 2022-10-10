#include "Covid_pos.h"
#include "Person.h"
#include<iostream>
#include<string>
Covid_pos::Covid_pos()
{
    //ctor
}

void Covid_pos::fns(){
    //override
}

Covid_pos::Covid_pos(std::string name,std::string address,int age,int room_no,int floor,std::string viral_strain)
:Person{name,address,age,room_no,floor}
{
this->viral_strain=viral_strain;
}

void Covid_pos::get_info(){
    std::cout<<"the person is covid positive"<<std::endl;
    Person::get_info();
    std::cout<<viral_strain<<std::endl;
}

Covid_pos::~Covid_pos()
{
    //dtor
}
