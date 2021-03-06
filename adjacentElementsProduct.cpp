/*
Given an array of integers, find the pair of adjacent elements that has the largest product and return that product.

Example

For inputArray = [3, 6, -2, -5, 7, 3], the output should be
adjacentElementsProduct(inputArray) = 21.

7 and 3 produce the largest product.

Input/Output

[time limit] 500ms (cpp)
[input] array.integer inputArray

An array of integers containing at least two elements.

Guaranteed constraints:
2 ≤ inputArray.length ≤ 10,
-1000 ≤ inputArray[i] ≤ 1000.

[output] integer

The largest product of adjacent elements.

*/
int adjacentElementsProduct(std::vector<int> inputArray) {
    int largest_product = 0;
    int array_length = inputArray.size();
    for(unsigned int i = 0; i < array_length - 1; i++)
    {
        int product = inputArray[i] * inputArray[i + 1];
        if(product > largest_product || i == 0)
        {
            largest_product = product;
        }
    }
    return largest_product;
}
