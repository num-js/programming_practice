comment = input('Enter Comment: ')

spam = False

if('make money' in comment):
    spam= True
elif('buy now' in comment):
    spam= True

if(spam):
    print('Spam Comment')
else:
    print('Good Comment')