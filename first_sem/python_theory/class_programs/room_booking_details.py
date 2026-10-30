


def calculate_gst(booking_total):
    return booking_total * 0.18

def read_data(n):
    room_details = {}
    for i in range(n):
        print(f"Enter details for booking {i + 1}:")
        room_no = int(input("Enter the room number: "))
        customer_name = input("Enter the customer name: ")
        contact_number = input("Enter the contact number: ")
        booking_amount = float(input("Enter the booking amount: "))
        date = input("Enter the booking date (YYYY-MM-DD): ")
        gst = calculate_gst(booking_amount)
        room_details[i + 1] = {"Room_number": room_no,
                               "customer_name": customer_name,
                               "contact_number": contact_number,
                               "booking_amount": booking_amount,
                               "date": date,
                               "gst": gst
                               }
        print()
    return room_details


def display_booking(room_details):
    print("-" * 50)
    print("Room booking details without total GST:")
    print("Booking info",room_details)
    print("-" * 50)
    print("\n")


def get_total_price(room_details):
    booking_total = sum(details["booking_amount"] for details in room_details.values())
    total_gst = sum(details["gst"] for details in room_details.values())
    rooms_booking_details = {}
    rooms_booking_details.update(room_details)
    rooms_booking_details["total_booking_amount"] = booking_total
    rooms_booking_details["total_gst"] = total_gst
    rooms_booking_details["total_amount"] = booking_total + total_gst
    return rooms_booking_details


def display_booking_with_gst(rooms_booking_details):
    print("Room booking details with total GST and total amount:")
    print("-" * 95)
    print(f"{'No.':<5} {'Room':<8} {'Customer':<20} {'Contact':<16} {'Amount':<10} {'Date':<12} {'GST':<8}")
    print("-" * 95)

    for booking_no, booking in rooms_booking_details.items():
        if booking_no == "total_booking_amount" or booking_no == "total_gst" or booking_no == "total_amount":
            continue
        print(
            f"{booking_no:<5} "
            f"{booking['Room_number']:<8} "
            f"{booking['customer_name']:<20.20} "
            f"{booking['contact_number']:<16.16} "
            f"{booking['booking_amount']:<10.2f} "
            f"{booking['date']:<12} "
            f"{booking['gst']:<8.2f}"
        )

    print("-" * 95)
    print(f"Total booking amount: {rooms_booking_details['total_booking_amount']:.2f}")
    print(f"Total GST: {rooms_booking_details['total_gst']:.2f}")
    print(f"Total amount: {rooms_booking_details['total_amount']:.2f}")


n = int(input("Enter the number of rooms to book: "))
room_details = read_data(n)
display_booking(room_details)
rooms_booking_details = get_total_price(room_details)
display_booking_with_gst(rooms_booking_details)