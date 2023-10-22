#include<iostream>
#include<dirent.h>
#include<string>
#include<cstring>
using namespace std; 

int main(){
    struct dirent *de;  
    DIR *dr = opendir(".");
    string IgnoreFile = ".exe";

    if (dr == NULL){
        printf("Could not open current directory");
        return 0;
    }
    while ((de = readdir(dr)) != NULL){
        const char *found = strstr(de->d_name, IgnoreFile.c_str());
        if (found){
            continue;
        }
        printf("%s\n", de->d_name);
    }
    closedir(dr);
    return 0;
}