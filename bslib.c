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

#define red   "\x1B[31m"
#define green   "\x1B[32m"
#define yellow   "\x1B[33m"
#define blue   "\x1B[34m"
#define purple   "\x1B[35m"
#define cyan   "\x1B[36m"
#define white   "\x1B[37m"
#define RESET "\x1B[0m"

#ifdef _WIN32
  #define OS_NAME "Windows"
#elif __ANDROID__
  #define OS_NAME "Android"
#elif __linux__
  #define OS_NAME "Linux"
#elif  _AIX
  #define OS_NAME "IBM AIX" // wHAT IS IT&!
#elif BSD 
  #define OS_NAME "BSD"

#elif __hpux
  #define OS_NAME "HP-UX"



#elif __sun && __SVR4
  #define OS_NAME "Solaris"
#elif __APPLE__ && __MACH__ 
  #define OS_NAME "Apple" 
#else 
  #define OS_NAME "Null"
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

void readff(char * filename, int size, int i){
  FILE *file;
  char data[size];
  int n;
  file = fopen(filename, "rb");
  n = fread(data, sizeof(char), size, file);
  fclose(file);
  if(i != 0){
    printf("%s", data);
  }
  

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



