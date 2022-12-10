// Given a time(hours as HH and minutes as MM), determine the smaller angle between the two hands of a clock showing the time and print it.

// Input
// The input will contain two integers : HH(0 \le H < 120≤H < 12) and MM(0 \le M < 600≤M < 60).

// Output
// Print the angle in degrees(positive and accurate to 10 ^ { -4 } 10 −4).

// Sample Input
// 10 15

// Sample Output
// 142.5000000

#include <stdio.h>

int main()
{
    int h, m;
    float angle;
    scanf("%d %d", &h, &m);
    angle = (h * 30) + (m * 0.5) - (m * 6);
    if (angle < 0)
    {
        angle = angle * -1;
    }
    if (angle > 180)
    {
        angle = 360 - angle;
    }
    printf("%.7f", angle);
    return 0;
}