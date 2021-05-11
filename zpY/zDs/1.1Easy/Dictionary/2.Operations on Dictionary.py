students = {
    'name': 'Numan',
    'class': 11,
    'stream': 'Commerce',
}

print('Original Student Dictionary')
print(students)

# Adding New Element
students['email'] = 'mdnmnahmed@gmail.com'
print('New Element Added')
print(students)

# Update an Element
students['class'] = 12
print('Updated class Element')
print(students)

# Delete an Element
print('Deleted Email Element')
students.pop('email')
print(students)

# Length of a Dictionary
print('Length of a Dictionary')
print(len(students))

