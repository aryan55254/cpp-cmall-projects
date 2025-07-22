# Student Roster Management System in C++

This is a command-line application for creating and managing a roster of students and their grades. The program asks the user for the number of students in a class, then dynamically allocates memory to store each student's name and grade. Finally, it displays the complete roster.

This project was built as a deep dive into manual memory management and robust input handling in C++.

---
## Core Concepts Practiced

* **Dynamic Memory Allocation:** This is the key focus of the project. It uses `new[]` to allocate memory for arrays on the heap based on user input, and `delete[]` to responsibly free that memory, preventing memory leaks.
* **Pointers:** Pointers are used to manage the dynamically allocated arrays.
* **Parallel Arrays:** The roster is managed using two separate arrays (`std::string*` for names and `int*` for grades) where the indices correspond between the two.
* **Robust Input Validation:**
    * The program validates numeric input to ensure the user enters a valid number and doesn't crash the program with text input.
    * It correctly handles the complexities of mixing `std::cin` and `std::getline` by clearing the input buffer with `std::cin.ignore()`.
* **`std::string` and `getline()`:** The program uses modern `std::string` objects and the `getline()` function to handle student names that may include spaces.