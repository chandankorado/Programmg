file = open("f1.txt",'r')
small = file.readline()
upp = file.readline()
symbol = file.readline()
num = file.readline()

file1  = open("small.txt","a")
file1.writelines(small)

#print(s)
file.close()
file1.close()
