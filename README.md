# Array-Operations-in-C
***
This is a C program that implements a simple menu-driven array manipulation program. The program provides the following options:

1. Create: Allows the user to create an array by inputting its size and elements.
2. Insertion Sort: Sorts the elements of the array using the insertion sort algorithm.
3. Insert: Inserts an element into the array at a specified position.
4. Delete: Deletes a specified element from the array (if it exists) and adjusts the array accordingly.
5. Traverse: Displays the elements of the array.
6. Search: Searches for a specified element in the array and displays its position(s) if found.

The program uses global variables to store the array and its size and defines functions for each operation. The main function contains a do-while loop that displays the menu and waits for the user to select an option until the user chooses to exit.

Here's a brief overview of the functions:

1. `void create()`: Allows the user to create an array by inputting its size and elements.
2. `void insertion_sort()`: Sorts the array using the insertion sort algorithm.
3. `void insert()`: Inserts an element into the array at a specified position.
4. `void delete()`: Deletes a specified element from the array (if it exists) and adjusts the array accordingly.
5. `void traverse()`: Displays the elements of the array.
6. `int search()`: Searches for a specified element in the array and displays its position(s) if found.

The program uses a switch-case statement to determine which function to invoke based on the user's input. The main loop continues until the user chooses the "`Exit`" option (option 7).

>Note: The use of the name `delete` as a function name is not recommended, as it's a reserved keyword in C++. While it will work in C, using a different function name would be a better practice to avoid potential conflicts if the code is later used in a C++ context.

The code doesn't include error handling for invalid input, array bounds checking, or dynamic memory management. In a real-world application, you'd want to add appropriate error handling and boundary checks to make the program more robust and secure.
