#lists all the files and directories
import os
loc = os.getcwd()
content = os.listdir(loc)

for i in content:
    print(i)