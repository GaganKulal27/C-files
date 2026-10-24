# Initialize a nested list for 5 students
students_marks = [[], [], [], [], []]

# Function to read student details
def read_details():
    for i in range(5):
        print("\nEnter details of Student", i + 1)
        name = input("Enter student name: ")

        student = [name]
        for j in range(5):
            mark = int(input(f"Enter marks in subject {j + 1}: "))
            student.append(mark)

        students_marks[i] = student


# Function to calculate total marks
def calculate_total():
    for student in students_marks:
        total = sum(student[1:6])
        student.append(total)


# Function to display student details
def display_details():
    print("\n" + "-" * 75)
    print(f"{'Name':<15}{'Sub1':>8}{'Sub2':>8}"
          f"{'Sub3':>8}{'Sub4':>8}{'Sub5':>8}{'Total':>10}")
    print("-" * 75)

    for student in students_marks:
        print(f"{student[0]:<15}", end="")
        for mark in student[1:]:
            print(f"{mark:>8}", end="")
        print()

    print("-" * 75)


# Main program
read_details()
calculate_total()
display_details()