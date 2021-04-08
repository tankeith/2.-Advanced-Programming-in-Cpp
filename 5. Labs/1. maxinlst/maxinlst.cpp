// Implement function maxinlst(lst), which returns the maximum value of the elements in the array
// E.g., given lst = [-19, -3, 20, -1, 5, -25], the function should return 20
int maxinlst(int lst[], int size) {
    int biggestNum = 0;
    for (int index = 0; index < size; index++) {
        if (lst[index] > biggestNum)
            biggestNum = lst[index];
    }
    return biggestNum;
}