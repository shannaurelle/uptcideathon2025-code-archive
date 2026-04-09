def secret_shape(n):
    for i in range(1,2*n):
        for j in range(1,2*n):
            if (i == n or j == n):
                print("*",end="")
            elif (j < n):
                print(" ",end="")
        print()

for i in range(1,6):
    secret_shape(i)
    print()
