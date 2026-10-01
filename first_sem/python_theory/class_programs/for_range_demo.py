n = int(input("Enter the value of n: "))
sum = 0
count = 0
no=int(input("Enter the number[1,2,3,4]"))
if(no==1):
    for number in range(1, n + 1):
        if number%2==0:
            sum += number
    print("Sum of even numbers:", sum)
elif(no==2):
    for number in range(1, n + 1):
        if number%3==0 and number%5==0:
            count += 1
    print("Numbers divisible by 3 and 5:", count)