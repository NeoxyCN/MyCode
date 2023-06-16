import os

file_list=[]

for root,subDirs,files in os.walk("./"):
    for file in files:
        if file.endswith(".exe"):
            file_list.append(os.path.join(root,file))
exe_num=len(file_list)

if exe_num==0:
    print("未找到exe文件")
    exit()
else:
    print("共找到exe文件: ",exe_num)
for file in file_list:
    print(file.replace("/","\\",1))
user_input=input("是否删除文件？y/n:")

if user_input=="y":
    for file in file_list:
        os.remove(file)
    print("删除完毕，程序退出")
    exit()
elif user_input=="n":
    exit()