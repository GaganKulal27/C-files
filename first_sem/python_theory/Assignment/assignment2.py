# Read marks for three subjects
mark1 = float(input("Enter marks for Subject 1: "))
mark2 = float(input("Enter marks for Subject 2: "))
mark3 = float(input("Enter marks for Subject 3: "))

# Validate marks
if (mark1 < 0 or mark1 > 100 or mark2 < 0 or mark2 > 100 or mark3 < 0 or mark3 > 100):
    print("Invalid marks! Marks must be between 0 and 100.")

else:
    # Calculate total, average and percentage
    total = mark1 + mark2 + mark3
    average = total / 3
    percentage = (total / 300) * 100

    # Determine grade
    if percentage >= 70:
        grade = "DISTINCTION"
    elif percentage >= 60:
        grade = "FIRST CLASS"
    elif percentage >= 40:
        grade = "SECOND CLASS"
    else:
        grade = "FAIL"

    # Display results
    print("Total:", total)
    print(f"Average: {average:.2f}")
    print(f"Percentage:{percentage:.2f}%")
    print("Grade:", grade)
