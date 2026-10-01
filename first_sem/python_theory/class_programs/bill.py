types=input("Enter the category[commercial/non-commercial] :")
Unit=int(input("Enter the unit :"))
peak=(input("Is peak threshold found[true/false] :"))
duedate=(input("Pay before[true/false]"))
if types=="commercial":
    if Unit<=100:
        amount=Unit*10
    elif Unit>100 and Unit<=300:
        amount=(100*10)+((Unit- 100)*12)
    else:
        amount=(100*10) + (100*12)+((Unit-200)*15)    
    if peak=="true":
        penalty=100
        amount=amount+penalty
        print("Bill Amount=",amount)
    else:
        amount=amount
        print("Bill Amount=",amount)
    if duedate=="true":
        discount=amount*90//100
        print("IF u pay the amount before the due date")
        print("Bill amount",discount)
    else:
        print("Bill amount",amount)
else:
    if Unit<=100:
        amount=Unit*5
    elif Unit>100 and Unit<=300:
        amount=(100 * 5) + ((Unit- 100) * 6)
    else:
        amount=(100*5) + (100*6)+((Unit-200)*8);
    if peak=="true":
        penalty=50
        amount=amount+penalty
        print("Bill Amount=",amount)
    else:
        amount=amount
        print("Bill Amount=",amount)
    if duedate=="true":
        discount=amount*90//100
        print("IF u pay the amount before the due date")
        print("Bill amount",discount)
    else:
        print("Bill amount",amount)