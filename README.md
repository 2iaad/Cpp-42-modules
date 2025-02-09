## inheritance:

**inheritance** is the process of creating a class (derived class) from an already existing class (base class).

the derived class inherits all capabilities of the base class with the possibility of adding its own features, and the base class remains unchanged by this process.

**inheritance** permits the code *reusability*. 

![image.png](attachment:2f51d273-bddc-4200-969a-cdbeb38e29e7:image.png)

matalan ila kanou 2 classes kayshariw same variables o behaviours, n9dr ndirhom t7t chi base class, matalan:

![image.png](attachment:d32de64a-8f7c-403b-b78f-7fcb29b9e816:image.png)

this is how a class diagram looks like: using inheritance.

![image.png](attachment:303c3154-64f1-4c29-a787-53683070ea4b:image.png)

*Hourly Employee* is an *Emloyee.* *Employee* is a *Person.*

*syntax to establish a c++ inheritance:*

**class** Employee : ***public*** Person

{
};

i have copied all the components of the Person class.

here is a table that explains the changes happens depending on the access modifier:

![image.png](attachment:478fe665-6009-45b4-b917-bd5b8776b990:image.png)

when we create a derived class object:  the constructor of the base class is called first by default in order to create the object so we can inherite from it.

we can also call the parametrized constructor of the base class using this:

*constructor:* Employee(int person_a, int employee_b) : Person(int person_a) { this→a = person_a……  }

so when we create an object we call this Employee constructor:       Employee(1337, 42);

### **Function overriding:**

- definition:
    
    concept that occurs when a derived class provides its own implementation of a function that is already defined in its base class. This allows the derived class to "override" or change the behavior of the base class function.
    
    hya fach karedefine chi function f base class inside the derived class with the same signature.
    
- difference between function overriding and overloading:
    
    in overloading we must change the signature of the function. 
    
    overloading can be done in both base and derived class.
    
- `virtual` keyword is used to declare a function in the base class that is intended to be overridden in derived classes. It is necessary when you want to enable **runtime polymorphism**
- we can call the base class function inside the overrided version of the the function: consider this code exists inside the derived class(Employee);
    
    void display() {
    
    Person::display(); // call the base class function
    
    …. // implementation of derived’s class function
    
    } 
    

**dynamic dispatch**  and **static dispatch** meaning ?

### Diamond problem in inheritance:

problem that occurs when we inherit from the base class **A** two classes for example B and C, then we make another class **D** that inherits from both B and C.. this will cause **D** the accidentely inherite from base class **A** twice.

once from B and once from C.

its called Diamond problem because the hierarchy of this inheritance tree will look like a Diamond.

![image.png](attachment:4b9365f1-6245-4aec-9d77-4169c6b08c8a:image.png)

***this is an example of a clean inheritance (with solved diamond problem) with some explanations for the access modifiers;***

[z.cpp](attachment:4a1c7bc6-ac4f-4874-8efd-b6575a2c55c1:z.cpp)

### **Q&A:**

diff between this two:

`X *a; *// create a pointer to object (constructure not called)*`

`X  b; *// create object 'X' (constructure called)*`

can we archieve function overriding without *virtual keyword?*

yes.

when ?

when we access the function through a ***base class pointer or reference**.*

when does declaring a method function *virtual* comes to role? virtual void fun() in this case:

**`int** main() {`

`B *_1; *// Base class*`

`X _2;  *// Derived class*`

`_1 = &_2;`

`_1->fun();`

`}`
