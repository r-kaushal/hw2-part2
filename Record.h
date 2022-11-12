#ifndef _RECORD_H_
#define _RECORD_H_

#include "ecs36b_Common.h"
#include "Person.h"
#include "JvTime.h"
#include "GPS_DD.h"
#include "Thing.h"


class Record{

    public:
    Person person1;
    Person person2;

    Thing thing1;
    Thing thing2;
    Thing thing3;
    Thing thing4;

    GPS_DD location;


    Record(Person, Thing);
    Record(Person, Thing, Thing);
    Record(Person, Person, GPS_DD);
    Record(Person,Person, GPS_DD, Thing, Thing,Thing);
    Json::Value dump2JSON(); 

};

#endif 
