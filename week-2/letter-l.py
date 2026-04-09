def secret_shape(n):
    for i in range(1,n+1):
        for j in range(1,n+1):
            if (j == 1 or i == n):
                print("*",end="")
            else:
                print(" ",end="")
        print()

for i in range(1,6):
    secret_shape(i)
    print()
