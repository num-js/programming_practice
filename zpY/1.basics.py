#program to find GCd of two numbers

num1 = float(input("Enter first number: "))
num2 = float(input("Enter second number: "))
i = 1
while(i <= num1 and i <= num2):
    if(num1 % i == 0 and num2 % i == 0):
        gcd = i
    i = i + 1
    
print("\n HCF of {0} and {1} = {2}".format(num1, num2, gcd))   # The format() method formats the specified value(s) and insert them inside the string's placeholder.
                                                               # The placeholder is defined using curly brackets: {}. Read more about the placeholders in the Placeholder section                                                                    below.
		                                                       # The format() method returns the formatted string.
