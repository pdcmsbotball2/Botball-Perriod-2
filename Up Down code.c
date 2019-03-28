#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    enable_servo(0);
    set_servo_position(0,2000);
    msleep(10000);
    enable_servo(0);
    set_servo_position(0,888);
    msleep(1000);
    return 0;
}
