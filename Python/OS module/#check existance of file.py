#check existance of file

import os

filename = "text.txt"

s = "Does not exist" if filename not in os.listdir() else "File Exists"

print(s)