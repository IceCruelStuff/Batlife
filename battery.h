#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<unistd.h>

#ifdef LINUX
#include<dirent.h>
#include<linux/limits.h>
#include<regex.h>
#endif 

#define DATA_DIR = "sys/class/power_supply"

void display_battery();