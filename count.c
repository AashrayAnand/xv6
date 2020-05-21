#include "types.h"
#include "stat.h"
#include "user.h"

int 
main(int argc, char *argv[])
{
    int syscount = count();
    printf(1, "%d\n", syscount);
    exit();
}