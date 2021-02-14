dict1 = {
    "name" : "Numan",
    "pro" : 'Full Stack Dev',
    'marks': [7.86, 7.69, 6.68, 8.86, 9.93],
    'lngs' : ['React', 'Node', 'JS', 'PY', 'C++'],
    'projects' : {
        'personal': 'Noogle Contacts',
        'Profetional' : 'Club Landing Page'
    }
}

print(dict1)
print(dict1['name'])
print(dict1["pro"])
print(dict1["marks"])
print(dict1["lngs"][:4])
print(dict1["projects"]['personal'])
print(dict1["projects"]['Profetional'])