class Employee:
    company = 'Google'


emp1 = Employee()
emp2 = Employee()

print(f'Class Company Attribute : {Employee.company} \n')

print(f'Emp1 Before Edit : {emp1.company}')
#Updating Attribute
emp1.company = 'Amazon'
print(f'Emp1 After Edit : {emp1.company}')


print(f'Emp2 Before Edit : {emp2.company}')
#Updating Attribute
emp2.company = 'Facebook'
print(f'Emp2 After Edit : {emp2.company}')