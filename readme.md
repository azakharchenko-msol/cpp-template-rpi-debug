# General info
This is cmake c++ template app for raspberry pi cross compiling and remote debugging in visual studio code
# Quickstart

## Install required software:
1. install cross compilers 
- g++-arm-linux-gnueabihf
- gcc-arm-linux-gnueabihf
- g++-aarch64-linux-gnu
- gcc-aarch64-linux-gnu
2. Install gdb
- gdb-multiarch
3. Install ssh rsync sshpass

ubuntu/debian installation command:
```
sudo apt-get install g++-arm-linux-gnueabihf \ 
            g++-arm-linux-gnueabihf \
            gcc-aarch64-linux-gnu \
            g++-aarch64-linux-gnu \
            gdb-multiarch \
            rsync \
            sshpass
```
## Configure raspberry pi
1. install gdb
## Configure vscode
1. rename `settings.example.json` to `settings.json`, input required info. Make sure raspberry pi is accessible by ssh with entered credentials
2. install recommended vscode extensions "Beyond gdb", "Cmake tools"
3. run cmake command:
```
cmake -DCMAKE_BUILD_TYPE:STRING=Debug -DCMAKE_C_COMPILER:FILEPATH=/usr/bin/arm-linux-gnueabihf-gcc -DCMAKE_CXX_COMPILER:FILEPATH=/usr/bin/arm-linux-gnueabihf-g++ -Bbuild -G Ninja
```
note: the compiler can be switched in "Cmake tools" panel, no need to run cmake manually then

4. add breakpoints and press "play" button!