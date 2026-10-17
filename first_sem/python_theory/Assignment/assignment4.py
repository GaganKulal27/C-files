# Raw data
raw_data = """ naveen KUMAR
naveen.kumar@COMPANY.com
+91-98765-43210
"""

# Split the data into lines and remove extra spaces
lines = raw_data.strip().splitlines()

name = lines[0].strip()
email = lines[1].strip()
phone = lines[2].strip()

# Clean and format the name
name = " ".join(name.split()).title()

# Generate initials
initials = "".join(word[0] for word in name.split()).upper()

# Convert email to lowercase
email = email.lower()

# Extract domain
domain = email.split("@")[1]

# Remove non-digit characters from phone number
phone_digits = "".join(char for char in phone if char.isdigit())

# Check phone validity: 12 digits including country code 91
valid = (
    phone_digits.startswith("91")
    and len(phone_digits) == 12
)

# Mask phone number except the last 4 digits
masked_phone = "*" * (len(phone_digits) - 4) + phone_digits[-4:]

# Display the result
print("Name :", name)
print("Initials :", initials)
print("Email :", email)
print("Domain :", domain)
print("Phone :", masked_phone)
print("Valid :", valid)
