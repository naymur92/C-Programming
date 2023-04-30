// implements a phone book without struct
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void){
  // array of strings
  string names[] = {"Naymur", "Kamrul"};
  string numbers[] = {"01737036324", "01558981652"};

  string name = get_string("Name: ");

  for(int i = 0; i < 2; i++){
    if(strcmp(names[i], name) == 0){
      printf("Found %s\n", numbers[i]);
      return 0;
    }
  }
  printf("Not found\n");
  return 1;
}