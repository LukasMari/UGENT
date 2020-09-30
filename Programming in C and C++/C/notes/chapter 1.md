# Basic concepts
*Helga Naessens*

## Situating the C language

Low level language, close to hardware and with it the kernel. Meaning that C's strength lays in its speed.
C is also a procedural language in much the same way a COBOL program would execute his commands. This is then opposed by Object oriented programming in languages such as C++ and Java etc.

#### Pre-processing directives
All #include statements are being processed before compilation, you can look at it as instructions for the compiler itself before it goes for the actual compilation of your desired code.

#### Declaring variables
Each variable needs to be declared before they are being used in the code itself. 

#### Fundamental datatypes

1. Whole Types
    1. signed of unsigned
    2. Default is signed except for the 'char' datatype
        1. Signed char
        2. short
        3. int
        4. long
        5. long long
        6. _Bool
        7. unsigned char
        8. unsigned short
        9. unsigned int
        10. unsigned long
        11. unsigned long long
2. Real Types
    1. float, double, long double

*use sizeOf() to find the size of your declared variable internally*

#### Literals

*(Whole numbers)*

**Forming a literal**
*{+|-}opt{prefix}opt getal {suffix}opt*

##### Prefix
Decimal:        Octal: 0    Hex: 0x|0X

##### Suffix
int                     unsigned: u|U
long: l|L               unsigned long: ul|UL
long long: ll|LL        unsigned long long: ull|ULL

##### Examples

int i = 0x2ab;
long long longVariable = 0777ll;

*(Real numbers)*

*{+|-}opt getal.getal {{e|E} {+|-}opt getal}opt {suffix}opt*

##### Suffix
double: float: f|F long double: l|L

##### Examples

float f = 123.456;
long double ld = 987E-7l;

*(Characters)*
Just use SINGLE quotes --> 'a', '?' etc.

*(Strings)*
Use DOUBLE quotes --> "This is our test string"


*(Constants)*

#define VARIABLE_NAME value
or
const datatype VARIABLE_NAME = value;

#### Implicit conversions


C does this automatically for you. Meaning that a double for example can also fit in a float.

But it also implicitely shortens if you for example declare a float-value to an int. (Watch out here that you lose data because it cuts off and doesn't use round number or whatever)

These conversions can happen in declarations or during calculations.

#### Explicit conversions

Casting with ()

