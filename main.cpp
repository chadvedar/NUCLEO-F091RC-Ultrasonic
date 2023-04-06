#include "HC-SR04.h"
#include "mbed.h"

//echo    >> D6
//trigger >> D5
HCSR04 ultrasonic(D6, D5);

int main()
{
    while (true) {
        ultrasonic.reading();
        printf("%d\n", ultrasonic.getDistance());
    }
}

