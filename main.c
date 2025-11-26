#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main ()
{
  while(1) {
    time_t rawtime;
    struct tm * timeinfo;
    time (&rawtime);
    timeinfo = localtime (&rawtime);

    printf ("%02d:%02d:%02d", timeinfo->tm_hour, timeinfo->tm_min, timeinfo->tm_sec);

    sleep(1);
  }

  return 0;
}
