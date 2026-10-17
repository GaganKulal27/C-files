# # u need to process a single student data name,rollno,mobilenum,email ,5 subject marks,and get yhe subject total
# # implemented n using nested list 

def student_details():
    n = int(input("Enter the number of students: "))
    student_list = []
    for i in range(n):
        print(f"\nEnter details for student {i+1}:")
        name = input("Enter the name: ")
        roll_no = int(input("Enter the roll no: "))
        email = input("Enter the email: ")

        marks = []
        for j in range(5):
            mark = int(input(f"Enter the mark {j+1}: "))
            marks.append(mark)
            
        total = sum(marks)
        my_list = [name, roll_no, email, marks, total]
        student_list.append(my_list)
    print("\nStudent Details:[")
    # for student in student_list:
    #     print(student)
    # print("]")
    student_details=[]
    for i in range(n):
        student_details.append(student_list[i])
    print(student_details)   

student_details()