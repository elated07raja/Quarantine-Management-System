#include "Covid_neg.h"
#include<string>
#include<iostream>
#include "Person.h"
Covid_neg::Covid_neg()
{
    //ctor
}

void Covid_neg::fns(){

}

Covid_neg::Covid_neg(std::string name,std::string address,int age,int room_no,int floor)
:Person{name,address,age,room_no,floor}
{

}

void Covid_neg::get_info(){
std::cout<<"the person is covid negative"<<std::endl;
Person::get_info();
}

Covid_neg::~Covid_neg()
{
    //dtor
}
