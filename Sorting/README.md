[Insertion Sort](#insertion-sort) <br>
[Bubble Sort](#bubble-sort)<br>
[Selection Sort](#selection-sort-algorithm)

# Insertion Sort
### Initial array:
[5, 2, 4, 6, 1, 3]

### Algorithm Execution:
- **Time Complexity (TC):** O(n^2)
- **Space Complexity (SC):** O(1)

### 1st iteration (i = 1):
- **key:** 2
- **j:** 0
- **Action:** Since `arr[0] > key`, shift `arr[0]` to the right.
- **Updated Array:** [2, 5, 4, 6, 1, 3]

### 2nd iteration (i = 2):
- **key:** 4
- **j:** 1
- **Action:** Since `arr[1] > key`, shift `arr[1]` to the right.
- **Updated Array:** [2, 4, 5, 6, 1, 3]

### 3rd iteration (i = 3):
- **key:** 6
- **j:** 2
- **Action:** No shift needed.
- **Array remains:** [2, 4, 5, 6, 1, 3]

### 4th iteration (i = 4):
- **key:** 1
- **j:** 3
- **Action:** Since `arr[3] > key`, shift elements to the right.
- **Updated Array:** [1, 2, 4, 5, 6, 3]

### 5th iteration (i = 5):
- **key:** 3
- **j:** 4
- **Action:** Since `arr[4] > key`, shift elements to the right.
- **Updated Array:** [1, 2, 3, 4, 5, 6]

# Bubble Sort
### Initial array:
[5, 2, 4, 6, 1, 3]

### Algorithm Execution:
- **Time Complexity (TC):** O(n^2) in the worst case.
- **Space Complexity (SC):** O(1)

### 1st Pass:
- **Iteration 1:** Comparing elements 5 and 2, swapping them: [2, 5, 4, 6, 1, 3]
- **Iteration 2:** Comparing elements 5 and 4, no swap.
- **Iteration 3:** Comparing elements 5 and 6, no swap.
- **Iteration 4:** Comparing elements 6 and 1, swapping them: [2, 5, 4, 1, 6, 3]
- **Iteration 5:** Comparing elements 6 and 3, swapping them: [2, 5, 4, 1, 3, 6]

### 2nd Pass:
- **Iteration 1:** Comparing elements 2 and 5, no swap.
- **Iteration 2:** Comparing elements 5 and 4, swapping them: [2, 4, 5, 1, 3, 6]
- **Iteration 3:** Comparing elements 5 and 1, swapping them: [2, 4, 1, 5, 3, 6]
- **Iteration 4:** Comparing elements 5 and 3, swapping them: [2, 4, 1, 3, 5, 6]

### 3rd Pass:
- **Iteration 1:** Comparing elements 2 and 4, no swap.
- **Iteration 2:** Comparing elements 4 and 1, swapping them: [2, 1, 4, 3, 5, 6]
- **Iteration 3:** Comparing elements 4 and 3, swapping them: [2, 1, 3, 4, 5, 6]

### 4th Pass:
- **Iteration 1:** Comparing elements 2 and 1, swapping them: [1, 2, 3, 4, 5, 6]
- **Iteration 2:** Comparing elements 2 and 3, no swap.

### 5th Pass:
- **Iteration 1:** Comparing elements 1 and 2, no swap.

### Array after sorting:
[1, 2, 3, 4, 5, 6]

# Selection Sort Algorithm:

#### Overview:
- **Time Complexity (TC):** O(n^2)
- **Space Complexity (SC):** O(1)

#### Algorithm Execution:
1. **Outer Loop (i):**
    - Iterates over each element of the array, except the last one.
    - Keeps track of the index of the minimum element.

2. **Inner Loop (j):**
    - Starts from the current index (i) and iterates till the end of the array.
    - Finds the index of the minimum element in the unsorted portion of the array.

3. **Swap (if necessary):**
    - After finding the index of the minimum element, checks if it's different from the current index (i).
    - If so, swaps the elements at the current index (i) and the index of the minimum element.

#### Detailed Steps:
1. Start with the first element (index 0) and assume it as the minimum.
2. Iterate through the remaining elements to find the actual minimum element in the unsorted portion of the array.
3. If the index of the minimum element is different from the assumed minimum (i), swap the elements.
4. Repeat steps 1-3 until the entire array is sorted.

#### Example:
Initial array: [5, 2, 4, 6, 1, 3]

1. **First Pass:** Find the minimum element and swap it with the first element.
    - Array after first pass: [1, 2, 4, 6, 5, 3]
2. **Second Pass:** Find the minimum element in the remaining unsorted portion and swap if necessary.
    - Array after second pass: [1, 2, 3, 6, 5, 4]
3. **Third Pass:** Continue the process until the array is sorted.

#### Conclusion:
- Selection sort works by repeatedly selecting the minimum element from the unsorted portion and swapping it with the first unsorted element.
- Despite its simplicity, it has a quadratic time complexity and is not efficient for large datasets.
