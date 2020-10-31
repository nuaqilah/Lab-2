#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>

int main(void) {
@@ -14,6 +15,7 @@ int main(void) {
         else {
               printf("Parent process => PID=%d\n", getpid());
               printf("Waiting for child processes to finish...\n");
               wait(NULL);
               printf("child process finished.\n");
         }
        }
       return EXIT_SUCCESS;
}
