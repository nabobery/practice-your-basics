# Name : Himanshu
# Roll No. : CS20B1097

'''
Question 10. 
Write a program that accepts a sentence and calculate the number of letters and digits.
'''

sentence = input()
letter = digit = 0

for character in sentence:
    if character.isdigit():
        digit = digit+1
    elif character.isalpha():
        letter = letter+1
    else:
        pass

print(letter, digit)
