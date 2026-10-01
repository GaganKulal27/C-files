#--------Ticket Pricing System-----
#Enter the name: 
#Enter the age: 
print("--------Ticket Pricing System-----")
name=input("Enter the name : ")
age=int(input("Enter the age : "))
week=input("Enter the week : ")
time=input("Enter the timing{morning=1/afternoon=2/evening=3}: ")
#ticket_price=int(input("Enter the ticket price"))
ticket_price=500
if week=="monday":
    ticket_price=ticket_price
elif week=="tuesday":
    ticket_price=ticket_price
elif week=="wednesday":
    ticket_price=ticket_price
elif week=="thursday":
    ticket_price=ticket_price
elif week=="friday":
    ticket_price=ticket_price
elif week=="saturday":
    ticket_price=ticket_price*25//100+ticket_price
elif week=="sunday":
    ticket_price=ticket_price*25//100+ticket_price
import sys
if time=="1":
    ticket_price=ticket_price
elif time=="2":
    ticket_price=ticket_price*10//100+ticket_price
elif time=="3":
    ticket_price=ticket_price*30//100+ticket_price
else:
    print("invalid option")
    sys.exit()

if age<5:
    ticket_price=ticket_price*50//100
    print("ticket price: ",ticket_price)
elif age>5 and age<59:
    print("ticket price : ",ticket_price)
else:
    ticket_price=ticket_price*90/100
    print("ticket price : ",ticket_price)
