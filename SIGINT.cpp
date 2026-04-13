#include <csignal>
#include <iostream>
#include <unistd.h>
using namespace std;

bool running = true;

void signal_handler(int signum)
{
    running = false;
}

int main()
{
    if (signal(SIGINT, signal_handler) == SIG_ERR)
    {
        cerr << "Failed to install SIGINT handler\n";
        return 1;
    }

    while (running)
    {
        cout << "Running...\n";
        sleep(1);
    }

    printf("\nSaving and exiting!\n");
    fflush(stdout);
}
