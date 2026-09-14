# 🏦 Bank Management System

A simple **Bank Management System** developed in **C programming language**. This project is a console-based application that allows users to perform basic banking operations such as creating a new account, depositing money, withdrawing money, and viewing all account details.

## 📌 Features

* 🆕 **Create New Account**

  * Enter account number
  * Enter account holder name
  * Enter initial balance

* 💰 **Deposit Money**

  * Search for an account using the account number
  * Deposit money into the account
  * Display the updated balance

* 💸 **Withdraw Money**

  * Search for an account using the account number
  * Withdraw money from the account
  * Display the updated balance

* 📋 **View All Accounts**

  * Display account number
  * Display account holder name
  * Display current balance

* 🚪 **Exit**

  * Exit the application safely

The main menu provides these five options: Create Account, Deposit, Withdrawal, View All Accounts, and Exit.

## 🛠️ Technologies Used

* **Programming Language:** C
* **Concepts Used:**

  * Structures
  * Arrays
  * Functions
  * Loops
  * Conditional Statements
  * Switch Case
  * Variables and Data Types
  * Basic File/Console Input & Output

## 📂 Project Structure

```text
Bank_management-system/
│
├── BANK_C.CPP
└── README.md
```

## ⚙️ How It Works

The project uses a `struct Account` to store the details of each bank account:

```c
struct Account
{
    int accNo;
    char name[50];
    float balance;
};
```

The program can store up to **100 accounts** using an array of `Account` structures.

### Main Operations

#### 1. Create Account

The user enters an account number, account holder name, and initial amount. The account is then added to the bank's account list.

#### 2. Deposit Money

The program searches for the account number and adds the entered deposit amount to the existing balance.

#### 3. Withdraw Money

The program searches for the account number and subtracts the entered withdrawal amount from the account balance.

#### 4. View All Accounts

All created accounts are displayed with their account number, account holder name, and balance.

## ▶️ How to Run

### Using Turbo C / DOSBox

This program uses functions such as `clrscr()` and `getch()` from `conio.h`, which are commonly associated with older Turbo C environments.

1. Open the source file in Turbo C.
2. Compile the program.
3. Run the program.
4. Select an option from the main menu.
5. Follow the instructions displayed on the screen.

### Example Menu

```text
        BANK MANAGEMENT SYSTEM
        ======================

1. Create New Account
2. Deposit Money
3. Withdrawal Money
4. View All Accounts
5. Exit

Select an option (1-5):
```

## 🎯 Purpose of the Project

The main purpose of this project is to demonstrate the implementation of a basic banking system using **C programming fundamentals**. It is suitable as a beginner-level academic project for understanding structures, functions, arrays, loops, and menu-driven programming.

## 📚 Learning Outcomes

Through this project, you can understand:

* How structures are used to store related data
* How arrays can store multiple records
* How functions divide a program into smaller modules
* How menu-driven programs work
* How account balances can be updated using deposit and withdrawal operations
* How `switch-case` statements are used for menu selection

## ⚠️ Limitations

This is a basic educational project and does not represent a real-world banking application.

* Data is stored only while the program is running.
* There is no database or permanent data storage.
* There is no login or authentication system.
* Advanced banking features are not included.
* The program is designed primarily for learning C programming concepts.

## 🚀 Future Improvements

The project can be further improved by adding:

* 🔐 User login and authentication
* 💾 File handling for permanent account storage
* 🔎 Search account functionality
* ✏️ Update account details
* 🗑️ Delete account functionality
* 💳 Money transfer between accounts
* 📜 Transaction history
* 🔒 PIN/password protection
* ✅ Validation for deposits and withdrawals
* 🗄️ Database integration

## 👨‍💻 Author

**Nagendra Pal Singh**

Feel free to ⭐ **Star** this repository and use the project for learning and academic purposes.

