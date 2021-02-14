num = int(input("Enter the Number: "))

isPrime = True

for no in range(2, num):
    if num % no == 0:
        isPrime = False
        break

if(isPrime):
    print(f"{num} is Prime")
else:
    print(f"{num} is Not Prime")
