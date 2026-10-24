# Collect an employee's name, number, company name, and salary.
employee_set = set()
employee_dict = {}
emp_name = input("Enter the name:").upper()
emp_no = int(input("Enter the number:"))
company = input("Enter the company name:").upper()
salary = int(input("Enter the salary:"))

employee_set.update((emp_name, emp_no, company, salary))
# employee_set.add(emp_name)
# employee_set.add(emp_no)
# employee_set.add(company)
# employee_set.add(salary)
employee_dict["NAME"] = emp_name
employee_dict["NUMBER"] = emp_no
employee_dict["COMPANY"] = company
employee_dict["SALARY"] = salary

print("Employee set:", employee_set)
print("Employee dictionary:",employee_dict)

emp_email = input("Enter the email address:").lower()
emp_id = int(input("Enter the employee ID:"))
employee_dict["ID"] = emp_id
employee_set.update((emp_email, emp_id))
employee_dict["EMAIL"] = emp_email
print("Updated employee set:", employee_set)
print("Updated employee dictionary:", employee_dict)

print("Employee details from dictionary:")
print("-" * 25)
for i in employee_dict:
    print(f"{i}: {employee_dict[i]}")
print("-" * 25)

print("Employee details from set and dictionary:")
for i in employee_set:
    for j in employee_dict:
        if i == employee_dict[j]:
            print(f"{j}: {i}")
print("-" * 25)

print("Employee details from set:")
for i in employee_set:
    if i == emp_name:
        print(f"Name: {i}")
    elif i == emp_no:
        print(f"Number: {i}")
    elif i == company:
        print(f"Company: {i}")
    elif i == salary:
        print(f"Salary: {i}")
    elif i == emp_email:
        print(f"Email: {i}")
    elif i == emp_id:
        print(f"ID: {i}")
    else:
        break