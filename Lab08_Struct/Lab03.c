#include <stdio.h>

struct vector {
  float x;
  float y;
  float z;
};

int main()
{ 
  struct vector u,v;
  float ru,rx,rv;
  printf("Enter u: ");
  scanf("%f %f %f",&u.x,&u.y,&u.z);
  printf("Enter v: ");
  scanf("%f %f %f",&v.x,&v.y,&v.z);
  ru = ((u.y*v.z) - (u.z*v.y));
  rx = ((u.z*v.x) - (u.x*v.z));
  rv = ((u.x*v.y) - (u.y*v.x));
  printf("u x v = %.1f %.1f %.1f",ru,rx,rv);
  
  return 0;
}