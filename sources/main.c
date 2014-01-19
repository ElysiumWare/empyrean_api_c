#include <stdio.h>
#include <libssh/libssh.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef struct{
    int screenWidth;
    int screenHeight;
}eapi_screenInfo;

typedef struct{
    char status;
    char *username;
    char *password;
    char *fullname;
}eapi_user;

eapi_screenInfo eapi_screen_size;

int eapi_init(int eapi_skip_dirs){
    if(eapi_skip_dirs != 1){
        chdir("..");
        chdir("..");
    }
    return 0;
}

int eapi_connect(){
    return 0;
}

int eapi_get_screen_size(char emp_dimension){
    FILE *eapi_screenget;
    eapi_screenget = fopen("screen.sys", "r");
    if(eapi_screenget == 0){
        return -1;
    }
    fread(&eapi_screen_size, sizeof(eapi_screenInfo), 1, eapi_screenget);
    if(emp_dimension == 'w'){
        fclose(eapi_screenget);
        return eapi_screen_size.screenWidth;
    }
    if(emp_dimension == 'h'){
        fclose(eapi_screenget);
        return eapi_screen_size.screenHeight;
    }
    fclose(eapi_screenget);
    return -1;
}
