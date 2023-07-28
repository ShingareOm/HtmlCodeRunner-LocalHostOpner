# C Program for Starting Local Python HTTP Server

This C program named `HtmlCodeRunner-LocalHostOpener.c` starts a Python HTTP server in the background, serves files from the current directory, and opens the server's URL in the default web browser.

## Project Owner

- Name: Om Shingare
- GitHub: [ShingareOm](https://github.com/ShingareOm)

## Instructions

1. Ensure you have `Python` installed on your system. If you don't have it installed, download and install it from the official Python website (https://www.python.org/).

2. Compile the C program using a C compiler. For example, using `gcc`:

   ```bash
   gcc -o HtmlCodeRunner-LocalHostOpner HtmlCodeRunner-LocalHostOpner.c

3. Run the compiled program:

    ```bash
    ./HtmlCodeRunner-LocalHostOpner
    ```

4. The C program will start a Python HTTP server in the background and open the server's URL in your default web browser.

5. The browser will display the files from the current directory, served by the Python HTTP server.

## To access the server from other devices on the same network:

1. Linux: Open a web browser on another device and enter the IP address of your machine where the server is running, followed by the port number 8000. For example, http://192.168.1.100:8000. You can find your machine's IP address using the ifconfig command.

2. Windows: Open a web browser on another device and enter the IP address of your machine where the server is running, followed by the port number 8000. For example, http://192.168.1.100:8000. You can find your machine's IP address by opening a Command Prompt and running ipconfig.

3. To exit the program and gracefully close the Python server, press Enter in the terminal where the program is running.

## Making HtmlCodeRunner-LocalHostOpner Executable Globally
### For Windows

1. After compiling the C program and generating the HtmlCodeRunner-LocalHostOpner.exe executable, move the HtmlCodeRunner-LocalHostOpner.exe file to a directory where you keep your other executables (e.g., C:\Users\<username>\bin).

2. Add the directory path (e.g., C:\Users\<username>\bin) to the system's PATH environment variable:

    - Press `Win + R` to open the Run dialog box.
    - Type `sysdm.cpl` and press Enter to open the System Properties window.
    - Go to the "Advanced" tab and click on the "Environment Variables" button.
    - In the "System variables" section, find the "Path" variable, and click on the "Edit" button.
    - Click on the "New" button and add the path to the directory containing HtmlCodeRunner-LocalHostOpner.exe (e.g., C:\Users\<username>\bin).
    - Click "OK" to close all windows.
3. Now, you should be able to run HtmlCodeRunner-LocalHostOpner.exe from any directory in the Command Prompt or PowerShell without specifying the full path.

### For Linux

1. After compiling the C program and generating the HtmlCodeRunner-LocalHostOpner executable, move the HtmlCodeRunner-LocalHostOpner file to a directory where you keep your other executables (e.g., /usr/local/bin).

    - To move the file, you may need to use the sudo command to have the necessary permissions.

2. Add the directory path (e.g., /usr/local/bin) to the system's PATH environment variable:

    - Open a terminal and edit the .bashrc file (for Bash shell) or .zshrc file (for Zsh shell) using a text editor (e.g., nano, vim, or gedit).
    - Add the following line at the end of the file:
    
    ```bash
    export PATH="/usr/local/bin:$PATH"
    ```
    - Save and close the file.

3. To apply the changes, either restart the terminal or run the following command to reload the shell configuration:

    ```bash
    source ~/.bashrc   # For Bash
    source ~/.zshrc    # For Zsh
    ```
4. Now, you should be able to run HtmlCodeRunner-LocalHostOpner from any directory in the terminal without specifying the full path.

    With these steps, youll be able to run the HtmlCodeRunner-LocalHostOpner program globally from any directory on your system, making it more convenient to use.

### Notes
 - The Python HTTP server serves files from the current directory where the C program is executed.

 - This is a basic example and not intended for production use. It is suitable for simple development purposes.

 - The program uses platform-specific commands to start the server and open the web browser. It supports both Windows and Unix-like systems (e.g., Linux, macOS).

 - The program waits for a short period (2 seconds) after starting the server to ensure it fully initializes before opening the browser. For a more robust solution, you can implement better synchronization between the C program and the server.

## License
This C program is provided under the [MIT License](LICENSE).
