# static intialisation
my_marks=['sachin',50,55,67,76,89]
print("marks:",my_marks)
#dynamic intialisation
marks=[]
sum=0
n=int(input("Enter the no of subject: "))
for i in range (0,n):
    sub=int(input("enter the marks: "))
    marks.append(sub)
for j in range(len(marks)):
    sum+=marks[j]
print("marks:",marks)
print("Sum:",sum)