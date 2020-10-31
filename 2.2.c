#include<stdlib.h> /*needed to define exit()*/
#include<unistd.h> /*needed for k() and getpid()*/
#include<stdio.h> /*needed for printf()*/
#include<sys/wait.h>

int main(int argc, char **argv){
         int pid;       /*process ID*/
@@ -12,6 +13,7 @@ int main(int argc, char **argv){
                       break;

         default: /*a fork returns a pid to the parent*/
                  wait(NULL);
                  printf("I am the parent process: pid=%d,child pid%d\n",getpid(),pid);
                  break;
