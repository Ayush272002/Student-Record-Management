# Student Record Management System

A simple Student Record Management System implemented in C. This project uses a **linked list** to store student records, including details like student ID, name, age, gender, grades, and average grade. It supports adding, viewing, searching, and deleting student records, all through a user-friendly interactive console interface.

## Features

- Add a new student to the system.
- View all student records.
- Search for a student by their unique ID.
- Delete a student record by ID.
- Calculate and display the average grade of each student.
- Built using a **linked list** for efficient dynamic memory management.

## Directory Structure

```text
/project-root
├── Makefile            # Build automation
├── header/             # Header files
│   └── student.h       # Student data structure and function declarations
├── src/                # Source files
│   ├── main.c          # Main program logic
│   └── student.c       # Student record management logic
├── build/              # Build directory (contains .o files and the final executable)
└── README.md           # Project documentation
```

## Compilation and Execution

### Prerequisites

- **gcc** (GNU Compiler Collection) must be installed.

### Build and Run

To build the project and create the executable:

```bash
make
```

This will compile the code and create the `student_app` binary inside the `build/` directory.

To run the program:

```bash
make run
```

To clean up build artifacts:

```bash
make clean
```

### Makefile Breakdown

- **all**: The default target which compiles and links the project to create the executable (`student_app`).
- **run**: Runs the compiled program.
- **clean**: Removes all object files and the final executable, cleaning the build directory.

## Functions and Workflow

### 1. **Add Student**

- Prompts the user to input the student's details: ID, first name, last name, age, gender, and grades for 5 subjects.
- The student's record is added to the linked list.

### 2. **View All Students**

- Displays the list of all students currently in the system, showing their ID, name, age, gender, and average grade.

### 3. **Search for a Student by ID**

- Prompts the user for a student ID.
- Searches the linked list for the student with that ID and displays the student's details.

### 4. **Delete a Student by ID**

- Prompts the user for a student ID.
- Deletes the student with the specified ID from the linked list (if found).

## Example Usage

Upon running the program, you will be presented with a menu:

```
----- Student Record Management -----
1. Add Student
2. View All Students
3. Search Student by ID
4. Delete Student by ID
5. Exit
```

You can choose an option by entering the corresponding number. Here’s an example of a session:

```
----- Student Record Management -----
1. Add Student
2. View All Students
3. Search Student by ID
4. Delete Student by ID
5. Exit
Enter your choice: 1

Enter ID : 1
Enter First Name: John
Enter Last Name: Doe
Enter Age: 20
Enter Gender (M/F): M
Enter grades for 5 subjects:
Grade 1: 85
Grade 2: 90
Grade 3: 88
Grade 4: 92
Grade 5: 80
Student added successfully.

----- Student Record Management -----
1. Add Student
2. View All Students
3. Search Student by ID
4. Delete Student by ID
5. Exit
Enter your choice: 2
ID: 1, Name: John Doe, Age: 20, Gender: M, Avg Grade: 87.00
```

## Contributing

Feel free to fork this repository and contribute. Here are a few ways you can help:

- Reporting bugs
- Suggesting new features
- Fixing issues and submitting pull requests

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.