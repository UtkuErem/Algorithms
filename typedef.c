#include <stdio.h>
#include <string.h>
 
typedef struct Cars {
   char brand[50];
   char model[50];
   char color[100];
   int chassis_no;
} Car;
 
int main( ) {

   Car car;
 
   strcpy( car.brand, "Jaguar");
   strcpy( car.model, "F-Pace 2.0D"); 
   strcpy( car.color, "Red");
   car.chassis_no = 100042309;
 
   printf( "Car Brand : %s\n", car.brand);
   printf( "Car Model : %s\n", car.model);
   printf( "Car Color : %s\n", car.color);
   printf( "Chassis No : %d\n", car.chassis_no);

   return 0;
}
