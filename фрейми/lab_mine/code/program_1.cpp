
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    // Initializing variables for further use.
    // Variable values were completely randomly generated by the developer's mind =)
    setlocale(LC_ALL, "en-US");
    int int_variable = 17;
    char char_variable = 'a';
    char char_array[] = {'A', 'n', 'd', 'r', 'e', 'y', '\0', };
    long long_variable = 1000000;
    float float_variable = 10.5;
    unsigned char uchar_variable = 'b';
    unsigned int uint_variable = 10;
    unsigned int ulong_variable = 10;

    // Outputs in accordance to formatting option.
    // Returns (int) number of printed chars.
    cout << "Output using _cprintf(\"%d\", int_variable) :" << endl;
    _cprintf("%d", int_variable);
    cout << endl << endl;

    // Inputs in accordance to formatting option.
    // Returns (int) number of variables that have changed!
    cout << "Input using _cscanf(\"%d\", &int_variable) :" << endl;
    cout << "Required input (int): " << endl;
    int temp_int;
    _cscanf("%d", &temp_int);
    cout << endl << endl;


    // Outputs symbols wihout adding \0 in the end.
    // Returns 0 on success.
    cout << "Output using _cputs(char_array):" << endl;
    _cputs(char_array);
    cout << endl << endl;


    // Writing input until detecting \0
    // Returns (int) number of variables that have changed!
    // Outdated function!
    //_cgets(char_array);


    // Input (char) without showing in console;
    // Warning!!!
    // The system DLL ucrtbase.dll version 17134 introducted the bug.
    // Using _getch to ensure a clean input!
    // Returns (int) of char 
    cout << "Input using getch():" << endl;
    cout << "Required input (char): " << endl;
    int temp_char_code;
    _getch(); // Used to caught previous output
    temp_char_code = _getch();
    cout << endl;
    cout << "Your input is (int): " << temp_char_code << endl;
    cout << "Your input is (char): " << (char) temp_char_code;
    cout << endl << endl;

    // Returns (char) 
    cout << "Output using putch(char_variable) :" << endl;
    _putch(char_variable);
    cout << endl << endl;

    // Input (char)
    // Returns (int) of (char) input 
    cout << "Input using getchar():" << endl;
    cout << "Required input (char): " << endl;
    temp_char_code = getchar();
    cout << "Your input is (int): " << temp_char_code << endl;
    cout << "Your input is (char): " << (char)temp_char_code;
    cout << endl << endl;

    // Returns (int) number of char
    cout << "Output using putchar(char_variable): " << endl;
    putchar(char_variable);
    cout << endl << endl;


    // gets(char_array); Old as 8086

    // Outputs (char)
    // Returns  non negative (int) number.
    cout << "Output using puts(): " << endl;
    puts(char_array);
    cout << endl << endl;


    // Outputs in accordance to formatting option.
    // A programmer's best friend =)
    cout << "Output using printf(): " << endl;
    printf("My name is %s. I'm %i", char_array, int_variable);
    cout << endl << endl;

    // Outputs in accordance to formatting option.
    // Returns (int) number of printed chars.
    int int_printed_chars;
    char template_string[] = "My name is %s. I'm %d";
    char ready_string[50]; // Future string
    cout << "Using sprintf() to preformate and count string length: " << endl;
    int_printed_chars = sprintf(ready_string, template_string, char_array, int_variable);
    printf("[%s] is a string %d chars long\n", ready_string, int_printed_chars);
    cout << endl << endl;

    // Parses string in accordance to formatting option.
    // Returns (int) number of affected string chars.
    char string_to_parse[] = "Andrey,17,IPZ-13";
    int int_number_of_vars_affected;
    char char_years_parsed[20];
    char char_name_parsed[20];
    char char_group_parsed[20];
    int_number_of_vars_affected = sscanf(string_to_parse, "%[^','],%[^','],%[^',']", char_name_parsed, char_years_parsed, char_group_parsed);
    printf("Using sscanf() to parse. Initial string:[%s].\nAll variables lower are parsed.\nName_ parsed: %s\nYear_ parsed: %s\nGroup parsed: %s\nVars_affected: %i\n", string_to_parse, char_name_parsed, char_years_parsed, char_group_parsed, int_number_of_vars_affected);

    // Prevent program from closing!
    while (true){
        system("pause");
    }


}

