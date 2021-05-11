'''
Bob's crush's name starts with a vowel. That's the reason Bob loves vowels too much. He calls a string "lovely string" if it contains either all the lowercase vowels or all the uppercase vowels or both, else he calls that string "ugly string". 

Sample Input
3
omahgoTuRuLob
OmAhgotUrulobEI
aeKORONAoiBATCHu

Sample Output
ugly string
lovely string
lovely string
'''

num = int(input())

for i in range(num):
    vowels = ['a', 'e', 'i', 'o', 'u']
    isLovely = []

    crushName = input()
    crushNameSmall = crushName.lower()
    for i in crushNameSmall:
        for vol in vowels:
            if(vol == i):
                isLovely.append(vol)
                vowels.remove(vol)
            
    if(len(isLovely) == 5):
        print ('crushName is Lovely')
    else:
        print ('crushName is Ugly')