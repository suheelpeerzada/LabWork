
grade = int(input("Enter Marks"))
if(0 <= grade < 40):
    print("Failed")
elif(40 <= grade < 70):
    print("Grade D")
elif(70 <= grade < 80):
    print("Grade C")
elif(80 <= grade < 90):
    print("Grade B")
elif(90 <= grade < 100):
    print("Grade A")
elif(grade == 100):
    print("Grade A+")
    