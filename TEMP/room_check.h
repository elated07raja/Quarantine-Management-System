#ifndef ROOM_CHECK_H
#define ROOM_CHECK_H
#include<unordered_map>
#include<iostream>
#include "Person.h"
#include "Covid_neg.h"
#include "Covid_pos.h"

bool room_check(int low,int limit,std::unordered_map<int,Person*> m);

#endif // ROOM_CHECK_H

