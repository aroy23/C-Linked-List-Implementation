# C Linked List Implementation

This repository contains a C program that allows you to create a doubly linked list of integers based on user input. It prompts the user to enter the number of desired elements for the linked list and then takes input for each element to construct the list. Finally, it prints out the created linked list and deallocates the memory.

## Prerequisites

- C compiler (gcc recommended)
- Basic understanding of C programming language

## Getting Started

1. **Clone the Repository:**

    ```bash
    git clone https://github.com/your-username/C-Linked-List-Implementation.git
    ```

2. **Compile the Program:**

    Navigate to the directory containing the source code and compile the program using your preferred C compiler. For example, using `gcc`:

    ```bash
    gcc linked_list_creator.c -o linked_list_creator
    ```

3. **Run the Program:**

    Execute the compiled binary:

    ```bash
    ./linked_list_creator
    ```

4. **Follow the Instructions:**

    The program will prompt you to enter the number of elements you want in the linked list and then the values for each element.

5. **View the Output:**

    After inputting all the values, the program will display the created linked list then free all the elements in the linked list.

## Program Overview

The program consists of the following files:

- `main.c`: Contains the main program logic.
- `README.md`: This file, providing information about the program.

## Program Structure

The program is structured as follows:

- **`struct Node` Definition:** Defines a structure for a node in the linked list, containing an integer value and pointers to the next and previous nodes.
  
- **`createLinkedList` Function:** Creates a doubly linked list of the specified number of integer elements based on user input. It prompts the user to enter values for each element and constructs the linked list accordingly.

- **`main` Function:** The entry point of the program. It initializes variables, calls the `createLinkedList` function, prints the created linked list, and deallocates memory.

## Usage

1. Run the program as described in the "Getting Started" section.
2. Enter the number of elements you want in the linked list.
3. Input the values for each element as prompted.
4. View the printed linked list output.
