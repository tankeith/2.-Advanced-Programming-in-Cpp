// Implement function avgoflst(lst), which returns the average value of the elements in the array
// E.g., given lst = [19, 2, 20, 1, 0, 18], the function should return 10
float avgoflst(int lst[], int size) {
    float sum;
    float average;
    
    sum = 0;
    for (int i = 0; i < size; i++) 
        sum += lst[i];

    average = sum / size;

    return average;
}
