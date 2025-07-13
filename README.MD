# 🚗 Car Registration System (C++)

A console application written in C++ designed to manage information about cars, their owners, and manufacturers. Users can add new vehicles to the system and display detailed data.

This project was developed as part of my university studies to deepen my understanding of Object-Oriented Programming (OOP) in C++, input/output data management, and code structuring based on classes and their interdependencies.

---

## 🧠 Features

-   Adding new cars with comprehensive data (make, model, license plate number, color, year of manufacture, body type, VIN number).
-   Registering owner details for a vehicle (first name, last name, gender, age, ID number, PESEL/Social Security equivalent, residential address).
-   Assigning a vehicle manufacturer from a predefined list (Toyota, Volkswagen, Dodge).
-   Displaying complete information about a car, its owner, and its manufacturer.

---

## 🖥️ Technologies Used

-   **C++** – Core programming language
-   **Standard Input/Output Library (iostream, string, limits, ios)** – For user interaction and text data management
-   **Object-Oriented Programming (OOP)** – Project structure based on `Samochod` (Car), `Wlasciciel` (Owner), and `Producent` (Manufacturer) classes

---

## 🚀 How to Run

### 🧪 Build & Run

To compile and run the project, you will need a C++ compiler (e.g., g++).

1.  **Clone the repository:**
    ```bash
    git clone [https://github.com/JegorKolbasicz/Book_Inventory_C.git](https://github.com/JegorKolbasicz/Book_Inventory_C.git) # Change URL to your repository's URL
    cd Book_Inventory_C # Change folder name to your repository's name
    ```

2.  **Compile:**
    Use the g++ compiler to compile the source files.
    ```bash
    g++ main.cpp samochod.cpp producent.cpp wlasciciel.cpp -o car_system
    ```
    (You might need to adjust paths if header files are in a separate folder, e.g., `g++ main.cpp samochod.cpp producent.cpp wlasciciel.cpp -I./headers -o car_system`)

3.  **Run:**
    ```bash
    ./car_system
    ```

### 🛠️ Prerequisites

-   C++ Compiler (e.g., GCC/g++)
