/*
1. sum method
    sum of n numbers = n(n+1)/2 = s1
    sum of all numbers in array = s2
    missing number = s1-s2

2. XOR method
    XOR => a^a = 0; a^0 = a;
    Why XOR is better? 
        - n = 10^5; sum = 10^5 (10^5+1)/2 ~ 10^10
        (this will need long type, ie., extra space)
*/