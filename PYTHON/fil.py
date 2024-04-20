file= open("f1.txt",'r')
print(file.tell())

print(file.read())
#print(file.seek(3,0)) # size, where

file= open("f1.txt",'a')
#sfile.write("\nhow are you man!")
#print(file.writeline("\n wass up"))
file= open("f1.txt",'r')
print(file.readline())
print(file.readline())
file.close()

file = open("fill.py",'w')
file.write("print'('this  python file \n created by file handling')")
