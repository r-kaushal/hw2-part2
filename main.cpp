#include "ecs36b_Common.h"
#include "Person.h"
#include "JvTime.h"
#include "GPS_DD.h"
#include "Thing.h"
#include "Record.h"

main(){
    GPS_DD littleRedLocation("Litle Red Riding Hood's home");
    Person dearLittleGirl("Little Red Riding Hood",littleRedLocation);
    std::cout << dearLittleGirl.dump2JSON();
}