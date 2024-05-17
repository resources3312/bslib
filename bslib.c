/* 
    I writed this library only because I
    hate rewrite usually functions example:
    clear() or check_root(), something function
    I put from Python3, just because they cool,
    and in C not analog functions
    Coded by: ViCoder32                
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#ifdef _WIN32
  #define OS_NAME "win"
#else
  #define OS_NAME "unix"
#endif 


void clear(){
  if(OS_NAME == "win"){
    system("cls");
  }
  else{
    system("clear");
    }
  

  
}
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

void readff(char * filename, int size){
  FILE *file;
  char data[size];
  int n;
 
  file = fopen(filename, "rb");
  n = fread(data, sizeof(char), size, file);
  fclose(file);
} 

void ostype(){
  printf("%s", OS_NAME); // I`am genuis, i khow :>>
  }
  

void writeff(char * filename, char * text){
  FILE * file;
  file = fopen(filename,"wb"); 
  fprintf(file, text);
  fclose(file);
}



int main(){
  ostype();
  return 0;
}

