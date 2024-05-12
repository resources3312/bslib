#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void check_root(){
  int uid = getuid();
  if(uid != 0){
     
    printf("Running program for root... \n");
    printf(" Quitting... \n");
    exit(0);
  } 
}

void getoutput(){
   system("uname > os.txt");
   FILE *file;
   char data[10];
   int n;
   file = fopen("os.txt", "r");
   n = fread(data, sizeof(char), 10, file);
   fclose(file);
   system("rm os.txt");
}

char readff(char * filename, int size){
  FILE *file;
  char data[size];
  int n;
 
  file = fopen(filename, "rb");
  n = fread(data, sizeof(char), size, file);
  fclose(file);
} 



void writeff(char * filename, char * text){
  FILE * file;
  file = fopen(filename,"wb"); 
  fprintf(file, text);
  fclose(file);
}



int main(){
  check_root();
  int i = 1;
  while(i <= 10){
    printf("Debugging... \n");
    i = i + 1;
  }
  printf(" Done \n");
  return 0;
}

