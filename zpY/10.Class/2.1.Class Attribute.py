class Employee:
    company = 'Google'


emp1 = Employee()
emp2 = Employee()

print(f'Before Edit : {Employee.company}')

#Updating Attribute
Employee.company = 'Amazon'
print(f'After Edit : {Employee.company}')