/*
202. Happy Number  QuestionEditorial Solution  My Submissions
Total Accepted: 77703
Total Submissions: 207521
Difficulty: Easy
Write an algorithm to determine if a number is "happy".

A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.

Example: 19 is a happy number

1^2 + 9^2 = 82
8^2 + 2^2 = 68
6^2 + 8^2 = 100
1^2 + 0^2 + 0^2 = 1
Credits:
Special thanks to @mithmatt and @ts for adding this problem and creating all test cases.
*/

bool isHappy(int n) {
    int count=0;
    int st;

    do{
        count=0;

        do{
            int tmp=n%10;
            count+=t*t;
            n=n/10;
        }while(n>0);

        
        n=count;
    }while(n>=10);

    return n==1;
}