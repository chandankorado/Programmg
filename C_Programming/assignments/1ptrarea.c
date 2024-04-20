#include<stdio.h>

void areacir ( int r, float *a )
{
   *a = 3.14 * r * r ;
}
void main( )
{
   int radius ;
   float area ;
   printf ( "Enter radius of a circle " ) ;
   scanf ( "%d", &radius ) ;
   areacir ( radius, &area ) ;
   printf ( "Area = %f", area ) ;
}