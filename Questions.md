** The solution [rev_digits.cpp](https://replit.com/@ArcadioBuendia/Seventeen#while/rev_digits.cpp) for 18th may question has a bug that makes it unusable for multiples of 10. Here are some [instructions](https://replit.com/@ArcadioBuendia/Seventeen#Extras/rev_digits_bugs_instruction.md) to fix it.** 


# 18th May

 ---------------------------------------------------------------------- 


 - **Write a program to take the marks obtained in math by 5 students and show the average of these marks.**
 ```
 Sample output
 Enter the math scores of 5 students seperated by space: 90 99 76 21 43
 The average of marks is: 65.8
 ```
 **Write a program to take the marks obtained in math for an arbitary number of students and show their average.**
 ```
 Enter math scores for you students, seperated by space: 21 32 43 54 65 76 87
 The average of their marks is:54
 ```

 - **WAP to print the reverse of a user given number.**
 ```
 Sample output
 Enter a number to find it's reverse: 9984
 The reverse of 9984 is: 4899
 ```

 - **The following code is supposed to give the area of a rectangle, if it's length matches a certain criteria. But it doesn't work,correct it.**
 ```
 ++#include<iostream>
 using namespace std;
 int main(){
  cou>>"Enter the length followed by the breadth of rectangle \n";
  cin<<length>>breadth;
  while{length<20}{
    cout>>"The rectangle must be bigger than 20 cm long \n";
    cout>>"Please re-enter the length:;
    cin<<length;
  }
  cout<<"Area of the rectange is: "<<length*breath;
  reurn 0;
 }
 ```
 ```Do try to understand the purpose of the program before starting to remove code```

 - **The following program is supposed to print the sum of digits for every integer in a range given by the user. But it doesn't work, correct it.**
 ```
 #include<iostream>
 using namesace std;
 int main(){
   int up_bound,low_bound, sum=0;
   while(low_bound<up_bound){
     int alias_low=low_bound
     low_bound;
     while(low_bound/10>0){
       sum+=low_bound%10;
       low_bound/=10;
     }
     cout<<"The sum of digits for "<<alias_low<<" is"<<sum;
   }
 }
 ```
 ```Do try to understand the purpose of the program before starting to remove code```


 - **Write a program to print the multiplication table till a user given number. If the user enters 5, print multiplication tables for 1, 2, 3, 4 and 5.**


 - **Given two numbers by the user swap the variables they are stored in.
 [Click here, if not clear.](https://replit.com/@ArcadioBuendia/Seventeen#Extras/embed.draw)**
 ```
 Sample output 
 Enter two numbers: 18 19
 I took a=18 and b=19
 I've swapped the values and now b=18 and a=19
 ```
 ``` Unlike other programs whose output suffices to say that the answer is correct. In  this program you are not supposed to decieve the user.```

 **Some questions might not be clear, feel free to ask**

---------------------------

# 16th May


1. WE have used "a++" where "++" is called the increment operator. Use the decrement operator "--" to print the numbers from a user given number down to 0.
[solution](https://replit.com/@ArcadioBuendia/Seventeen#while/decrement_while.cpp)


2. Find the sum of all numbers in the range of two numbers given by the user.

input | output
------|------
3,4|3
2,5|9
1,6|15
_the numbers in the left coloumn represent two input numbers.
[Solution](https://replit.com/@ArcadioBuendia/Seventeen#while/sum_in_range.cpp)

3. Write a program to print the sum of all digits in a given number.
example

example input|example output
-----|-------
1729|20
11|2
2231|8

 ``` a!=b is the syntax for "a is not equanl to  b"```


 ```
 while(a!=b){
  statement;
 } //The loops continues till a=b
 ```
 
 The input taken in the left coloumn should give the output in the right coloumn.[Solution](https://replit.com/@ArcadioBuendia/Seventeen#while/sum_of_digits.cpp)

 5. Generate the following sequence till n(user given) numbers are reached:
 5,6,11,17,28,45,73,118,......
 [Solution](https://replit.com/@ArcadioBuendia/Seventeen#while/sequence_prob.cpp)

 *The questions are in increasing order of difficulty*

 *Do any one or more (try all) of the above questions.*


# First
#### 1. Write a program for loan calculations with the following criteria.

Take the following data from user:
- The loan amount
- The interest rate
- The amount he is willing to pay per month

Give the user the following information:
- How many months will it take to pay off the loan.

*hint:interest are recalculated after certain time-period*

*Use float instead of int for variables in the above program*

**Take a look at Help_programs, there are a few new things there.**
#### 2. Find the errors in the following code
``` 
#include<iostream>
using namespace std;
int main(){
  cout<<"Hello World" <<endl;
  cout<<"I want a "BMW"";
  return 0;
}
```
Run the code after correcting all of them.