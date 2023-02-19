# include <iostream>
# include <limits.h> // Contains INT_MIN, INT_MAX ... and so on.
using namespace std;

int main(){
    int a = 256;
    int maximum = INT_MAX;
    int minimum = INT_MIN;
    char b = '_';
    double c = 123.4567890;
    float d = 234.4523456;
    bool e = 25>16?true:false;
    bool f = 25==16;

    cout<<a<<endl;
    cout<<maximum<<endl;
    cout<<minimum<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;
    cout<<f<<endl;
}


/* 
1. Default int
Description: It can accept a non-decimal value in both negative and positive ranges. Thus, the name integers.
Size: 2 or 4 bytes
Range: -32768  to +32768 or -2,147,483,648 to +2,147,483,648
Macros : (INT_MIN, INT_MAX)

2. Unsigned int
Description: It can accept only positive values. A good use case for applications where only positive numbers are required example – Roll No., ticket system.
Size: 2 or 4 bytes
Range: 0  to +65,535 or 0 to +4,294,967,295
Macros : (USHRT_MAX)

3. long int
Description: Ideal for very large integer values in positive/negative ranges.
Size: 4 or 8 bytes
Range: -2,147,483,648  to +2,147,483,647 or -9,223,372,036,854,775,808 to +9,223,372,036,854,775,807
Macros : (LONG_MIN, LONG_MAX)

4. Unsigned long
Description: Ideal for very large integer values only in positive ranges.
Size: 4 or 8 bytes
Range: (0 to 4,294,967,295) or (0 to 18,446,744,073,709,551,615)
Macros : (ULONG_MAX)

5. Short
Description: Ideal for very small integer values in positive/negative ranges.
Size: 2 bytes guaranteed
Range: (-32,768 to 32,767)
Macros : (SHRT_MIN, SHRT_MAX)

5. Unsigned short
Description: Ideal for very small integer values only in positive ranges.
Size: 2 bytes guaranteed
Range: (0 to 65,535)
Macros : (USHRT_MAX)

1. Default char
Description: Every key in the keyboard acts as a char with an ASCII value. Characters are declared in the single quotation to distinguish them from variable names and character values
Size: 1 byte (8 bits)
Range: -128 to 127 (Total: 255)
Macros: CHAR_MAX and CHAR_MIN

2. Unsigned char
Description: It accepts more number of characters than normal char type
Size: 1 bytes(8 bits)
Range : 0 to 255
Macro: UCHAR_MAX

float DataType
Description: It accepts fractional numbers up to 6 decimal place precision
Size: 4 bytes(32bits)
Macros : FLT_MAX and FLT_MIN
Range :
In positive range : +1.17549e-38 to +3.40282e+38
In negative range : -1.17549e-38 to -3.40282e+38

Double DataType
Description: It accepts fractional numbers up to 12 decimal places mainly used for scientific computations
Size: 8 bytes(64 bits)
Macros: DBL_MAX and DBL_MIN
Range :
In positive range : +2.22507e-308 to +1.79769e+308
In negative range : -2.22507e-308 to -1.79769e+308

Long Double DataType
Description: It accepts fractional numbers up to 19 decimal places mainly used for scientific computations
Size: 16 bytes(128 bits)
Macros: LDBL_MAX and LDBL_MIN
Range :
In positive range : +3.3621e-4932 to +1.18973e+4932
In negative range : -3.3621e-4932 to -1.18973e+4932

wchar_t DataType
Description: Wide char can take on 65536 values which correspond to UNICODE values which is a recent international standard that allows for the encoding of characters for virtually all languages and commonly used symbols.
Size: 16 bytes(128 bits)
Range :0 to 65,535 or 4294967296
Mostly the wchar_t data type is used when international languages like Chinese, French are used.

bool DataType : The default numeric value of true is 1 and false is 0.
*/