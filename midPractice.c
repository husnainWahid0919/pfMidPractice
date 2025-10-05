#include <stdio.h>

// // Question 1

// int main()
// {
//     int units;
//     float bill;

//     printf("Enter the number of units: ");
//     scanf("%d", &units);

//     while (units < 0)
//     {
//         printf("Please enter the valid number of units: ");
//         scanf("%d", &units);
//     }

//     if(units < 100){
//         bill = units * 5;
//     }else{
//         if(units < 300){
//             bill = (100 * 5) + (units - 100) * 7;
//         }else{
//             bill = (100 * 5) + (200 * 7) + (units - 300) * 10;
//         }
//     }
//     printf("Your total bill is %.2f.", bill);
//     return 0;
// }

// // Question 2

// int main()
// {
//     float temp, result;
//     char requiredTemp;

//     printf("Enter the target unit (F for Fahrenheit, C for Celsius): ");
//     scanf(" %c", &requiredTemp);

//     while (!(requiredTemp == 'F' || requiredTemp == 'f' ||
//              requiredTemp == 'C' || requiredTemp == 'c'))
//     {
//         printf("Invalid choice! Please enter 'F' or 'C': ");
//         scanf(" %c", &requiredTemp);
//     }
//     printf("Enter the temperature value: ");
//     scanf("%f", &temp);
//     while(temp <= 0){
//         printf("Invalid input! Please enter valid temperature: ");
//         scanf(" %c", &temp);
//     }
//     switch (requiredTemp)
//     {
//     case 'F':
//     case 'f':
//         result = (temp * 9 / 5) + 32;
//         printf("The converted temperature is %.2f Fahrenheit.\n", result);
//         break;

//     case 'C':
//     case 'c':
//         result = (temp - 32) * 5 / 9.0;
//         printf("The converted temperature is %.2f Celsius.\n", result);
//         break;

//     default:
//         printf("Error: Unknown unit.\n");
//         break;
//     }

//     return 0;
// }

// // Question 3

// int main()
// {
//     int marks, total, i;
//     float percentage;
//     char grade;

//     printf("\n-------------------- Student Results ---------------------\n");
//     printf("\nStudent\tTotal Marks\tPercentage\tGrade\n");
//     printf("----------------------------------------------------------\n");

//     for (i = 1; i <= 5; i++)
//     {
//         printf("Enter the marks of student %d (out of 100): ", i);
//         scanf("%d", &marks);
//         while (marks < 0 || marks > 100)
//         {
//             printf("Invalid! Please enter valid marks (0–100) for student %d: ", i);
//             scanf("%d", &marks);
//         }

//         total = marks;
//         percentage = marks;
//         if (percentage >= 90){
//             grade = 'A';
//         }
//         else if (percentage >= 80){
//             grade = 'B';
//         }
//         else if (percentage >= 70){
//             grade = 'C';
//         }
//         else if (percentage >= 60){
//             grade = 'D';
//         }
//         else{
//             grade = 'F';
//         }
//         printf("%d\t%d\t\t%.2f\t\t%c\n", i, total, percentage, grade);
//     }

//     return 0;
// }

// // Question 4

// int main() {
//     int total = 0, expense, i;
//     double average;
//     int isZero = 0;

//     printf("------ Weekly Expense Tracker ------\n");

//     for (i = 1; i <= 7; i++) {
//         printf("Enter expense for day %d: ", i);
//         scanf("%d", &expense);
//         while (expense < 0) {
//             printf("Invalid! Expense cannot be negative. Re-enter for day %d: ", i);
//             scanf("%d", &expense);
//         }

//         if (expense == 0) {
//             isZero = 1;
//         }

//         total += expense;
//     }

//     average = total / 7.0;

//     printf("\n------ Weekly Summary ------\n");
//     printf("Total Expense: %d\n", total);
//     printf("Average Expense: %.2f\n", average);

//     if (isZero) {
//         printf("Warning! One or more days had 0 expense.\n");
//     }

//     if (average < 500) {
//         printf("Budget friendly\n");
//     } else {
//         printf("Overspending\n");
//     }

//     return 0;
// }

// // Question 7

// int main()
// {
//     int choice, quantity, totalBill = 0;

//     printf("\n-------------------- Menu --------------------\n");
//     printf("\t1. Tea       - Rs.50\n");
//     printf("\t2. Burger    - Rs.150\n");
//     printf("\t3. Pizza     - Rs.300\n");
//     printf("\t4. Sandwich  - Rs.100\n");
//     printf("------------------------------------------------\n");

//     printf("\nEnter your choice (1-4): ");
//     scanf("%d", &choice);

//     switch (choice)
//     {
//     case 1:
//         printf("Enter the quantity: ");
//         scanf("%d", &quantity);
//         while (quantity <= 0) {
//             printf("Invalid! Quantity must be greater than 0. Re-enter: ");
//             scanf("%d", &quantity);
//         }
//         totalBill = 50 * quantity;
//         break;

//     case 2:
//         printf("Enter the quantity: ");
//         scanf("%d", &quantity);
//         while (quantity <= 0) {
//             printf("Invalid! Quantity must be greater than 0. Re-enter: ");
//             scanf("%d", &quantity);
//         }
//         totalBill = 150 * quantity;
//         break;

//     case 3:
//         printf("Enter the quantity: ");
//         scanf("%d", &quantity);
//         while (quantity <= 0) {
//             printf("Invalid! Quantity must be greater than 0. Re-enter: ");
//             scanf("%d", &quantity);
//         }
//         totalBill = 300 * quantity;
//         break;

//     case 4:
//         printf("Enter the quantity: ");
//         scanf("%d", &quantity);
//         while (quantity <= 0) {
//             printf("Invalid! Quantity must be greater than 0. Re-enter: ");
//             scanf("%d", &quantity);
//         }
//         totalBill = 100 * quantity;
//         break;

//     default:
//         printf("Invalid Input! Please select from 1-4.\n");
//         return 0;
//     }

//     printf("\nYour total bill is Rs.%d\n", totalBill);

//     return 0;
// }

// // Question 8

// int main()
// {
//     float distance, time, speed;

//     printf("Enter the distance (in km): ");
//     scanf("%f", &distance);

//     printf("Enter the time (in hours): ");
//     scanf("%f", &time);

//     while (time <= 0)
//     {
//         printf("Invalid Time! Time must be greater than 0.\n");
//         scanf( "%f", &time);
//     }

//     speed = distance / time;

//     printf("\n-------------------- Speed Calculation --------------------\n");
//     printf("\n\tDistance\tTime\t\tSpeed");
//     printf("\n\t%.2f km\t\t%.2f hr\t\t%.2f km/hr", distance, time, speed);

//     return 0;
// }

// // Question 9

// int main()
// {
//     float deposit, interest, totalBalance;

//     printf("Enter the deposit amount: ");
//     scanf("%f", &deposit);

//     while (deposit <= 0)
//     {
//         printf("Inavalid amount! Please Enter the Valid deposit amount: ");
//         scanf("%f", &deposit);
//     }
//     if (deposit < 2000)
//     {
//         interest = deposit * 3 / 100.0;
//     }
//     else
//     {
//         if (deposit > 10000)
//         {
//             interest = deposit * 8 / 100.0;
//         }
//         else
//         {
//             interest = deposit * 5 / 100.0;
//         }
//     }
//     totalBalance = deposit + interest;
//     printf("Your total interest is %.2f and your total balance is %.2f.",interest, totalBalance);
//     return 0;
// }

// // 10. BMI Calculator with Category

// int main()
// {
//     float height, weight, BMI;

//     printf("Enter height in meters: ");
//     scanf("%f", &height);

//     printf("Enter weight in kg: ");
//     scanf("%f", &weight);

//     while (height <= 0 || weight <= 0)
//     {
//         printf("Invalid Input! Please Enter valid height in meters: ");
//         scanf("%f", &height);

//         printf("Invalid Weight! Please Enter valid weight in kg: ");
//         scanf("%f", &weight);
//     }

//     BMI = weight / (height * height);
//     if(BMI < 18.5){
//         printf("Underweight!\n");
//     }else{
//         if(BMI < 25){
//             printf("Normal!\n");
//         }else{
//             if(BMI < 30){
//                 printf("Overweight!\n");
//             }else{
//                 printf("Obese!\n");
//             }
//         }
//     }
//     return 0;
// }

// // Question 5

// int main()
// {
//     int lateDays, lateFee;

//     printf("Enter the late days: ");
//     scanf("%d", &lateDays);

//     while (lateDays <= 0)
//     {
//         printf("Please enter the valid late days: ");
//         scanf("%d", &lateDays);
//     }

//     if(lateDays <= 5){
//         lateFee = lateDays * 2;
//     }else{
//         if(lateDays < 10){
//             lateFee = (5 * 2) + (lateDays - 5) * 3;
//         }else{
//             lateFee = (5 * 2) + (5 * 3) + (lateDays - 10) * 5;
//         }
//     }
//     printf("Your total late fee is %d.", lateFee);
//     return 0;
// }

// Question 6

// int main()
// {
//     int principalAmount, rate, year;
//     float simpleInterest;

//     printf("Enter the principal amount: ");
//     scanf("%d", &principalAmount);

//     printf("Enter the rate: ");
//     scanf("%d", &rate);

//     printf("Enter the number of years: ");
//     scanf("%d", &year);

//     while (principalAmount <= 0 || rate <= 0 || year <= 0)
//     {
//         if (principalAmount <= 0)
//         {
//             printf("Please enter the valid principal amount: ");
//             scanf("%d", &principalAmount);
//         }
//         else if (rate <= 0)
//         {
//             printf("Please enter the valid rate: ");
//             scanf("%d", &rate);
//         }
//         else
//         {
//             printf("Please enter the valid number of years: ");
//             scanf("%d", &year);
//         }
//     }

//     simpleInterest = principalAmount * rate * year;
//     printf("\n\tYears\t")
// }

// // Movie Ticket Booking
// // Menu:
// // Standard – Rs.500
// // Premium – Rs.800
// // VIP – Rs.1200
// // Input ticket type and quantity.
// // Add 5% entertainment tax.
// // Display final amount and formatted bill.

// int main()
// {
//     int quantity, ticket;
//     float bill,totalBill;

//     printf("\n-------------------- Menu --------------------\n");
//     printf("\tS.No\tTicket Type         Price\n");
//     printf("\t1.\tStandard          - 500\n");
//     printf("\t2.\tPremium           - 800\n");
//     printf("\t3.\tVIP               - 1200\n");

//     printf("Enter ticket type(1 = Standard, 2 = Premium, 3 = VIP): ");
//     scanf("%d", &ticket);

//     while (ticket < 1 || ticket > 3)
//     {
//         printf("Please enter valid ticket type! ");
//         scanf("%d", &ticket);
//     }

//     switch (ticket)
//     {
//     case 1:
//     {
//         printf("Enter the quantity of tickets: ");
//         scanf("%d", &quantity);
//         while (quantity <= 0)
//         {
//             printf("Please enter valid quatity number!");
//             scanf("%d", &quantity);
//         }
//         bill = quantity * 500;
//         break;
//     }
//     case 2:
//     {
//         printf("Enter the quantity of tickets: ");
//         scanf("%d", &quantity);
//         while (quantity <= 0)
//         {
//             printf("Please enter valid quatity number!");
//             scanf("%d", &quantity);
//         }
//         bill = quantity * 800;
//         break;
//     }
//     case 3:
//     {
//         printf("Enter the quantity of tickets: ");
//         scanf("%d", &quantity);
//         while (quantity <= 0)
//         {
//             printf("Please enter valid quatity number!");
//             scanf("%d", &quantity);
//         }
//         bill = quantity * 1200;
//         break;
//     }
//     default:
//     {
//         printf("Invalid Inputs! ");
//     }
//     }
//     totalBill = bill + (bill * 5 / 100.0);
//     printf("Your total bill is %.2f.", totalBill);
//     return 0;
// }

// Fuel Efficiency Calculator
// Input total distance and fuel used (liters).
// Compute mileage = distance / fuel.
// Classify:
// 20 → Excellent
// 15–20 → Good
// <15 → Poor
// Validate inputs.

// int main()
// {
//     float totalDistance, fuel,mileage;

//     printf("Enter the distance (in km): ");
//     scanf("%f", &totalDistance);

//     printf("Enter used fuel (in litres): ");
//     scanf("%f", &fuel);

//     while (totalDistance <= 0 || fuel <= 0)
//     {
//         if (totalDistance <= 0)
//         {
//             printf("Please enter the valid distance (in km): ");
//             scanf("%f", &totalDistance);
//         }
//         else
//         {
//             printf("Please enter the valid used fuel (in litres): ");
//             scanf("%f", &fuel);
//         }
//     }
//     mileage = totalDistance / fuel;
//     if(mileage > 20){
//         printf("Excellent!\n");
//     }else{
//         if(mileage > 15){
//             printf("Good!\n");
//         }else{
//             printf("Poor!\n");
//         }
//     }
//     return 0;
// }

// . Salary Slip Generator
// Input: Basic salary.
// Calculate:
// HRA = 10% of basic
// DA = 5% of basic
// Tax = 8% if salary > 50000 else 4%
// Display gross salary, deductions, and net salary neatly.

// int main()
// {
//     float basicSalary, grossSalary, deductions, netSalary,HRA,DA,Tax;

//     printf("Enter your basic salary: ");
//     scanf("%f", &basicSalary);

//     while (basicSalary <= 0)
//     {
//         printf("Please enter the valid basic salary: ");
//         scanf("%f", &basicSalary);
//     }
//     if(basicSalary > 50000){
//         HRA = basicSalary * 10 / 100.0;
//         DA = basicSalary * 5 / 100.0;
//         Tax = basicSalary * 8 /100.0;
//     }else{
//         HRA = basicSalary * 10 / 100.0;
//         DA = basicSalary * 5 / 100.0;
//         Tax = basicSalary * 4 /100.0;
//     }
//     grossSalary = basicSalary + HRA + DA;
//     netSalary = grossSalary - Tax;
//     printf("\n\tBasic Salary\tGross Salary\tNet Salary\n");
//     printf("\t%.2f\t\t%.2f\t\t%.2f", basicSalary, grossSalary, netSalary);
//     return 0;
// }