def get_price(item):
    if item == "idli":
        return 30
    elif item == "dosa":
        return 50
    elif item=="coffee":
        return 20
    elif item=="plain dosa":
        return 45
    else:
        return 0


def item_cost(item, qty):
    cost=get_price(item)
    return cost * qty

def calculate_gst(amount, rate=0.05):
    # TODO: return the GST rounded to 2 decimals
    gst=round(amount*rate,2)
    return gst

def generate_bill(subtotal, discount_percent=0):
    discount = subtotal*discount_percent/100 
    amount_after_discount = subtotal-discount # TODO
    gst = calculate_gst(amount_after_discount) # TODO: call calculate_gst()
    total = amount_after_discount+gst  # TODO
    return discount,gst,total # TODO: return discount, gst and total


def split_bill(total, people):
    each_pays = total/people # TODO
    left_over = total%people # TODO
    return each_pays,left_over# TODO


# ---------------- Main program ----------------
# A group of 3 friends orders 2 dosa and 3 coffee, with a 10% coupon.

subtotal1 = item_cost("dosa",2)# TODO: call item_cost() for dosa and coffee and add them
discount1,gst1,total1 = generate_bill(subtotal1,0.1)# TODO: call generate_bill() using a KEYWORD argument
subtotal2 =item_cost("coffee",3)
discount2,gst2,total2 = generate_bill(subtotal2,0.1)
each,extra =split_bill(int(total1 + total2),3) # TODO: call split_bill() with the total (as a whole number) and 3 people

print("Subtotal :", subtotal1+subtotal2)
print("Discount :", discount1+discount2)
print("GST      :", gst1+gst2)
print("Total    :", total1+total2)
print("Subtotal :", subtotal2)
print("Discount :", discount2)
print("GST      :", gst2)
print("Total    :", total2)
print(f"Each pays: {each:.2f}", "| Left over:", extra)