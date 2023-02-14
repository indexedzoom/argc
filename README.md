# Argc
A simple linux command line utility that prints the number of arguments given.

# Commands
1) `mkdir build`
2) `chmod +x sconfigure sbuild`
3) `./sconfigure`
4) `./sbuild`

# Command explanation
1) Create a build directory. `mkdir build`
2) On linux, run the command `chmod +x sconfigure sbuild` to change the sconfigure and sbuild files to executable.
3) Run the sconfigure file to create CMake files in the newly created build directory. `./sconfigure`
4) Run the sbuild file to install to the /usr/local/bin directory. `./sbuild`

Now argc should be able to run from anywhere.

# Usage
Argc is a simple program that prints out the arguments given and the amount of arguments in total.  For more usage on linux (I don't know for other platforms), use a command as an argument and surround it in \`\`.

# Example
argc \`ls\`
