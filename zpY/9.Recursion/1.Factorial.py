def printFactorial(num):
    if(num==1):
        return 1
    
    return num * printFactorial(num-1)



print(printFactorial(3))