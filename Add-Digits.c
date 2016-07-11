/*
Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.

For example:

Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it.
*/

//c version
int addDigits(int num) {
    int count=0;
    do{
        while(num>0){

        count+=num%10;
        num=num/10;
        }
    num=count;
    }while(num>=10)

    return count;
}
//time limit