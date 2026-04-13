#include <csignal>
#include <iostream>
using namespace std;

void signal_handler(int signum)
{
    printf("Caught signal %d\n", signum);
    fflush(stdout);
}

int main()
{
    if (signal(SIGTERM, signal_handler) == SIG_ERR)
    {
        cerr << "Failed to install SIGTERM handler\n";
        return 1;
    }

    cout << "Waiting for SIGTERM...\n";

    while (true)
    {
        pause();
    }
}
