#include "Person.h"
#include<iostream>
#include<string>
Person::Person()
{
    //ctor
}

Person::Person(std::string name,std::string address,int age,int room_no,int floor){
  this->name=name;
  this->address=address;
  this->age=age;
  this->room_no=room_no;
  this->floor=floor;
}

void Person::get_info(){
   std::cout<<"name"<<" "<<name<<std::endl;
   std::cout<<"address"<<" "<<address<<std::endl;
   std::cout<<"age"<<" "<<age<<std::endl;
   std::cout<<"room_no"<<" "<<room_no<<std::endl;
   std::cout<<"floor"<<" "<<floor<<std::endl;
}

std::string Person::get_name(){
    return name;
}

Person::~Person()
{
    //dtor
}
