# Dictionary is a Key value pair structure in Py, like objects in JS.
# In other languages dictionary is called Hash Map or Associative Array

students = {
    'name': 'Numan',
    'class': 12,
    'stream': 'Commerce',
}

# print(students['name'])    # Numan
# print(students.keys())     # ['name', 'class', 'stream']
# print(students.values())   # ['Numan', 12, 'Commerce']

# print(students['email'])    # Error occurred:- KeyError: 'email'

print(students.get('email', 'Data Not Found'))  # Data Not Found
print(students.get('stream', 'Data Not Found'))  # Commerce


