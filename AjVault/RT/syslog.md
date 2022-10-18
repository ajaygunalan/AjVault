[Video](https://www.coursera.org/lecture/real-time-project-embedded-systems/code-walk-through-demonstration-of-syslog-for-timing-analysis-tezyF)

All syslog output goes to `/var/log/syslog`. To view the output as your RT applicaiton is running, you can just tail the log as follows: `tail -f /var/log/syslog`

`Syslog` is more efficient than `printf` and causes less potential for **blocking** in the middle of your service execution.  Use it instead of `printf` and it is simpler and easier to use than [ftrace](https://elinux.org/Ftrace) (although ftrace is ideal, it is harder to learn and master). So, syslog is a nice compromise between efficent software-in-circuit tracing and printf.

```C
#include <syslog.h>
#include <sys/time.h>

int main(void)
{
    struct timeval tv;

    gettimeofday(&tv, (struct timezone *)0);
    syslog(LOG_CRIT, "My log message test @ tv.tv_sec %ld, tv.tv_usec %ld\n", tv.tv_sec, tv.tv_usec);
    gettimeofday(&tv, (struct timezone *)0);
    syslog(LOG_CRIT, "My log message test @ tv.tv_sec %ld, tv.tv_usec %ld\n", tv.tv_sec, tv.tv_usec);

    return 0;
}
```