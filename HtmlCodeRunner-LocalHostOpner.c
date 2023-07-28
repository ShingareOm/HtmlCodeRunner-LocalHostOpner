#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#include <sys/types.h>
#endif

int main() {
    char *command = (char *)malloc(sizeof(char) * 100);
    bool serverStarted = false;

    // Start Python HTTP server in the background
#ifdef _WIN32
    strcpy(command, "start /B python -m http.server");
#else
    strcpy(command, "python -m http.server &");
#endif
    system(command);
    serverStarted = true;
    system("cls");


    // Wait for a short period to ensure the server starts
#ifdef _WIN32
    Sleep(2000);
#else
    sleep(2);
#endif

    // Open the browser to the localhost address
#ifdef _WIN32
    strcpy(command, "start http://localhost:8000");
#else
    strcpy(command, "xdg-open http://localhost:8000 &");
#endif
    system(command);
    system("cls");
    // Wait for user input to exit
    printf("Press Enter to exit.\n");
    getchar();

    // Close the Python server gracefully
#ifdef _WIN32
    strcpy(command, "taskkill /f /im python.exe");
#else
    strcpy(command, "pkill -f 'python -m http.server'");
#endif
    system(command);
    system("cls");

    // Wait for the Python server to terminate
    if (serverStarted) {
#ifdef _WIN32
        Sleep(2000);
#else
        sleep(2);
#endif
    }
    system("cls");
    system("cls");
    free(command);
    return 0;
}
