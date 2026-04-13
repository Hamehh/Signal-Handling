# Signal-Handling

SIGTERM showcases a graceful shutdown request to terminate
g++ -o sigterm_run SIGTERM.cpp
./sigterm_run

Enter"kill -SIGTERM $(pgrep sigterm_run" in seperate terminal to send the signal.

SIGINT is an infinite loop example that sends a SIGINT signal to the process
g++ -o sigint_run SIGINT.cpp
./sigint_run

CTRL + c for signal 2 
