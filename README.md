# Student Grades Management Program

## Description

This repository contains a C++ program designed to manage and analyze the grades of a class of students. The program is built as part of a project to practice array manipulation, input validation, and basic statistical operations. The main features of the program include input validation, grade calculations, and conditional updates to student grades.

## Features

- **Input Validation**: The program prompts the user to input the number of students (N), which must be between 20 and 30. If the input is outside this range, the program will request the user to input the number again until a valid value is provided.
- **Grade Storage**: The grades of the students are stored in an array.
- **Grade Calculations**:
  - **Total Sum of Grades**: Calculates the sum of all student grades.
  - **Class Average**: Computes and displays the average grade of the class.
  - **Highest Grade**: Identifies and displays the highest grade in the class.
  - **Average Range Grades**: Displays the grades that are within the average range (average - 1 to average + 1).
  - **Lowest Grade**: Identifies and displays the lowest grade in the class.
- **Conditional Grade Update**:
  - Students with grades less than or equal to 6 are assigned additional work, which adds one point to their original grade.
  - Generates a new array with the updated grades for these students and prints both the original and modified grades in separate columns.
- **Repeatable Calculations**: At the end of the program, the user is given the option to either recalculate grades for a new set of students or exit the program.

## Usage

1. Clone the repository to your local machine.
2. Compile the C++ program using your preferred compiler.
3. Run the executable and follow the on-screen instructions to input the number of students and their respective grades.
4. View the calculated results and decide whether to perform another set of calculations or exit the program.

## Getting Started

1. **Clone the repository**:
    ```sh
    git clone https://github.com/yourusername/student-grades-management.git
    ```

2. **Navigate to the project directory**:
    ```sh
    cd student-grades-management
    ```

3. **Compile the program**:
    ```sh
    g++ -o grades_management main.cpp
    ```

4. **Run the program**:
    ```sh
    ./grades_management
    ```

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

