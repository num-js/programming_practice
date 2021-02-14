row = 5

for i in range(row):
    print('   ' * (row-i-1), end="")
    print(' * ' * (2*i+1))