/*Scenario: You are writing the billing logic for a movie theatre's ticket counter. A single customer wants to book tickets for a group. The cashier enters the number of people in the group and then enters the ticket price category for each person one at a time (there are 3 categories: 1 = Regular ₹150, 2 = Premium ₹250, 3 = Recliner ₹400). Using only a for loop (no arrays, no functions), your program must:
1. Ask the user how many tickets (n) are being booked.
2. Loop n times, and in each iteration ask for the category (1/2/3) of that ticket.
3. Add the correct price to a running total based on category.
4. Keep a running count of how many Regular, Premium, and Recliner tickets were booked (using simple counter variables, not arrays).
5. After the loop ends:
If the total number of tickets is 5 or more, apply a 10% discount on the total bill.
Print the final bill, along with a breakdown of how many tickets were sold in each category.
Submission guidelines
Expected Output
Enter number of tickets: 3
Enter category for ticket 1 (1/2/3): 1
Enter category for ticket 2 (1/2/3): 2
Enter category for ticket 3 (1/2/3): 3
--- Final Bill ---
Regular tickets: 1
Premium tickets: 1
Recliner tickets: 1
Total (before discount): 800
Discount applied: No
Final Amount: 800*/

#include<stdio.h>
int main(){
    int no,ctgy;
    int reglr=0,prmim=0,reclnr=0;
    int amount=0;
    int total,discount;
    printf("Enter the number: ");
    scanf("%d",&no);
    for (int i = 1; i <= no; i++)
    {
        printf("Enter category for ticket (1/2/3): ");
        scanf("%d",&ctgy);
        if (ctgy == 1)
        {
            amount += 150;
            reglr++;
        }
        else if (ctgy == 2)
        {
            amount += 250;
            prmim++;
        }
        else if (ctgy == 3)
        {
            amount += 400;
            reclnr++;
        }
        else
        {
            printf("Invalid category!\n");
            i--;  // repeat this ticket
        }
    } 
    if (no>=5)
    {
        discount=amount*10/100;
        total=amount-discount;
    }
    else{
        total=amount;
    }
    printf("--------Final Bill---------\n");
    printf("Regular ticket: %d\n",reglr);
    printf("Premium ticket: %d\n",prmim);
    printf("Recliner ticket: %d\n",reclnr);
    printf("total (before discount): %d\n",amount);
    if (no>= 5)
    {
        printf("Discount applied(10%%): Yes\n");
    }
    else{
        printf("Discount applied(10%%): No\n");
    }
    printf("Final Amount:%d",total);
}
