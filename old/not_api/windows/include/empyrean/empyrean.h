#include <libssh/libssh.h>
#include <elib.h>
#include <stdio.h>
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

int eapi_init(void){
    chdir("..");
    chdir("..");
    return 0;
}

int eapi_connect(void){
    return 0;
}

eapi_screenInfo eapi_get_screen_size(void){
    FILE *eapi_screenget;
    eapi_screenget = fopen("screen.sys", "r");
    if(eapi_screenget == 0){
        eapi_screen_size.screenWidth = 0;
        eapi_screen_size.screenHeight = 0;
        return eapi_screen_size;
    }
    fread(&eapi_screen_size, sizeof(eapi_screenInfo), 1, eapi_screenget);
    fclose(eapi_screenget);
    return eapi_screen_size;
}
