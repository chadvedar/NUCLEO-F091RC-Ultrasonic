#include "HC-SR04.h"
#include "mbed.h"

HCSR04 ultrasonic(D6, D7);

int main()
{
    while (true) {
        ultrasonic.reading();
        printf("%d\n", ultrasonic.getDistance());
    }
}

