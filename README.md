# 📞 My Awesome PhoneBook

This project is part of the **C++ Module 00** at 42.  
The goal is to implement a simple command-line phonebook program using basic C++ concepts such as classes, member functions, arrays, and I/O streams.

---

## 📌 Description

The program allows the user to interact with a phonebook using three commands:

- `ADD`    → Add a new contact (max 8, overwriting the oldest after that)
- `SEARCH` → View a list of saved contacts and select one for details
- `EXIT`   → Quit the program

Each contact includes the following fields:

- First Name
- Last Name
- Nickname
- Phone Number
- Darkest Secret

The program does not use dynamic allocation or STL containers.

---

## ⚙️ Build

Use the provided `Makefile`:

```bash
make
```

This will compile the program into an executable (e.g. `phonebook`).

---

## 🚀 How to Use

```bash
./phonebook
```

Then follow the on-screen prompts:

- Use `ADD` to input a new contact.
- Use `SEARCH` to list saved contacts and view one in detail.
- Use `EXIT` to quit the program.

```text
Enter command : [ADD, SEARCH, EXIT]
```

When using `SEARCH`, you will be asked to enter the index of the contact to view its full information. Input validation is included.

---

## 📦 File Structure

```text
ex01/
├── Makefile
├── main.cpp
├── Contact.hpp / Contact.cpp
├── PhoneBook.hpp / PhoneBook.cpp
```

---

## 💡 Implementation Notes

- A contact list of 8 entries is stored in a fixed-size array: `Contact _contacts[8];`
- Entries beyond the 8th overwrite the oldest entry (circular indexing).
- Empty input fields are rejected.
- Output formatting for `SEARCH`:
  - Each field is shown in 10-character-wide columns.
  - Text longer than 10 characters is truncated and ends with a `.`.
  - Right-aligned using `std::setw()`.

---

## ✅ Features Implemented

- ✅ Static array-based contact storage
- ✅ Input validation for empty fields
- ✅ Circular overwrite logic for >8 entries
- ✅ Contact summary and detailed view
- ✅ Graceful handling of invalid input

---

## 🧠 Concepts Learned

- Classes and encapsulation
- Arrays and enum indexing
- Member functions and constructor overloading
- I/O formatting using `iostream` and `iomanip`
- Enum usage for field management
- `static const` for safe constant definition
- Self-assignment check in copy assignment
- Orthodox Canonical Form implementation

---

