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

char * current_time(){
  time_t tm = time(NULL);
  char * out = (char *)malloc(100);
  strcpy(out, ctime(&tm));

  return out;
}


void clear(){
  if(OS_NAME == "Windows"){
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




char * getoutput(char * com){
  FILE *file;
  char *buffer = (char *)malloc(1024);
  file = popen(com, "r");
  if(file == NULL){
    fputs("Error to run command, try again",stderr);
  }
  else{
    while(fgets(buffer, sizeof(buffer), file) != NULL){
    
    }
    pclose(file);
  }
  return buffer;
}

char * readff(char * filename, int * size){
  FILE *file;
  char data[size];
  char * buffer = (char *)malloc(sizeof(data));
  file = fopen(filename, "rb");
  if(file == NULL){
    fputs("File the void, stopping...",stderr);
  }
  else{
    while(fgets(buffer, sizeof(buffer), file)){

    } 
    pclose(file);
    }
    return buffer;

} 

char * ostype(){
  char buf[30];
  char *buffer = (char *)malloc(sizeof(buf)); 
  buffer = OS_NAME;

  return buffer; 
  }
  

void writeff(char * filename, char * text){
  FILE * file;
  file = fopen(filename,"wb"); 
  fprintf(file, text);
  fclose(file);
}



