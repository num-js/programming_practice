num = int(input('Enter the Number:- '))

def fact(n):
    factorial = 1;
    for i in range(1, n+1):
        factorial = factorial * i
    # print(f"Factorial of {n} is: ", factorial)
    return factorial


factor = fact(num)
print(factor)
