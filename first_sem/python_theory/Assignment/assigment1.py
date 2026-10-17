# Read two integers
a = int(input("Enter the first integer: "))
b = int(input("Enter the second integer: "))

# Arithmetic operations
print("Addition:", a + b)
print("Subtraction:", a - b)
print("Multiplication:", a * b)

# Division operations
if b != 0:
    print(f"Division:{a / b:.2f}")
    print("Floor Division:", a // b)
    print("Modulus:", a % b)
else:
    print("Error: Division by zero is not allowed.")
    print("Error: Floor division by zero is not allowed.")
    print("Error: Modulus by zero is not allowed.")

# Exponentiation
print("Exponentiation:", a ** b)
