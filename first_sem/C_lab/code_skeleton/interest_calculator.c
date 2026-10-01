// Program to calculate year-wise interest and to find total amount after N years
// formula for year-wise interest calculation 
// interest = amount * rateOfInterest / 100;
//amount=amount+interest;
/*
OUTPUT EXPECTED
Enter number of years: 5
---- Interest Growth ----
Year 1: Interest = Rs.50.00 | Amount = Rs.1050.00
Year 2: Interest = Rs.52.50 | Amount = Rs.1102.50
Year 3: Interest = Rs.55.12 | Amount = Rs.1157.62
Year 4: Interest = Rs.57.88 | Amount = Rs.1215.51
Year 5: Interest = Rs.60.78 | Amount = Rs.1276.28
--------------------------
Final Amount after 5 years: Rs.1276.28 */

#include <stdio.h>

int main() {
    float principal = 1000.0,interest;
    float rateOfInterest = 5.0; // percent per year
    int years;
    float amount = principal;
    printf("Enter number of years: ");
    scanf("%d",&years);
    printf("---- Interest Growth ---------------------------------------------\n");
    for (int year = 1; year <= years; year++) {
        interest=amount*rateOfInterest/100;
        amount=amount+interest;
       printf("Year %d:\tInterest = rs.%.2f | Amount =Rs.%.2f\n",year,interest,amount);
    }
    printf("----------------------------------------------------------------------\n");
    printf("Final Amount after %d years: Rs.%.2f\n", years, amount);

    return 0;
}