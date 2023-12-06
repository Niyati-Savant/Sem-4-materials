print("Converting String to array")
user_str=(input("Enter a string: "))
listofwords=user_str.split()
listofwords.sort() 
for word in listofwords :
    print(word,end=" ")


print("\nChecking Palindrome")
sentence=(input("Enter a word: "))
reverse_sentence=sentence[::-1]
if(sentence==reverse_sentence):
    print("It is a Palindrome")
else:
    print("It is not a Palindrome")
