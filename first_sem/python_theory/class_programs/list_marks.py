#dynamic intialisation
marks=[]
n=int(input("Enter the no of subject: "))
name=input("Enter the name: ")
marks.append(name)
for i in range (0,n):
    sub=int(input("enter the marks: "))
    marks.append(sub)
for j in range(len(marks)):
    print("marks:",marks[j])
# static intialisation
my_marks=['sachin',50,55,67,76,89]
marks.extend(my_marks) 
marks.insert(2,34)
print("marks:",marks)