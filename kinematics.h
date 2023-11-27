#include <stdio.h>


//average speed function

void avg_speed(double distance,double time)
{

//Checking if time is zero or not

 if (time == 0)
 {
  printf("Can't divide by zero\n");
 }

//calculating average speed

 float speed = distance / time;
 printf("%f\n",speed);

}

//average velocity function

void avg_velocity(double displacement,double time)
{

//checking if time is zero or not

 if (time == 0)
 {
  printf("Can't divide by zero\n");
 }

//calculating average velocity

 float velocity = displacement / time;
 printf("%f\n",velocity);

}
