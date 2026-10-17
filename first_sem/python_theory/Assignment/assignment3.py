# Menu-driven Bank Account Application

balance = 0.0

while True:
    print("\n===== BANK ACCOUNT MENU =====")
    print("1. Deposit")
    print("2. Withdraw")
    print("3. Display Account Details")
    print("4. Exit")

    choice = input("Enter your choice: ")

    if choice == "1":
        amount = float(input("Enter deposit amount: "))

        if amount < 0:
            print("Error: Deposit amount cannot be negative.")
        elif amount == 0:
            print("Error: Deposit amount must be greater than zero.")
        else:
            balance += amount
            print("Deposit successful!")
            print("Amount deposited:", amount)
            print("Current balance:", balance)

    elif choice == "2":
        amount = float(input("Enter withdrawal amount: "))

        if amount < 0:
            print("Error: Withdrawal amount cannot be negative.")
        elif amount == 0:
            print("Error: Withdrawal amount must be greater than zero.")
        elif amount > balance:
            print("Error: Insufficient balance.")
        else:
            balance -= amount
            print("Withdrawal successful!")
            print("Amount withdrawn:", amount)
            print("Current balance:", balance)

    elif choice == "3":
        print("\n===== ACCOUNT DETAILS =====")
        print("Account Balance:", balance)

    elif choice == "4":
        print("Thank you for using the bank application.")
        print("Goodbye!")
        break

    else:
        print("Error: Invalid choice. Please select an option from 1 to 4.")
