my_list = []
bank_details = []

n = int(input("Enter the number of customers: "))

for i in range(n):
    name = input("Enter the name: ")
    account_no = int(input("Enter the account number: "))
    pan_no = input("Enter the PAN number: ")
    dob = input("Enter the date of birth: ")

    my_tuple = (name, account_no, pan_no, dob)

    balance = float(input("Enter the balance: "))
    address = input("Enter the address: ")
    email = input("Enter the email: ")
    contact_no = int(input("Enter the contact number: "))

    my_list = [balance, address, email, contact_no, my_tuple]
    bank_details.append(my_list)
bank = []
print("\nBank Details:")
for acc in bank_details:
    bank.append(acc)
    
print(bank)
# for account in bank:
#      print(account)
while True:
    print("\n1. Deposit")
    print("2. Withdraw")
    print("3. Show Accounts")
    print("4. Exit")

    choice = int(input("Enter your choice: "))

    if choice == 1 or choice == 2:
        acc_no = int(input("Enter account number: "))
        amount = float(input("Enter amount: "))

        for acc in bank_details:
            if acc[4][1] == acc_no:
                if choice == 1:
                    acc[0] += amount
                    print("Deposit successful")
                elif choice == 2:
                    if amount <= acc[0]:
                        acc[0] -= amount
                        print("Withdrawal successful")
                    else:
                        print("Insufficient balance")

                print(acc)
                break
        else:
            print("Account not found")

    elif choice == 3:
        print("\nBank Details:")
        for acc in bank_details:
            print(acc)

    elif choice == 4:
        print("Thank you!")
        break

    else:
        print("Invalid choice")

