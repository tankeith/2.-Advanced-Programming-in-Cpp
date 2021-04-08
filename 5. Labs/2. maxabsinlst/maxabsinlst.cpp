// Implement function maxabsinlst(lst), which returns the maximum absolute value of the elements in the array
// E.g., given lst = [-19, -3, 20, -1, 5, -25], the function should return 25
int maxabsinlst(int lst[], int size) {
    int absValue;
    int biggestNum = 0;
    for (int index = 0; index < size; index++) {
        if (lst[index] < 0) {
            absValue = lst[index] * (-1);
                if (absValue > biggestNum)
                    biggestNum = absValue;
        }
        else if (lst[index] > biggestNum)
            biggestNum = lst[index];       
    }
    return biggestNum;
}
