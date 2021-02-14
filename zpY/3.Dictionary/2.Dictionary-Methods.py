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


#Dict Keys list
# print(dict1.keys())

#Dict Keys list type
# print(type(dict1.keys()))

#Typecast Dict keys into List
# print(type(list(dict1.keys())))


#Dict Values
# print(dict1.values())

# Dict Items --- Print (key, value) for all elements in the Dictionary
# print(dict1.items())

###*** Update or add more data into Dictionary || Like-Put operation ***###
# addData = {
#     'name': 'Num',
#     "friend": 'Saheb'
# }
# dict1.update(addData)
# print(dict1)


# Get value
# print(dict1.get('projects'));
#****** [] vs get *******#
print(dict1["name"]) #throws an error if data is not present
print(dict1.get("name")) #Din't throw any error if data is not present



