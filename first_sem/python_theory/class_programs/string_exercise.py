#Program to demonstrate real python string processing to clean and transform
# Output formate:
# ==============================
#  PROFILE CARD
# ==============================
#  Name     : Naveen Kumar
#  Initials : NK
#  Email    : naveen.kumar@company.com
#  Domain   : company.com
#  Phone    : *********3210
#  Valid    : True
# ==============================

raw_data = """
   naveen   KUMAR  
naveen.kumar@COMPANY.com
+91-98765-43210
"""

name,email,phone=raw_data.split("\n")[1],raw_data.split("\n")[2],raw_data.split("\n")[3]
print(name.strip().title())
print(email)
print(phone.replace("-",""))

first,last=name.split()[0],name.split()[1]
initials=first[0].upper()+last[0].upper()
e=email.lower()
a=first.title()
b=last.title()
c=phone.replace("-","")
#d=c[0:9]
g=c.replace(c[0:9],"*********")
p,z=e.split("@")[0],e.split("@")[1]
phone_valid = (
    c.startswith("+91")
    and len(c) == 13
    and c[3:].isdigit())
valid=phone_valid
print("===================================")
print("PROFILE CARD")
print("===================================")
print("Name\t:",a,b)
print("Intials\t:",initials)
print("Email\t:",e)
print("Domain\t:",z)
print("Phone\t:",g)
print("Valid\t:",valid)
print("===================================")
