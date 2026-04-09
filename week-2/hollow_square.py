def secret_shape(n):
    for i in range(1,2*n):
        for j in range(1,2*n):
            if (i == 1 or j == 1 or i == (2*n-1) or j == (2*n-1)):
                print("*",end="")
            else:
                print(" ",end="")
        print()
# code for testing
for i in range(1,6):
    secret_shape(i)
    print()
