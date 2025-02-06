## Exercise 02: The Job Of Your Dreams

Welcome to your first day at **GlobalBanksters United**! You landed this job thanks to your impressive Microsoft Office tricks and lightning-fast Adobe Reader installation skills. But now, it’s time to prove your worth as a developer.

### Requirements

- **Turn-in directory:** `ex02/`
- **Files to turn in:** `Makefile`, `Account.cpp`, `Account.hpp`, `tests.cpp`
- **Forbidden functions:** None  
- **Provided files:** `Account.hpp`, `tests.cpp`, and a log file (available for download on the intranet).  

### The Challenge

Disaster struck! A **source file (`Account.cpp`) was accidentally deleted**.  
Your new colleagues, who still rely on USB keys instead of Git, need your help to **recreate the missing file**.  

Luckily, you have:  
- The header file: `Account.hpp`  
- A log file containing past program output  
- The test file: `tests.cpp`, which reveals what functions the missing `Account.cpp` file should implement  

You accept the challenge!  

### Your Mission

1. **Analyze `Account.hpp` and `tests.cpp`** to understand the class structure.  
2. **Reimplement `Account.cpp`** based on the test cases and function prototypes.  
3. **Compare the program’s output to the log file** to ensure correct functionality.  
4. **Handle timestamps correctly** – since the tests in the log file were run before you were hired, timestamp differences are expected.  

### Additional Notes

- The **order of destructor calls** may vary depending on the **compiler and operating system**.  
- The program passes when its output (except timestamps) **perfectly matches** the log file.  
