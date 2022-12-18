#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myhead.h"
int main(int argc, char **argv){
  
  if((argc >1)&&(argv[1][0] == '-')){
    switch(argv[1][1]){
    case 'h':
      displayallhelp();
      break;
    case 's':
      stringinfo();
      break;
    case 't':
      uml();
      break;
    case 'g':
      gdbhelp();
      break;
    case 'd':
      mixed();
      break;
    case 'm':
      mallochelp();
      break;
    case 'f':
      functionarg();
      break;
    case 'b':
      tentamen();
      break;
    case 'l':
      classes();
      break;
    default:
      printf("something went wrong, case does not exist");
      break;
    }
  }

  return 0;
}

 
void displayallhelp(){
  FILE *fp;
  char c;
  fp = fopen("/home/shalle/OwnManual/textfiler/displayinfo.txt","r");

  if (fp == NULL) {
        perror("Error while opening the file.\n");
        exit(EXIT_FAILURE);
  }
  c = fgetc(fp);
  while(c != EOF){
    printf("%c", c);
    c = fgetc(fp);
  }
  fclose(fp);
}
void uml(){
  FILE *fp;
  char c;
  fp = fopen("/home/shalle/OwnManual/textfiler/uml.txt","r");

  if (fp == NULL) {
        perror("Error while opening the file.\n");
        exit(EXIT_FAILURE);
  }
  c = fgetc(fp);
  while(c != EOF){
    printf("%c", c);
    c = fgetc(fp);
  }
  fclose(fp);
}
void stringinfo(){
  system("gedit /home/shalle/OwnManual/textfiler/strings.txt");
}
void gdbhelp(){
    FILE *fp;
    char c;
    fp = fopen("/home/shalle/OwnManual/textfiler/GDB.txt","r");

    if (fp == NULL) {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
    }
    c = fgetc(fp);
    while(c != EOF){
      printf("%c", c);
      c = fgetc(fp);
    }
    fclose(fp);
}
void mixed(){
  system("gedit /home/shalle/OwnManual/textfiler/mixedsolutions.txt");
}
void mallochelp(){
  system("gedit /home/shalle/OwnManual/textfiler/malloc.txt"); 
}
void functionarg(){
  system("gedit /home/shalle/OwnManual/textfiler/functions.txt");
}
void tentamen(){
  FILE *fp;
    char c;
    fp = fopen("/home/shalle/OwnManual/textfiler/tentamenupp.txt","r");

    if (fp == NULL) {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
    }
    c = fgetc(fp);
    while(c != EOF){
      printf("%c", c);
      c = fgetc(fp);
    }
    fclose(fp); 
}
void classes(){
  system("gedit /home/shalle/OwnManual/textfiler/classer.txt"); 
}



