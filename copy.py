import os
for file in os.listdir("ds_assign2"):
    if file.endswith(".cpp"):
        f = open("ds_assign2/"+file)
        c = f.read()
        f.close()

        f1 = open("all.txt", "a+")
        f1.write(file+"\n-------------------------------------------\n")
        f1.write(c)
        f1.close()
