# 🏛️ Advanced C++ OOP: Hierarchy, Inheritance & Polymorphism

A professional-grade C++ sandbox demonstrating core and advanced paradigms of **Object-Oriented Programming (OOP)**. This repository contains distinct modular sub-systems designed to showcase runtime polymorphism, abstract interface enforcement, dynamic memory lifecycles, and class inheritance hierarchies.

---

## 🚀 Key Technical Highlights (Resume Features)

* **Runtime Polymorphism & Dynamic Binding:** Utilizes pure virtual functions (`virtual void printInformation() = 0` and `virtual float getPower() = 0`) to enforce strict interface compliance across derived object structures.
* **Hierarchical Inheritance & Subcontracting:** Features complex multi-class structures where base properties cleanly propagate down to specific sub-types (e.g., `Employee` branching into specialized `Manager`, `Developer`, and `Intern` layouts).
* **Polymorphic Data Collections:** Leverages C++ pointer arrays and dynamic collections (like `std::vector<Spell*>`) to manage multiple heterogeneous objects uniformly under a single base-class reference.
* **Safe Resource Lifecycle Management:** Implements explicit virtual destructors to ensure memory structures allocated via `new` are cleanly released sequentially, preventing memory leaks during polymorphic deletions.

---

## 📁 Repository Architecture & Applications

The repository isolates distinct computational domains, each focusing on a specific academic OOP scenario:

### 💼 1. Corporate Employee Management System (`/Corporate-HR`)
* **Core Focus:** Structural inheritance and encapsulated payroll algorithms.
* **Components:** * `company.h` / `company.cpp`: Defines the abstract base `Employee` and derived computational components (`Manager`, `Developer`, `Intern`).
  * `week2s2.cpp`: Orchestrates instance allocations, state displays, and localized payroll tracking formulas.

### 🪄 2. Fantasy Spell Casting Engine (`/Magic-Engine`)
* **Core Focus:** Interface contracting, abstract properties, and vtable routing.
* **Components:**
  * `magic.h` / `magic.cpp`: Implements custom behaviors for classical entity spells (`Expelliarmus`, `Stupefy`, `Lumos`, etc.) matching strict mana/power calculations.
  * `week3s1.cpp`: Evaluates dynamic pointer arrays and execution loop iterations.
  * `README.txt`: Theoretical breakdown answering core interview questions on virtual destructors and compile-time vs. runtime polymorphism.

---

## 🧠 Core Computer Science Concepts Exhibited

### 1. Abstract Classes vs. Pure Interfaces
Classes like `Employee` and `Spell` enforce blueprint consistency across the pipeline—meaning they cannot be directly instantiated, only inherited and implemented.

### 2. Virtual Table (Vtable) Dispatch
Demonstrates how the compiler defers function addressing to execution runtime, allowing individual nodes to choose behavior flags based on their allocated type.

---

## 🔨 Compilation and Execution

Both modules are fully isolated and cross-platform compatible using standard C++ workflows.

### Compiling the Corporate HR System:
```bash
g++ Corporate-HR/week2s2.cpp Corporate-HR/company.cpp -o CorporateHR.exe
