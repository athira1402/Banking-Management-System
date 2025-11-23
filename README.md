# Banking-Management-System
Design and Development of Banking Management System

## Overview
The Banking Management System is a socket-based client–server application designed to simulate the core operations of a bank. It supports role-based access control for customers, employees, managers, and administrators, with secure login mechanisms and concurrency-safe transaction handling.

The system focuses on:

- Data consistency across multiple concurrent clients
- Secure operations using proper authentication
- Concurrency control using file locking and process synchronization
- Role-specific features to manage accounts, transactions, and loans
--- 
## Features
### Customer
- Secure Login (single active session)
- View Account Balance
- Deposit / Withdraw Money
- Transfer Funds
- Apply for a Loan
- Change Password
- Add Feedback
- View Transaction History
- Logout & Exit
  
### Bank Employee
- Add New Customer
- Modify Customer Details
- Process Loan Applications (Approve/Reject)
- View Assigned Loan Applications
- View Customer Transactions (Passbook feature)
- Change Password
- Logout & Exit
  
### Manager
- Activate/Deactivate Customer Accounts
- Assign Loan Applications to Employees
- Review Customer Feedback
- Change Password
- Logout & Exit
  
### Administrator
- Add New Bank Employee
- Modify Customer/Employee Details
- Manage User Roles
- Change Password
- Logout & Exit

---

## Technical Details
- Language: C
- Architecture: Client–Server
- Concurrency: Multiple clients handled concurrently using sockets
- File Handling: Accounts, transactions, and credentials stored in dat files
- Race Condition Handling: File locking (fcntl) for concurrent writes
- Synchronization: Process synchronization via system calls
- System Calls Used: File I/O, process control, socket APIs

## Class Diagram
<img width="377" height="331" alt="image" src="https://github.com/user-attachments/assets/ca4a4340-ad78-43a0-b717-b196fd1dc588" />
