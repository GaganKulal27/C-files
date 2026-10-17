# Restaurant Bill Program

# Menu
menu = {
    "pizza": 250,
    "burger": 150,
    "pasta": 200,
    "sandwich": 100,
    "coffee": 80
}


# Returns the price of an item, or 0 if not found
def get_price(item):
    return menu.get(item.lower(), 0)


# Calculates the cost of an item
def item_cost(item, qty):
    return get_price(item) * qty


# Calculates GST
def calculate_gst(amount, rate=0.05):
    return amount * rate


# Generates the bill
def generate_bill(subtotal, discount_percent=0):
    discount = subtotal * discount_percent / 100
    discounted_amount = subtotal - discount

    gst = calculate_gst(discounted_amount)
    final_total = discounted_amount + gst

    return discount, gst, final_total


# Splits the bill among people
def split_bill(total, people):
    whole_rupees = int(total) // people
    remainder = int(total) % people

    return whole_rupees, remainder


# Main program
print("===== RESTAURANT MENU =====")
for item, price in menu.items():
    print(f"{item.title():10} : ₹{price}")

print("\nEnter item details.")
print("Type 'done' when finished.")

subtotal = 0

while True:
    item = input("Enter item: ").strip().lower()

    if item == "done":
        break

    price = get_price(item)

    if price == 0:
        print("Error: Item is not on the menu.")
        continue

    qty = int(input("Enter quantity: "))

    if qty <= 0:
        print("Error: Quantity must be positive.")
        continue

    cost = item_cost(item, qty)
    subtotal += cost

    print(f"{item.title()} x {qty} = ₹{cost}")


# Get discount
discount_percent = float(input("\nEnter discount percentage: "))

# Generate bill
discount, gst, final_total = generate_bill(
    subtotal, discount_percent
)

# Display bill
print("\n===== FINAL BILL =====")
print(f"Subtotal       : ₹{subtotal:.2f}")
print(f"Discount       : ₹{discount:.2f}")
print(f"Amount after discount: ₹{subtotal - discount:.2f}")
print(f"GST (5%)       : ₹{gst:.2f}")
print(f"Final Total    : ₹{final_total:.2f}")

# Split bill
people = int(input("\nEnter number of people to split the bill: "))

if people > 0:
    each_person, leftover = split_bill(final_total, people)

    print("\n===== BILL SPLIT =====")
    print(f"Each person pays: ₹{each_person}")
    print(f"Rupees left over: ₹{leftover}")
else:
    print("Error: Number of people must be greater than zero.")
