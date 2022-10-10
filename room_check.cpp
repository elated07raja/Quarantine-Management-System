#include "room_check.h"
#include<unordered_map>
#include<iostream>
#include "Person.h"
#include "Covid_neg.h"
#include "Covid_pos.h"

bool room_check(int low,int limit,std::unordered_map<int,Person*> m){
 for(int i=low;i<=limit;i++){
    if(!m[i]) return true;
 }
 return false;
}
