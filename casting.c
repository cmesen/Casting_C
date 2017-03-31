
 /*prueba de casting en c*/

 #include <stdio.h>

int main (){
 int a = 10;
 int b = 5;
 float c;
 
 c = a/b;

 printf("prueba casting en C!\n");

 printf("Sin casting: %i entre %i = %f\n",a,b,c);

 c = (float)a/b;

 printf("Con casting: %i entre %i = %f\n",a,b,c);

}
