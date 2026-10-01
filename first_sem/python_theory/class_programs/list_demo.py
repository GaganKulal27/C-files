list=[]
total=0
n=int(input("Enter the no of subject: "))
for i in range(n):
    list_s=int(input(f"Enter {i+1} the list element: "))
    list.append(list_s)
    total=total+list[i]
print(list)
print("The sum of list element is: ",total)