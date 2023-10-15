// Author: Dinh Cong Bang from Viet Nam
#ifndef _MAVLINK_PARSER_H
#define _MAVLINK_PARSER_H
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif
typedef enum COPTER_MODE
{
   COPTER_MODE_STABILIZE=0,
   COPTER_MODE_ACRO=1,
   COPTER_MODE_ALT_HOLD=2,
   COPTER_MODE_AUTO=3,
   COPTER_MODE_GUIDED=4,
   COPTER_MODE_LOITER=5,
   COPTER_MODE_RTL=6,
   COPTER_MODE_CIRCLE=7,
   COPTER_MODE_LAND=9,
   COPTER_MODE_DRIFT=11,
   COPTER_MODE_SPORT=13,
   COPTER_MODE_FLIP=14,
   COPTER_MODE_AUTOTUNE=15,
   COPTER_MODE_POSHOLD=16,
   COPTER_MODE_BRAKE=17,
   COPTER_MODE_THROW=18,
   COPTER_MODE_AVOID_ADSB=19,
   COPTER_MODE_GUIDED_NOGPS=20,
   COPTER_MODE_SMART_RTL=21,
   COPTER_MODE_ENUM_END=22
} COPTER_MODE;

typedef enum PLANE_MODE
{
   PLANE_MODE_MANUAL=0,  
   PLANE_MODE_CIRCLE=1,  
   PLANE_MODE_STABILIZE=2,  
   PLANE_MODE_TRAINING=3,  
   PLANE_MODE_ACRO=4,  
   PLANE_MODE_FLY_BY_WIRE_A=5,  
   PLANE_MODE_FLY_BY_WIRE_B=6,  
   PLANE_MODE_CRUISE=7,  
   PLANE_MODE_AUTOTUNE=8,  
   PLANE_MODE_AUTO=10,  
   PLANE_MODE_RTL=11,  
   PLANE_MODE_LOITER=12,  
   PLANE_MODE_TAKEOFF=13,  
   PLANE_MODE_AVOID_ADSB=14,  
   PLANE_MODE_GUIDED=15,  
   PLANE_MODE_INITIALIZING=16,  
   PLANE_MODE_QSTABILIZE=17,  
   PLANE_MODE_QHOVER=18,  
   PLANE_MODE_QLOITER=19,  
   PLANE_MODE_QLAND=20,  
   PLANE_MODE_QRTL=21,  
   PLANE_MODE_QAUTOTUNE=22,  
   PLANE_MODE_ENUM_END=23,  
} PLANE_MODE; 

void* mavlink_handler(void* arg);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif