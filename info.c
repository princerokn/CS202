#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]){
    int c = argv[1][0] - '0';
        switch(c){
    case 1:
        printf(1, "Count of the processes in the system = %d\n", info(1));
        break;
    case 2:
        printf(1, "Count of the total number of system calls that the current process has made so far = %d\n", info(2));
        break;
    case 3:
        printf(1, "The number of memory pages the current process is using = %d\n", info(3));
        break;
        default:
        printf(1,"Wrong choice, select 1,2 or 3");
        break;
    }
        exit();
}
