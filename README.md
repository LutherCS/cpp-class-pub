# README

## What is this repository for?
* Students of CS253

## How do I get set up?
1. Download and install [Visual Studio Code](https://code.visualstudio.com/download)
1. Install the [C/C++](https://code.visualstudio.com/docs/languages/cpp) VS Code extension
1. *Optional*: Install [Code Runner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner) VS Code extension
1. *Optional*: Install clang: `sudo apt install clang` and [C/C++ Clang Command Adapter](https://github.com/mitaki28/vscode-clang)
1. *Optional*: Configure the C/C++ extension to allow quick suggestions
1. Make sure you have a good grasp of basic software development tools and Linux commands
1. Download the latest version of [Catch2 test framework](https://github.com/catchorg/Catch2)
    * `wget https://github.com/catchorg/Catch2/releases/download/v2.2.1/catch.hpp`
1. Copy the downloaded file to the system library
    * `cp catch.hpp /usr/include/`
1. Create a new private repository on GitHub
1. [Duplicate](https://help.github.com/articles/duplicating-a-repository/) **this** repository
    * Configure my repo as [upstream](https://help.github.com/articles/configuring-a-remote-for-a-fork/), so you could pull updates from me
1. Invite me as a collaborator to your private repo
1. Start working on an assignment
    1. Pull all branches from the **course repository** (*upstream*)
    1. Checkout a specific branch (*exercise0*, *exercise1*, etc)
    1. Complete an assignment (produce the expected output and/or pass the provided tests)
    1. Commit changes
    1. Push code to **your repository** (*origin*)

## References

### Development environment

* [C++ programming with Visual Studio Code](https://code.visualstudio.com/docs/languages/cpp)

* [Makefiles – Mrbook's Stuff](http://mrbook.org/blog/tutorials/make/)

* [Catch2/tutorial.md at master · catchorg/Catch2](https://github.com/catchorg/Catch2/blob/master/docs/tutorial.md)

* [Testing C++ With A New Catch - Coldflake Blog](http://blog.coldflake.com/posts/Testing-C++-with-a-new-Catch/)

### Basic syntax

* [C++ Today - O'Reilly Media](http://www.oreilly.com/programming/free/c++-today.csp)

* [Compilers - C++ Tutorials](http://www.cplusplus.com/doc/tutorial/introduction/)

* [The C++ Language Tutorial (PDF)](http://www.cplusplus.com/files/tutorial.pdf)

* [A Complete Guide to Programming in C++ (PDF)](http://www.lmpt.univ-tours.fr/~volkov/C++.pdf)

* [Reference - C++ Reference](http://www.cplusplus.com/reference/)

* [cppreference.com](http://en.cppreference.com/w/)

* [DevDocs — C++ documentation](http://devdocs.io/cpp/)

* [C/C++ extension for Visual Studio Code | Visual C++ Team Blog](https://blogs.msdn.microsoft.com/vcblog/2016/03/31/cc-extension-for-visual-studio-code/)

* [Building your C++ application with Visual Studio Code | Visual C++ Team Blog](https://blogs.msdn.microsoft.com/vcblog/2016/10/24/building-your-c-application-with-visual-studio-code/)

* [Tasks in Visual Studio Code](https://code.visualstudio.com/docs/editor/tasks)

* [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html)

* [c++ faq - The Definitive C++ Book Guide and List - Stack Overflow](http://stackoverflow.com/questions/388242/the-definitive-c-book-guide-and-list)

* [Basics of C++ Language | C++ Tutorial | Studytonight](http://www.studytonight.com/cpp/basics-of-cpp.php)

### Pointers

* [Pointers - C++ Tutorials](http://www.cplusplus.com/doc/tutorial/pointers/)

* [References in C++ | C++ Tutorial | Studytonight](http://www.studytonight.com/cpp/references-in-cpp.php)

### Dynamic arrays

* [How do I determine the size of my array in C? - Stack Overflow](http://stackoverflow.com/questions/37538/how-do-i-determine-the-size-of-my-array-in-c)

* [A Glimpse into C++14: Combine Flexibility and Performance with Dynamic Arrays and Runtime-Sized Arrays](http://blog.smartbear.com/development/a-glimpse-into-c14/)

* [c++ - Return a 2d array from a function - Stack Overflow](http://stackoverflow.com/questions/8617683/return-a-2d-array-from-a-function)

* [The C++ 'const' Declaration: Why &amp; How](http://duramecho.com/ComputerInformation/WhyHowCppConst.html)

### I/O

* [Tips and Tricks for Using C++ I/O (input/output)](http://www.augustcouncil.com/~tgibson/tutorial/iotips.html)

### Operator overloading

* [Overloading the &lt;&lt; Operator for Your Own Classes](https://msdn.microsoft.com/en-us/library/1z2f6c2k.aspx)

* [operator overloading - cppreference.com](http://en.cppreference.com/w/cpp/language/operators)

### Structures

* [Data structures - C++ Tutorials](http://www.cplusplus.com/doc/tutorial/structures/)

* [struct (C++)](https://msdn.microsoft.com/en-us/library/64973255.aspx)

### Classes

* [Classes (I) - C++ Tutorials](http://www.cplusplus.com/doc/tutorial/classes/)

* [Classes and Objects in C++ | C++ Tutorial | Studytonight](http://www.studytonight.com/cpp/class-and-objects.php)

### Encapsulation

* [Destructors (C++)](https://msdn.microsoft.com/en-us/library/6t4fe76c.aspx)

* [Destructors - cppreference.com](http://en.cppreference.com/w/cpp/language/destructor)

### Inheritance

* [Friendship and inheritance - C++ Tutorials](http://www.cplusplus.com/doc/tutorial/inheritance/)

* [Introduction to Inheritance in C++ | C++ Tutorial | Studytonight](http://www.studytonight.com/cpp/overview-of-inheritance.php)

* [What is C++ inline functions - C++ Articles](http://www.cplusplus.com/articles/2LywvCM9/)

* [memory management - Why should C++ programmers minimize use of 'new'? - Stack Overflow](http://stackoverflow.com/questions/6500313/why-should-c-programmers-minimize-use-of-new)

* [declaration - Is is a good practice to put the definition of C++ classes into the header file? - Stack Overflow](http://stackoverflow.com/questions/4955159/is-is-a-good-practice-to-put-the-definition-of-c-classes-into-the-header-file)

* [Separate Compilation and Namespaces in C++ | Separate Compilation](http://www.informit.com/articles/printerfriendly/26039)

* [Modules, Separate Compilation, Using Make Files](https://www.cs.bu.edu/teaching/cpp/separate-compilation/)

* [Inline Functions, C++ FAQ](https://isocpp.org/wiki/faq/inline-functions)

* [Makefiles – Mrbook's Stuff](http://mrbook.org/blog/tutorials/make/)

### Polymorphism

* [Polymorphism - C++ Tutorials](http://www.cplusplus.com/doc/tutorial/polymorphism/)

* [Polymorphism and Function Overriding in C++ | C++ Tutorial | Studytonight](http://www.studytonight.com/cpp/function-overriding.php)

* [Virtual Functions](https://msdn.microsoft.com/en-us/library/0y01k918.aspx)

* [Virtual Inheritance in C++, and solving the diamond problem - Cprogramming.com](http://www.cprogramming.com/tutorial/virtual_inheritance.html)

* [Diamond Problem In C++Diamond Problem - Programmer and Software Interview Questions and Answers](http://www.programmerinterview.com/index.php/c-cplusplus/diamond-problem/)

* [Multiple Inheritance in C++ - GeeksforGeeks](http://www.geeksforgeeks.org/multiple-inheritance-in-c/)

### Templates

* [Templates, C++ FAQ](https://isocpp.org/wiki/faq/templates)

* [Templates - C++ Tutorials](http://www.cplusplus.com/doc/oldtutorial/templates/)

* [C++ Templates](https://www.tutorialspoint.com/cplusplus/cpp_templates.htm)

* [this pointer - cppreference.com](http://en.cppreference.com/w/cpp/language/this)

* [C++ Signal Handling](https://www.tutorialspoint.com/cplusplus/cpp_signal_handling.htm)

### Libraries

* [The Standard : Standard C++](https://isocpp.org/std/the-standard)

* [Boost C++ Libraries](http://www.boost.org/)
