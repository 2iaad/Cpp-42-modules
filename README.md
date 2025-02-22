# 🎭 C++ - Module 04

📝 Presentation

C++ Module 04 delves deeper into the concept of polymorphism, introducing abstract classes and interfaces.
The goal is to understand how to structure a program using an object hierarchy while following the principles of inheritance and encapsulation.

🛠️ Features

    Exercise 00: Polymorphism
        Creation of a base class Animal with a std::string type attribute.
        Definition of Dog and Cat classes inheriting from Animal, with a redefined makeSound() method.
        Introduction of WrongAnimal and WrongCat to test polymorphism.

    Exercise 01: I Don't Want to Burn the World
        Addition of a Brain class with an array of 100 ideas.
        Association of Brain with Dog and Cat classes (composition).
        Implementation of deep copying to prevent memory leaks.

    Exercise 02: Abstract Class
        Conversion of Animal into an abstract class (pure virtual makeSound() method).
        Preventing direct instantiation of Animal.
        Verifying correct program behavior with the same expected results.

    Exercise 03: Interface & Recap
        Implementation of an IMateriaSource interface.
        Creation of materias (Ice, Cure), which can be used by Character.
        Management of an inventory of 4 materias per character.
        Addition of a materia cloning system.

📌 Technologies Used

    C++ 98
    Dynamic polymorphism (virtual)
    Abstract classes & interfaces
    Dynamic memory management (new / delete)
    Inheritance & composition