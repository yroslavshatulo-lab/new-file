#include <stdio.h>

int main () {
   int age;
    int game;
   char name[100];
   printf("enter your name: ");
   scanf("%s", name);
   printf("enter your age: ");
   scanf("%d", &age);
   if (age >= 18) {
      printf("you are adult.\n");
   }  else {
      printf("you are under 18.\n");
   }
   printf("enter your game: ");
   scanf("%d", &game);
   printf("hello %s", name);
   printf("yuor are %d years old\n", age);
   printf(" you play %d games\n", game);
   

   return 0;
}