dictionary = {
    "fan": 'Pankha',
    'pen': 'Kalam',
    'bottle': 'Botle',
    'grass': 'Ghas'
}

searchWord = input("Enter your Word: ")
searchWordSmall = searchWord.lower()
if "searchWordSmall" in dictionary:
    print(searchWord +' - '+ dictionary[searchWordSmall])
else:
    print('Sorry, '+searchWord+' is not Present in the Dictionary')