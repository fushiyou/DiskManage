#include "include/DiskMng.h"
#include <stdlib.h>

int main()
{
    CDiskMng disk;
    printf("%d\n", disk.DestroyDisk(0));
    system("pause");
    return 0;
}