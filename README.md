# Contact Manager (C++ OOP Project)

## Overview
A simple console-based Contact Management System built using C++ and Object-Oriented Programming principles.

The project allows users to manage contacts through basic CRUD operations.

---

## Features
- Add new contact
- Edit contact (by name or number)
- Delete contact (by name or number)
- Search contact (by name or number)
- Display all contacts

---

## Technologies Used
- C++
- Object-Oriented Programming (OOP)
- Standard Library (iostream, string)

---

## Project Structure
- `Contact` class: represents a single contact
- `Contact_Manager` class: handles all operations on contacts
- `main.cpp`: user interface and menu system

---

## Limitations (Current Version)
- Fixed-size array (max 1000 contacts)
- Console-based interface only
- No data persistence (contacts are lost after program exit)

---

## Future Improvements
- Replace fixed array with `std::vector`
- Add file saving/loading (persist contacts)
- Improve input validation (email, phone format)
- Add search by partial name
- Prevent duplicate contacts
- Improve UI structure and reduce repeated code
- Add sorting (by name or number)

---

## Author
- Built as a C++ OOP learning project
