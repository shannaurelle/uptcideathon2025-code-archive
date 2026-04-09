def secret_shape(n):
    for i in range(1,n+1):
        end = i+1 if n > 1 else i
        for j in range(1,end+1):
            print("*",end="")
        print()
# code for testing
for i in range(1,6):
    secret_shape(i)
    print()
