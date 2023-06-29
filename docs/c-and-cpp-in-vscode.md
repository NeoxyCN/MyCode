# 如何使用vscode编写C/C++的代码？  
## 软件要求  
1. Visual Studio Code  
2. MSYS  
## 配置步骤  
### MSYS部分  
1. 首先下载安装MSYS  
2. 运行mingw64.exe，并在其中运行命令``pacman -S --needed base-devel mingw-w64-x86_64-toolchain``  
3.而后将mingw64路径```C:\msys64\mingw64\bin```添加至环境变量PATH中  
4.可通过执行```g++ --version```检查是否成功配置环境变量
### Visual Studio Code 部分
1.下载安装C/C++的插件  
2.而后按```Ctrl+Shift+B``选择g++.exe build active file（实际上此处只是为了选择合适的编译器，MSVC或者GNU之类的）  
这样便可以编译，但是我们如果单纯为了编译肯定不需要如此复杂，所以还需要进一步配置。  
3.配置launch.json，基本上可以直接复制，但是```"miDebuggerPath": "C:\\msys64\\mingw64\\bin\\gdb.exe",```此处需要修改为自己电脑上的GDB。  
4.配置tasks.json，我为了同时能够兼顾C和C++而修改了tasks.json，修改后需要重新配置``` "command": "C:\\msys64\\mingw64\\bin\\g++.exe"```部分的编译器路径。  
5.在需要切换编译器时则需要在launch.json中修改```"preLaunchTask": "c"```的参数。  
### 后记  
大体流程如上，因为某些原因并没有在完成后及时记录，所以可能存在部分错误，基本上按照自己电脑环境修改三个左右的参数即可完成配置。  