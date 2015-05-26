#include <stdio.h>


void bbb(char ** a){
    *a="tera";

}
void getAverage(int *arr, int size)
{
  //arr[0]=11;
}

int main ()
{
   /* an int array with 5 elements */
   int balance[5] = {1000, 2, 3, 17, 50};
   double avg;
   char *s = "mera";

   /* pass pointer to the array as an argument */
   getAverage( balance, 5 ) ;
   //char *p= bbb(s);
    bbb(&s);
   /* output the returned value  */
    printf("Average value is: %d\n %s", balance[0],s );

   return 0;
}


