#include "types.h"
#include "stat.h"
#include "user.h"

int 
main(int argc, char *argv[])
{
    int syscount = getreadcount();
    printf(1, "%d\n", syscount);
    exit();
}