## Exercise 01: My Awesome PhoneBook

Welcome to the 80s and their unbelievable technology! In this exercise, you will create a program that behaves like a **crappy awesome** phonebook software.

### Requirements

- **Turn-in directory:** `ex01/`
- **Files to turn in:** `Makefile`, `*.cpp`, `*.{h, hpp}`
- **Forbidden functions:** None

### Description

You need to implement two classes:

#### **PhoneBook**
- Contains an array of contacts.
- Can store a maximum of **8 contacts**. If the user adds a **9th contact**, the oldest one is replaced.
- **Dynamic allocation is forbidden.**

#### **Contact**
- Represents an individual contact in the phonebook.

The **PhoneBook** must be instantiated as an instance of the `PhoneBook` class, and each contact must be an instance of the `Contact` class.  
Design the classes logically:  
- **Private** members for internal use.  
- **Public** members for external access.  

### Program Behavior

On startup, the phonebook is empty. The user must enter one of **three commands**:  

#### **1. ADD - Save a new contact**
- Prompts the user for the following fields:  
  - First Name  
  - Last Name  
  - Nickname  
  - Phone Number  
  - Darkest Secret  
- **All fields must be filled; no empty fields allowed.**  
- The contact is then added to the phonebook.  

#### **2. SEARCH - Display saved contacts**
- Shows a list of saved contacts with **four columns**:  
  - `Index | First Name | Last Name | Nickname`  
- **Formatting rules:**  
  - Each column is **10 characters wide**.  
  - Text is **right-aligned**.  
  - If a field exceeds 10 characters, **truncate it and add a dot (`.`) at the end**.  
- The user is then prompted to enter an **index** to display full details.  
  - If the index is invalid, define an appropriate behavior.  
  - Otherwise, show all contact details **one field per line**.  

#### **3. EXIT - Quit the program**
- Closes the program and **deletes all contacts permanently**.  

### Additional Notes
- **Invalid inputs are ignored.**  
- After executing a command, the program **waits for another command**.  
- The program **only stops** when the user types `EXIT`.  
- Choose a **relevant name** for your executable file.  

