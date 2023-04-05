#include "HC-SR04.h"
#include "mbed.h"

//echo    >> D5
//trigger >> D6
HCSR04 ultrasonic(D5, D6);

int main()
{
    while (true) {
        ultrasonic.reading();
        printf("%d\n", ultrasonic.getDistance());
    }
}

