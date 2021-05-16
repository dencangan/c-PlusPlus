# healthAnalyser

Repository containing health-related scripts developed using C++.

Body Mass Index
- Accepts weight and height inputs with specified metrics (kg/lbs or cm/inch).

Basal Metabolic Rate
- Mifflin-St Jeor
- Revised Harris-Benedict Equation

Calorie counter
- Ideal body weight calculator
- Body fat calculator
- Food energy converter

### How to compile
In command line, enter "g++ -o <name-of-executable> script.cpp". Run it with "./<name-of-executable>".

### Extra Notes: Setting up C/C++ for Windows
1. Download the C/C++ compiler from [here](https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win32/Personal%20Builds/mingw-builds/installer/mingw-w64-install.exe/download). Note there are different types of compilers, the one specified in the link is minGW-w64.
2. Install the compiler to a location, ensure that you select the right settings when running the installation. i686 for 32 bit and x86_64 for 64 bit.
3. Make sure you configure your system variable path to include the path of installation, specifically pointing to the 'bin' folder. For example, C:/mingw-w64/bin.
4. Open up your command prompt and enter "g++ --version" or "gdb --version". If the command is unrecognised, the compiler is not installed correctly.
5. This is a good [guide](https://code.visualstudio.com/docs/cpp/config-mingw) to setting up C/C++ environment with Visual Studio Code as the IDE. You can find other tutorials for setting up C++ in different operating systems.
