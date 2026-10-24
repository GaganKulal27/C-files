
account_no = int(input("Enter account number: "))
holder_name = input("Enter holder name: ")
dob = input("Enter date of birth: ")
email_id = input("Enter email ID: ")
contact_no = input("Enter contact number: ")
address = input("Enter address: ")
balance = float(input("Enter balance: "))

customer = (account_no, holder_name, dob,
            [email_id, contact_no, address, balance])

print("\n--- Bank Customer Details ---")
print("Account No:", customer[0])
print("Holder Name:", customer[1])
print("Date of Birth:", customer[2])
print("Email ID:", customer[3][0])
print("Contact No:", customer[3][1])
print("Address:", customer[3][2])
print("Balance:", customer[3][3])

# Tuple modification
try:
    customer[1] = "Rahul"
except TypeError:
    print("\nTuple elements cannot be modified.")

# Updating balance inside the list
# customer[3][3] = float(input("\nEnter updated balance: "))
# print("Updated Balance:", customer[3][3])
# print(customer)
updated_balance=float(input("Enter the updated balance:"))
customer[3][3]=updated_balance
print(customer)
