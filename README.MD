This is #the 2016 FRC C++ Repository.

## Style Guide:
* Follow the C++ 1TBS indent style (it's almost identical to the Java indent style) 
* Avoid Templates where possible (if you don't know how to use them, then don't)
* Avoid Pointers, C++ References, and Strings where possible
  This includes both the C char* and the C++ std::string
* Part of the point of moving to C++ was to simplify the code. Do not create 
   unnecessary classes, ....
* Don't mess with random parts of the C/C++ Standard Library (including the STL)
 unless you actually know what you are doing.
* Don't use new or malloc except in the initialization functions (try to avoid it there too)
* No Multiple Inheritance (except for pure virtual base classes, but avoid that too).
* No protected/private inheritance (just use a variable instead)
* DO NOT USE delete or free UNLESS YOU KNOW WHAT YOU ARE DOING
* DO NOT PERFORM POINTER ARITHMETIC, IT DOESN'T MAKE YOU COOL 
  (segfaults are not fun)
* DO NOT MESS WITH STUFF YOU DON'T KNOW ABOUT
* Avoid things that could crash the roboRIO, crashes are *REALLY BAD*.
* Remember that the roboRIO runs NI Linux Real-Time
