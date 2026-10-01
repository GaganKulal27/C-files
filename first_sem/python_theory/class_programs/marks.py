roll_number=0
name=""
sub1=0
sub2=0
sub3=0
total=0
average=0
percent=0
def readData():
    global roll_number,sub1,sub2,sub3,name
    name=input("Enter the name:")
    roll_number=int(input("Enter the roll number:"))
    sub1=int(input("Enter the subject1:"))
    sub2=int(input("Enter the subject2:"))
    sub3=int(input("Enter the subject3:"))
def getTotal():
    global total
    total=sub1+sub2+sub3
def getAverage():
    global average
    average=(sub1+sub2+sub3)/3
def getpercent():
    global percent
    percent=(sub1+sub2+sub3)/300 * 100
    
def findGrade():
    if percent<=40:
        print("Fail")
    elif percent>40 and percent<=60:
        print("Second class")
    elif percent>60 and percent<=75:
        print("First class")
    else:
        print("Distinction")
def displayResult():
    print("Name:",name)
    print("Roll number:",roll_number)
    print("Subject1:",sub1)
    print("Subject2:",sub2)
    print("Subject3:",sub3)
    print("Total:",total)
    print("Average:",average)
    print("Percentage:",percent)

for i in range(3):
    readData()
    getTotal()
    getAverage()
    getpercent()
    displayResult()
    findGrade()
