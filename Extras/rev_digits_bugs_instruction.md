There is a bug in the [rev_digits.cpp](https://replit.com/@ArcadioBuendia/Seventeen#while/rev_digits.cpp) program. This bug needs to be patched and here is the info.

Expected Behaviour
```
Enter a number to get it's reverse: 90
The reverse of the given number is: 09
```

Actual Behaviour
```
Enter a number to get it's reverse: 90
The reverse of the given number is: 9
```
*Also check the behaviour for integral powers of 10.*

The bug effects any multiple of 10 by not writing the leading zeroes thus making the program ineffective. 

This program needs to be patched so that we get the expected behaviour. 

You may solve this in two ways:

 1. Use a search engine to find out how you can write zeroes infront of a number.

 2. Check the references for [iomanip](https://en.cppreference.com/w/cpp/header/iomanip) header file. You are looking for setw.