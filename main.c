#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#define delay(ms) Sleep(ms)
#else
#include <unistd.h>
#define delay(ms) usleep((ms) * 1000)
#endif

int main()
{
    int i;

    for (i = 1; i <= 120; i++)
    {
        printf("I LOVE YOU <3 ");
        fflush(stdout);
        delay(200);
    }

    return 0;
}
