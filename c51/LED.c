#include <reg52.h>
sbit RED_LED = P1^0;
sbit GREEN_LED = P1^1;
sbit YELLOW_LED = P1^2;
sbit BLUE_LED = P1^3;
sbit SWITCH_3 = P3^0;
sbit SWITCH_4 = P3^1;
sbit SWITCH_5 = P3^2;
sbit SWITCH_6 = P3^3;



void main(){
    int red_is_light = 0;
    while(1){
		RED_LED = SWITCH_3;
        GREEN_LED = SWITCH_4;
        YELLOW_LED = SWITCH_5;
        BLUE_LED = SWITCH_6;
    }
}
