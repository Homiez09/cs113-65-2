#include <stdio.h>

struct complex {
  float a, b;
};

struct complex add_complex(struct complex C,struct complex D )
{
  struct complex result;
  result.a = C.a + D.a;
  result.b = C.b + D.b;
  return result;
}

struct complex multiply_complex(struct complex C,struct complex D )
{
  struct complex result;
  result.a = C.a*D.a - C.b*D.b;
  result.b = C.a*D.b + C.b*D.a;
  return result;
}

void print_complex(char *str,struct complex result)
{ 
  if (result.a && result.b ){
      if(result.b > 0){
        printf("%s%.1f + %.1fi\n", str, result.a, result.b);
      }else if(result.b < 0){
        printf("%s%.1f - %.1fi\n", str, result.a, result.b*(-1));
      }else if(result.a){
        printf("%s%.1f\n", str, result.a);
      }else if(result.b) {
        printf("%s%.1fi\n", str, result.b);
      }
  }else{
      if(result.a){
        printf("%s%.1f\n", str, result.a);
      }else if(result.b) {
        printf("%s%.1fi\n", str, result.b);
      }else{
        printf("%s0.0\n", str);
      }
  }
}


int main()
{
  struct complex C,D,E,F;
  printf("Enter C: ");
  scanf("%f %f",&C.a ,&C.b );
  
  printf("Enter D: ");
  scanf("%f %f",&D.a ,&D.b );

  E = add_complex(C, D);
  F = multiply_complex(C, D);

  print_complex("C + D = ", E);
  print_complex("C x D = ", F);

  return 0;
}
