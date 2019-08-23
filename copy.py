for i in "abcdefghijklmnop":
    f = open("java_assignment2/"+i+".java")
    c = f.read()
    f.close()

    f1 = open("all.txt", "a+")
    f1.write(c)
    f1.close()
