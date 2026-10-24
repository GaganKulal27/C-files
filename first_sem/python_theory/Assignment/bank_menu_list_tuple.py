
bank_accounts = []

n = int(input("Enter number of accounts: "))

for i in range(n):
    print("\nEnter details of account", i + 1)
    account_no = int(input("Account number: "))
    name = input("Name: ")
    email_id = input("Email ID: ")
    address = input("Address: ")
    balance = float(input("Balance: "))

    accounts = [account_no, name, email_id, address, balance]
    bank_accounts.append(accounts)


def deposit():
    acc_no = int(input("Enter account number: "))

    for acc in bank_accounts:
        if acc[0] == acc_no:
            print("Account found...")
            amount = float(input("Please enter deposit amount: "))
            if amount > 0:
                acc[4] += amount
                print("Current balance:", acc[4])
            else:
                print("Invalid amount")
            return

    print("Account not found")


def withdraw():
    acc_no = int(input("Enter account number: "))

    for acc in bank_accounts:
        if acc[0] == acc_no:
            print("Account found...")
            amount = float(input("Enter withdraw amount: "))
            if amount <= 0:
                print("Invalid amount")
            elif amount > acc[4]:
                print("Insufficient balance")
            else:
                acc[4] -= amount
                print("Current balance:", acc[4])
            return

    print("Account not found")


def show_accounts():
    print("\nAccount No\tName\tEmail\t\tAddress\tBalance")
    print("-" * 70)
    for acc in bank_accounts:
        print(acc[0], "\t\t", acc[1], "\t", acc[2],
              "\t", acc[3], "\t", acc[4])


while True:
    print("\n1. Deposit")
    print("2. Withdraw")
    print("3. Show Accounts")
    print("4. Exit")

    choice = input("Enter your choice: ")

    if choice == "1":
        deposit()
    elif choice == "2":
        withdraw()
    elif choice == "3":
        show_accounts()
    elif choice == "4":
        print("Thank you!")
        break
    else:
        print("Invalid choice")

    print("-" * 50)
