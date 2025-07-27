# Student Database Management System (C++)

This is a simple Student Database Management System (DBMS) implemented in C++. The program allows you to enter details of students, calculate their marks, check if they have passed, and allot seats based on entrance exam ranks.

## Features

- Input student name and USN (University Serial Number)
- Input marks for 3 subjects and calculate the average percentage
- Pass/Fail status based on percentage (40% is the passing mark)
- Allotment of seat (CS, IS, or EC) based on entrance exam rank

## How It Works

1. The program welcomes you to the Student DBMS.
2. For each student (the sample runs for 2 students):
   - Enter the student's name and USN.
   - Enter marks for 3 subjects.
   - The program calculates the average and displays if the student has passed or failed.
   - Enter the entrance exam rank.
   - The program allots a seat based on the rank:
     - **CS**: Rank 5000 to 15000
     - **IS**: Rank 15001 to 30000
     - **EC**: All other ranks

## Sample Output

```
WELCOME TO STUDENT DATA BASE MANAGEMENT SYSTEM!

ENTER YOUR NAME AND USN:
John 1RV19CS001
John:1RV19CS001
ENTER THE MARKS OF 3 SUBJECTS:
80 70 90
THE MARKS ARE:80 70 90
pass Percentage is:80
ENTER YOUR ENTRANCE EXAM RANK:
9000
STUDENT IS ALLOTTED TO CS SEAT
```

## How to Run

1. Make sure you have a C++ compiler (like g++) installed.
2. Compile the code:
   ```
   g++ minipro2.cpp -o student_dbms
   ```
3. Run the program:
   ```
   ./student_dbms
   ```

## Notes

- The program currently allows entry for two students. You can modify `int num=2;` in `main()` to change this.
- Input is taken from the console. Follow the prompts for each entry.

## License

This project is for educational purposes.
