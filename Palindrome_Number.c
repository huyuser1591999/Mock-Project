#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPalindrome(int x)
{
    // int i = 0;
    // int dividedNum, remainderNum;
    // int* arr = (int*)malloc(i * sizeof(int));
    // while(x > 0)// x = 121
    // {
    //     remainderNum = x % 10;
    //     x = x / 10;
    //     i++;
    //     arr = (int*)realloc(arr, i * sizeof(int));
    //     arr[i - 1] = remainderNum;
    // }

    // int start, end;
    // start = 0;
    // end = i - 1;
    // while(arr[start] == arr[end])
    // {
    //     start++;
    //     end--;
    //     if(start == end || end < start)
    //     {
    //         return true;
    //     }
    // } 
    // return false;

    long reserved = 0;
    int num = x;
    while (num > 0)
    {
        reserved = (reserved * 10) + (num % 10);
        num /= 10;
    }
    
    return reserved == x;
}

int main()
{
    if(isPalindrome(145541))
    {
        printf("true");
    }
    else{
        printf("fall");
    }
    return 0;
}