// Change the library's path to match your own computer's configuration
// =====================================================================

// 3.6

#include "/Users/michael/CLionProjects/std_lib_facilities.h" // Loads the library

int main() {    // Computer starts executing C++ program after main function

    cout << "Enter three floating-point values.";

    double val1;
    double val2;
    double val3;
    while (cin >> val1 >> val2 >> val3) {

        double smallest = 0;
        double middle = 0;
        double largest = 0;

        if (val1 <= val2 && val1 <= val3) {
            smallest = val1;
            if (val2 <= val3) {
                middle = val2;
                largest = val3;
            } else {
                middle = val3;
                largest = val2;
            }
        }

        else if (val2 <= val1 && val2 <= val3) {
            smallest = val2;
            if (val1 <= val3) {
                middle = val1;
                largest = val3;
            } else {
                middle = val3;
                largest = val1;
            }
        }

        else if (val3 <= val2 && val3 <= val1) {
            smallest = val3;
            if (val2 <= val1) {
                middle = val2;
                largest = val1;
            } else {
                middle = val1;
                largest = val2;
            }
        }

        cout << smallest << ", " << middle << ", " << largest << '\n';
    }

    keep_window_open(); // Without this output disappears immediately after execution
    return 0; // Return 0 to computer to know program has been executed
}

//========================================================================================

// 3.7

#include "/Users/michael/CLionProjects/std_lib_facilities.h" // Loads the library

int main() {    // Computer starts executing C++ program after main function

    cout << "Enter three floating-point values.";

    string val1;
    string val2;
    string val3;
    while (cin >> val1 >> val2 >> val3) {

        string smallest = " ";
        string middle = " ";
        string largest = " ";

        if (val1 <= val2 && val1 <= val3) {
            smallest = val1;
            if (val2 <= val3) {
                middle = val2;
                largest = val3;
            } else {
                middle = val3;
                largest = val2;
            }
        }

        else if (val2 <= val1 && val2 <= val3) {
            smallest = val2;
            if (val1 <= val3) {
                middle = val1;
                largest = val3;
            } else {
                middle = val3;
                largest = val1;
            }
        }

        else if (val3 <= val2 && val3 <= val1) {
            smallest = val3;
            if (val2 <= val1) {
                middle = val2;
                largest = val1;
            } else {
                middle = val1;
                largest = val2;
            }
        }

        cout << smallest << ", " << middle << ", " << largest << '\n';
    }

    keep_window_open(); // Without this output disappears immediately after execution
    return 0; // Return 0 to computer to know program has been executed
}

//========================================================================================

// 3.8

#include "/Users/michael/CLionProjects/std_lib_facilities.h" // Loads the library

int main() {    // Computer starts executing C++ program after main function

    int num = 0;

    cout << "Enter an integer number: \n";

    while (cin >> num) {

        if (num % 2 == 0) {
            cout << "The value " << num << " in an even number. \n";
        } else {
            cout << "The value " << num << " is an odd number. \n";
        }
    }
    
    keep_window_open(); // Without this output disappears immediately after execution
    return 0; // Return 0 to computer to know program has been executed
}

//========================================================================================

// 3.9

#include "/Users/michael/CLionProjects/std_lib_facilities.h" // Loads the library

int main() {    // Computer starts executing C++ program after main function

    cout << "Spell a number in letters: \n";
    string num_letters = " ";
    int num = 0;

    while (cin >> num_letters) {
        if (num_letters == "zero") {
            num = 0;
            cout << num << '\n';
        }

        else if (num_letters == "one") {
            num = 1;
            cout << num << '\n';
        }

        else if (num_letters == "two") {
            num = 2;
            cout << num << '\n';
        }

        else if (num_letters == "three") {
            num = 3;
            cout << num << '\n';
        }

        else if (num_letters == "four") {
            num = 4;
            cout << num << '\n';
        }

        else {
            cout << "not a number I know \n";
        }
    }

    keep_window_open(); // Without this output disappears immediately after execution
    return 0; // Return 0 to computer to know program has been executed

}

//========================================================================================

// 3.10

#include "/Users/michael/CLionProjects/std_lib_facilities.h" // Loads the library

int main() {    // Computer starts executing C++ program after main function

    string operation = " ";
    float operand1 = 0;
    float operand2 = 0;

    while (cin >> operation >> operand1 >> operand2) {
        if (operation == "+") {
            cout << operand1 + operand2 << '\n';
        }

        if (operation == "-") {
            cout << operand1 - operand2 << '\n';
        }

        if (operation == "*") {
            cout << operand1 * operand2 << '\n';
        }

        if (operation == "/") {
            cout << operand1 / operand2 << '\n';
        }
    }

    keep_window_open(); // Without this output disappears immediately after execution
    return 0; // Return 0 to computer to know program has been executed

} 

//========================================================================================

// 3.11

#include "/Users/michael/CLionProjects/std_lib_facilities.h" // Loads the library

int main() {    // Computer starts executing C++ program after main function

    int pennies = 0;
    int nickels = 0;
    int dimes = 0;
    int quarters = 0;
    int half = 0;
    int one = 0;

    cout << "How many pennies do you have? \n";
    cin >> pennies;

    cout << "How many nickels do you have? \n";
    cin >> nickels;

    cout << "How many dimes do you have? \n";
    cin >> dimes;

    cout << "How many quarters do you have? \n";
    cin >> quarters;

    cout << "How many half dollars do you have? \n";
    cin >> half;

    cout << "How many one dollars do you have? \n";
    cin >> one;

    if (pennies != 1) {
        cout << "You have " << pennies << " pennies. \n";
    } else {
        cout << "You have 1 penny. \n";
    }

    if ( nickels!= 1) {
        cout << "You have " << nickels << " nickels. \n";
    } else {
        cout << "You have 1 nickel. \n";
    }

    if ( dimes!= 1) {
        cout << "You have " << dimes << " dimes. \n";
    } else {
        cout << "You have 1 dime. \n";
    }

    if ( quarters!= 1) {
        cout << "You have " << quarters << " quarters. \n";
    } else {
        cout << "You have 1 quarter.\n";
    }

    if ( half != 1) {
        cout << "You have " << half << " half dollars. \n";
    } else {
        cout << "You have 1 half dollar. \n";
    }

    double sum = ((double) pennies + nickels*5 + dimes*10 + quarters*25 + half*50 + one*100) / 100;
    cout << "The value of all of your coins is $" << sum << '\n';

    keep_window_open(); // Without this output disappears immediately after execution
    return 0; // Return 0 to computer to know program has been executed

} 

//========================================================================================

// Try this p. 107 currency converter

#include "/Users/michael/CLionProjects/std_lib_facilities.h" // Loads the library

int main() {    // Computer starts executing C++ program after main function

    constexpr float k_rate = 6.23;
    constexpr float y_rate = 109.1;
    constexpr float p_rate = 0.73;

    float d = 1;

    float money = 1;
    char currency = ' ';

    cout << "Enter the amount followed by the currency (k for krone, y for yen and p for pounds) \n";
    cin >> money >> currency;

    if (currency == 'k')
        cout << money << " krone are " << money / k_rate << " dollars \n";

    else if (currency == 'y')
        cout << money << " yen are " << money / y_rate << " dollars \n";

    else if (currency == 'p')
        cout << money << " pounds are " << money / p_rate << " dollars \n";

    else
        cout << "unknown currency \n";
    
    keep_window_open(); // Without this output disappears immediately after execution
    return 0; // Return 0 to computer to know program has been executed
}

//========================================================================================

// Try this p. 109 switch currenct converter

#include "/Users/michael/CLionProjects/std_lib_facilities.h" // Loads the library

int main() {    // Computer starts executing C++ program after main function

    constexpr float k_rate = 6.23;
    constexpr float y_rate = 109.1;
    constexpr float p_rate = 0.73;

    float d = 1;

    float money = 1;
    char currency = ' ';

    cout << "Enter the amount followed by the currency (k for krone, y for yen and p for pounds) \n";
    cin >> money >> currency;

    switch (currency) {
        case 'k':
            cout << money << " krone are " << money / k_rate << " dollars \n";
            break;

        case 'y':
            cout << money << " yen are " << money / y_rate << " dollars \n";
            break;

        case 'p':
            cout << money << " pounds are " << money / p_rate << " dollars \n";
            break;

        default:
            cout << "unknown currency \n";
            break;
    }

    keep_window_open(); // Without this output disappears immediately after execution
    return 0; // Return 0 to computer to know program has been executed
} 

//========================================================================================

// Try this p. 111 character map

#include "/Users/michael/CLionProjects/std_lib_facilities.h" // Loads the library

int main() {    // Computer starts executing C++ program after main function

    int i = 0; // start from 0
    while (i < 26) {
        char letter = char('a' + i);
        int letter_int = letter;
        cout << letter << '\t' << letter_int << '\n';
        ++i; // increment i (that is, i becomes i+1) }
    }

    keep_window_open(); // Without this output disappears immediately after execution
    return 0; // Return 0 to computer to know program has been executed
}

//========================================================================================

// Try this p. 113

#include "/Users/michael/CLionProjects/std_lib_facilities.h" // Loads the library

int main() {    // Computer starts executing C++ program after main function

    for (int i =0; i < 26; ++i){
        char letter = char('a' + i);
        int letter_int = letter;
        cout << letter << '\t' << letter_int << '\n';
    }

    keep_window_open(); // Without this output disappears immediately after execution
    return 0; // Return 0 to computer to know program has been executed
} 

//========================================================================================

// TT p. 116 square without multiplication

#include "/Users/michael/CLionProjects/std_lib_facilities.h" // Loads the library

int square(int n) {
    int sq = 0;
    for (int i = 0; i < n; ++i) {
        sq += n;
    }
    return sq;
}

int main() {    // Computer starts executing C++ program after main function

    int n = 0;
    while (cin >> n) {
        cout << square(n) << '\n';
    }

    keep_window_open(); // Without this output disappears immediately after execution
    return 0; // Return 0 to computer to know program has been executed
}

//========================================================================================

// TT p. 125 words BLEEP out

#include "/Users/michael/CLionProjects/std_lib_facilities.h" // Loads the library

int main() {    // Computer starts executing C++ program after main function

    vector<string> words;
    for (string word; cin >> word;) {
        words.push_back(word);
    }

    for (int i = 0; i < words.size(); ++i) {
        if (words[i] == "Broccoli")
            cout << "BLEEP \n";
        else
            cout << words[i] << '\n';
    }

    keep_window_open(); // Without this output disappears immediately after execution
    return 0; // Return 0 to computer to know program has been executed
}

//========================================================================================

// Drill Chapter 4
// 6

#include "/Users/michael/CLionProjects/std_lib_facilities.h" // Loads the library

int main() {    // Computer starts executing C++ program after main function

    double num = 0;
    double min = 0;
    double max = 0;

    cin >> num;
    min = num;
    max = num;

    cout << num << " the smallest so far" << '\n' << num << " the largest so far \n";

    while (cin >> num)

        if (num < min) {
            min = num;
            cout << num << " the smallest so far \n";
        }

        else if (num > max) {
            max = num;
            cout << num << " the largest so far \n";
        }
        else {
            cout << num << " \n";
        }

    keep_window_open(); // Without this output disappears immediately after execution
    return 0; // Return 0 to computer to know program has been executed
}


// 7, 8

#include "/Users/michael/CLionProjects/std_lib_facilities.h" // Loads the library

constexpr double cm_to_m{0.01};
constexpr double in_to_m{cm_to_m * 2.54};
constexpr double ft_to_m{in_to_m * 12};
const vector<string> legal_units{"m", "cm", "in", "ft"};

double convertToMeters(double val, string unit) {
    double meters = 0;
    if (unit == "m") {
        meters = val;
    } else if (unit == "cm") {
        meters = val * cm_to_m;
    } else if (unit == "in") {
        meters = val * in_to_m;
    } else if (unit == "ft") {
        meters = val * ft_to_m;
    }
    return meters;
}

bool legalUnit(string unit) {
    bool legal = false;
    for (auto legal_unit : legal_units) {
        if (unit == legal_unit) {
            legal = true;
        }
    }
    return legal;
}

int main() {    // Computer starts executing C++ program after main function

    double val{0.0};
    string unit{" "};
    double val_m{0.0};
    double min{0.0};
    double max{0.0};
    bool first{true};

    cout << "Enter a value and unit of measurement (m, cm, in or ft) \n";

    while (cin >> val >> unit) {
        if (legalUnit(unit) && val >= 0) {
            val_m = convertToMeters(val, unit);
            if (first == true) {
                first = !first;
                min = val_m;
                max = val_m;
                cout << val << unit << " is the smallest and the largest, as it is the first value \n";
            } else if (val_m < min) {
                min = val_m;
                cout << val << unit << " is the smallest value \n";
            } else if (val_m > max) {
                max = val_m;
                cout << val << unit << " is the largest value \n";
            } else {
                cout << val << unit << '\n';
            }
        }

        else {
            cout << "The value and/or the unit are not acceptable \n";
        }

    }

    keep_window_open(); // Without this output disappears immediately after execution
    return 0; // Return 0 to computer to know program has been executed
}

// 9

#include "/Users/michael/CLionProjects/std_lib_facilities.h" // Loads the library

constexpr double cm_to_m{0.01};
constexpr double in_to_m{cm_to_m * 2.54};
constexpr double ft_to_m{in_to_m * 12};
const vector<string> legal_units{"m", "cm", "in", "ft"};

double convertToMeters(double val, string unit) {
    double meters = 0;
    if (unit == "m") {
        meters = val;
    } else if (unit == "cm") {
        meters = val * cm_to_m;
    } else if (unit == "in") {
        meters = val * in_to_m;
    } else if (unit == "ft") {
        meters = val * ft_to_m;
    }
    return meters;
}

bool legalUnit(string unit) {
    bool legal = false;
    for (auto legal_unit : legal_units) {
        if (unit == legal_unit) {
            legal = true;
        }
    }
    return legal;
}

int main() {    // Computer starts executing C++ program after main function

    double val{0.0};
    string unit{" "};
    double val_m{0.0};
    double min{0.0};
    double max{0.0};
    bool first{true};

    double sum {0.0};
    double num {0.0};

    cout << "Enter a value and unit of measurement (m, cm, in or ft) \n";

    while (cin >> val >> unit) {
        if (legalUnit(unit) && val >= 0) {
            val_m = convertToMeters(val, unit);
            if (first == true) {
                first = false;
                min = val_m;
                max = val_m;
                cout << val << unit << " is the smallest and the largest, as it is the first value \n";
            } else if (val_m < min) {
                min = val_m;
                cout << val << unit << " is the smallest value \n";
            } else if (val_m > max) {
                max = val_m;
                cout << val << unit << " is the largest value \n";
            } else {
                cout << val << unit << '\n';
            }

            sum += val_m;
            ++num;
        } else {
            cout << "The value and/or the unit are not acceptable \n";
        }
    }

    cout << "Number of values: " << num << '\n'
         << "Sum of values: " << sum << '\n'
         << "Smallest value: " << min << "m \n"
         << "Largest value: " << max << "m \n";

    keep_window_open(); // Without this output disappears immediately after execution
    return 0; // Return 0 to computer to know program has been executed
}



// 10

#include "/Users/michael/CLionProjects/std_lib_facilities.h" // Loads the library

constexpr double cm_to_m{0.01};
constexpr double in_to_m{cm_to_m * 2.54};
constexpr double ft_to_m{in_to_m * 12};
const vector<string> legal_units{"m", "cm", "in", "ft"};

double convertToMeters(double val, string unit) {
    double meters = 0;
    if (unit == "m") {
        meters = val;
    } else if (unit == "cm") {
        meters = val * cm_to_m;
    } else if (unit == "in") {
        meters = val * in_to_m;
    } else if (unit == "ft") {
        meters = val * ft_to_m;
    }
    return meters;
}

bool legalUnit(string unit) {
    bool legal = false;
    for (auto legal_unit : legal_units) {
        if (unit == legal_unit) {
            legal = true;
        }
    }
    return legal;
}

int main() {    // Computer starts executing C++ program after main function

    double val{0.0};
    string unit{" "};
    double val_m{0.0};
    double min{0.0};
    double max{0.0};
    bool first{true};

    double sum {0.0};
    double num {0.0};
    vector<double> values;

    cout << "Enter a value and unit of measurement (m, cm, in or ft) \n";

    while (cin >> val >> unit) {
        if (legalUnit(unit) && val >= 0) {
            val_m = convertToMeters(val, unit);
            if (first == true) {
                first = false;
                min = val_m;
                max = val_m;
                cout << val << unit << " is the smallest and the largest, as it is the first value \n";
            } else if (val_m < min) {
                min = val_m;
                cout << val << unit << " is the smallest value \n";
            } else if (val_m > max) {
                max = val_m;
                cout << val << unit << " is the largest value \n";
            } else {
                cout << val << unit << '\n';
            }

            values.push_back(val_m);
            sum += val_m;
            ++num;
        } else {
            cout << "The value and/or the unit are not acceptable \n";
        }
    }

    cout << "All values: \n";
    for (int i = 0; i < values.size(); ++i) {
        cout << values[i] << "m \n";
    }
    cout << '\n';
    cout << "Number of values: " << num << '\n'
         << "Sum of values: " << sum << '\n'
         << "Smallest value: " << min << "m \n"
         << "Largest value: " << max << "m \n";


    keep_window_open(); // Without this output disappears immediately after execution
    return 0; // Return 0 to computer to know program has been executed
}

//========================================================================================

// 11

#include "/Users/michael/CLionProjects/std_lib_facilities.h" // Loads the library

constexpr double cm_to_m{0.01};
constexpr double in_to_m{cm_to_m * 2.54};
constexpr double ft_to_m{in_to_m * 12};
const vector<string> legal_units{"m", "cm", "in", "ft"};

double convertToMeters(double val, string unit) {
    double meters = 0;
    if (unit == "m") {
        meters = val;
    } else if (unit == "cm") {
        meters = val * cm_to_m;
    } else if (unit == "in") {
        meters = val * in_to_m;
    } else if (unit == "ft") {
        meters = val * ft_to_m;
    }
    return meters;
}

bool legalUnit(string unit) {
    bool legal = false;
    for (auto legal_unit : legal_units) {
        if (unit == legal_unit) {
            legal = true;
        }
    }
    return legal;
}

int main() {    // Computer starts executing C++ program after main function

    double val{0.0};
    string unit{" "};
    double val_m{0.0};
    double min{0.0};
    double max{0.0};
    bool first{true};

    double sum {0.0};
    double num {0.0};
    vector<double> values;

    cout << "Enter a value and unit of measurement (m, cm, in or ft) \n";

    while (cin >> val >> unit) {
        if (legalUnit(unit) && val >= 0) {
            val_m = convertToMeters(val, unit);
            if (first == true) {
                first = false;
                min = val_m;
                max = val_m;
                cout << val << unit << " is the smallest and the largest, as it is the first value \n";
            } else if (val_m < min) {
                min = val_m;
                cout << val << unit << " is the smallest value \n";
            } else if (val_m > max) {
                max = val_m;
                cout << val << unit << " is the largest value \n";
            } else {
                cout << val << unit << '\n';
            }

            values.push_back(val_m);
            sum += val_m;
            ++num;
        } else {
            cout << "The value and/or the unit are not acceptable \n";
        }
    }

    sort(values);
    
    cout << "All values: \n";
    for (int i = 0; i < values.size(); ++i) {
        cout << values[i] << "m \n";
    }
    cout << '\n';
    cout << "Number of values: " << num << '\n'
         << "Sum of values: " << sum << "m \n"
         << "Smallest value: " << min << "m \n"
         << "Largest value: " << max << "m \n";


    keep_window_open(); // Without this output disappears immediately after execution
    return 0; // Return 0 to computer to know program has been executed
}

//========================================================================================

// 4.2

#include "/Users/michael/CLionProjects/std_lib_facilities.h" // Loads the library

// compute median temperatures int 
int main()
{
    cout << "Enter a series of temperatures to get the median (followed by '|' or a another non double/integer character):\n";

    vector<double> temps; // temperatures
    for (double temp; cin>>temp; ) // read into temp
        temps.push_back(temp);  // put temp into vector


    // compute mean temperature:
    double sum = 0;
    for (double x : temps) sum += x;
    cout << "Average temperature: " << sum/temps.size() << '\n';

    // compute median temperature:
    sort(temps); // sort temperatures

    double median = -1;
    if (temps.size() > 1 && 0 == temps.size() % 2)
        median = (temps[temps.size()/2 - 1] + temps[temps.size()/2]) / 2.0;
    else
        median = temps[temps.size()/2];

    cout << "Median temperature: " << median << '\n';

    return 0;
}

//========================================================================================

// 4.3

#include "/Users/michael/CLionProjects/std_lib_facilities.h" // Loads the library


int main() {    // Computer starts executing C++ program after main function

    vector<double> distances;
    double max;
    double min;
    double sum = 0;
    double mean;
    bool first = true;

    for (double distance; cin >> distance;) {

        if (first) {
            first = !first;
            min = distance;
            max = distance;
        } else {
            if (distance < min) {
                min = distance;
            } else if (distance > max) {
                max = distance;
            }
        }
        sum += distance;
        distances.push_back(distance);
    }

    if (distances.size() > 0) {
        mean = sum / distances.size();
    } else {
        mean = 0;
    }

    cout << "total distance " << sum << '\n';
    cout << "maximum distance " << max << '\n';
    cout << "minimum distance " << min << '\n';
    cout << "mean distance " << mean << '\n';

    keep_window_open(); // Without this output disappears immediately after execution
    return 0; // Return 0 to computer to know program has been executed
}

//========================================================================================

// 4.4 Guess the number

#include "/Users/michael/CLionProjects/std_lib_facilities.h" // Loads the library


int main() {    // Computer starts executing C++ program after main function
    
    int number{50};

    // define upper and lower bounds
    int upper{100};
    int lower{1};
    int range{upper - lower};
    int half{range / 2};

    char answer{'\0'};
    int question{0};

    cout << "Think of a number between " << lower << " and " << upper << "\n\n";
    while (lower != upper) {

        range = upper - lower;
        if (range == 1 && number < half) {
            number = upper;
        } else if (range == 1 && number > half) {
            number = upper;
        } else
            number = lower + range / 2;

        //cout << "upper: " << upper << " lower: " << lower << " range: " << range << '\n';

        cout << question + 1 << ". Is the number you are thinking of less than " << number << "? (Enter 'y' or 'n') \n";

        cin >> answer;
        if ('y' == answer) {
            upper = number - 1;
            question++;

        } else if ('n' == answer) {
            lower = number;
            question++;

        } else {
            cout << "Please enter 'y' or 'n' ...\n";
        }

        //cout << "upper: " << upper << " lower: " << lower << " range: " << range << '\n';

    }


    cout << "The number you are thinking of is " << lower << "\n";
    cout << "I needed " << question << " guesses.\n";

    return 0;


keep_window_open(); // Without this output disappears immediately after execution
return 0; // Return 0 to computer to know program has been executed
}

//========================================================================================

// 4.5 Simple calculator

#include "/Users/michael/CLionProjects/std_lib_facilities.h" // Loads the library

const vector<char> ops = {'+', '-', '*', '/', '%'};

bool legalOps(char op) {
    bool legal = false;
    for (auto legal_op : ops) {
        if (op == legal_op) {
            legal = true;
        }
    }
    return legal;
}

int main() {    // Computer starts executing C++ program after main function

    double num1, num2;
    char op;
    double result;

    cout << "CALCULATOR \nWrite the calculation you want to perform: \n(the form should be Number1 +,-,*,/ Number2) \n";
    while (cin >> num1 >> op >> num2) {

        if (legalOps(op)) {
            if (op == '+') {
                result = num1 + num2;
                cout << num1 << ' ' << op << ' ' << num2 << ' ' << "= " << result << '\n';
            } else if (op == '-') {
                result = num1 - num2;
                cout << num1 << ' ' << op << ' ' << num2 << ' ' << "= " << result << '\n';
            } else if (op == '*') {
                result = num1 * num2;
                cout << num1 << ' ' << op << ' ' << num2 << ' ' << "= " << result << '\n';
            } else if (op == '/') {
                result = num1 / num2;
                cout << num1 << ' ' << op << ' ' << num2 << ' ' << "= " << result << '\n';
            }

        } else {
            cout << "The calculation is not supported \n";
        }
    }

    keep_window_open(); // Without this output disappears immediately after execution
    return 0; // Return 0 to computer to know program has been executed
}

//========================================================================================

// 4.6
// A

#include "/Users/michael/CLionProjects/std_lib_facilities.h" // Loads the library

const vector<string> values = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int main() {    // Computer starts executing C++ program after main function

    int num;
    while (cin >> num) {
        if (num >= 0 && num <= 9) {
            cout << values[num] << '\n';
        }
        else {
            cout << "please enter a single digit \n";
        }
    }

    keep_window_open(); // Without this output disappears immediately after execution
    return 0; // Return 0 to computer to know program has been executed
}

// B

#include "/Users/michael/CLionProjects/std_lib_facilities.h" // Loads the library

const vector<int> digits = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
const vector<string> values = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int main() {    // Computer starts executing C++ program after main function

    string num;
    while (cin >> num) {
        for (int i = 0; i < values.size(); ++i) {
            if (num == values[i]) {
                cout << digits[i] << '\n';
            } else {

            }
        }
    }

    keep_window_open(); // Without this output disappears immediately after execution
    return 0; // Return 0 to computer to know program has been executed
} 

//========================================================================================

// 4.6, 4.7

// My solution (was working but I messed it up)

// FULL OF MISTAKES - DEBUG OR DISCARD
// Accept only ints from 0 to 9
// Accept only string from values
// Division by zero

#include "/Users/michael/CLionProjects/std_lib_facilities.h" // Loads the library

vector<string> values;
vector<char> ops;

void loadValues() {
    values.push_back("zero");
    values.push_back("one");
    values.push_back("two");
    values.push_back("three");
    values.push_back("four");
    values.push_back("five");
    values.push_back("six");
    values.push_back("seven");
    values.push_back("eight");
    values.push_back("nine");
}

void loadOps() {
    ops.push_back('+');
    ops.push_back('-');
    ops.push_back('*');
    ops.push_back('/');
}

bool legalValues(string str) {
    bool legalV = false;
    for (auto legal_value : values) {
        if (str == legal_value) {
            legalV = true;
        }
    }
    return legalV;
}

bool legalOps(char op) {
    bool legalO = false;
    for (auto legal_op : ops) {
        if (op == legal_op) {
            legalO = true;
        }
    }
    return legalO;
}

int main() {
    char loop = 'y';
    int val;
    string str;
    int num1;
    int num2;
    char op;

    loadValues();
    loadOps();

    while (loop == 'y') {
        // NUMBER ONE
        if (cin >> val) {
            num1 = val;
        } else {
            cin.clear();
            cin >> str;
            if (legalValues(str)) {
                cout << "please enter values between 0 (zero) and 9 (nine) \n";
            } else {
                for (int i = 0; i < values.size(); ++i) {
                    if (str == values[i]) {
                        num1 = i;
                    }
                }
            }
        }

        // OPERATION SYMBOL
        cin.clear();
        cin >> op;
        if (!legalOps(op)) {
            cout << "function is not recognised \n";
        }

        // NUMBER TW0
        if (cin >> val) {
            num2 = val;
        } else {
            cin.clear();
            cin >> str;
            if (legalValues(str)) {
                cout << "please enter values between 0 (zero) and 9 (nine) \n";
            } else {
                for (int i = 0; i < values.size(); ++i) {
                    if (str == values[i]) {
                        num2 = i;
                    }
                }
            }
        }

        // OUTPUT

        if (num1 < 0 || num1 > 9 || num2 < 0 || num2 >9) {
            cout << "please enter values between 0 (zero) and 9 (nine) \n";
        } else if (op == '/' && num2 == 0) {
            cout << "division by zero\n";
        } else if (op == '+') {
            cout << num1 << ' ' << op << ' ' << num2 << ' ' << '=' << ' ' << num1 + num2 << '\n';
        } else if (op == '-') {
            cout << num1 << ' ' << op << ' ' << num2 << ' ' << '=' << ' ' << num1 - num2 << '\n';
        } else if (op == '*') {
            cout << num1 << ' ' << op << ' ' << num2 << ' ' << '=' << ' ' << num1 * num2 << '\n';
        } else if (op == '/') {
            cout << num1 << ' ' << op << ' ' << num2 << ' ' << '=' << ' ' << num1 / num2 << '\n';
        }

        cout << "continue y/n?\n";
        cin >> loop;
    }

    keep_window_open();
    return 0;
}

// Stroustrup's solution

#include "std_lib_facilities.h" 

vector<string> numbers; // representation of numbers as strings
                        // numbers[i] is the string representation for i
                        // for numbers[0] to numbers[numbers.size()-1]

void initialize_numbers()
{
    numbers.push_back("zero");
    numbers.push_back("one");
    numbers.push_back("two");
    numbers.push_back("three");
    numbers.push_back("four");
    numbers.push_back("five");
    numbers.push_back("six");
    numbers.push_back("seven");
    numbers.push_back("eight");
    numbers.push_back("nine");
    numbers.push_back("ten");   // why not? :-)
}

int get_number() {
    const int not_a_symbol = numbers.size();    // not_a_symbol is a value that does not correspond
                                                // to a string in the numbers vector
    int val = not_a_symbol;
    if (cin>>val) return val; // try to read an integer composed of digits 
    cin.clear();    // clear string after failed attempt to read an integer
    string s;
    cin>>s;
    for (int i=0; i<numbers.size(); ++i)    // see if the string is in numbers
        if (numbers[i]==s) val = i;
    if (val==not_a_symbol) error("unexpected number string: ",s);
    return val;
}

int main()
try
{
    initialize_numbers();

    cout<< "please enter two floating-point values separated by an operator\n The operator can be + - * / % : ";
    
    while (true) {  // "forever"; that is until we give an unacceptable input or make a computations error
        int val1 = get_number();

        char op = 0;
        cin>>op; // get the operator
        
        int val2 = get_number();

        string oper;    // text appropriate for an operator
        double result;

        switch (op) {
        case '+':
            oper = "sum of ";
            result = val1+val2; 
            break;
        case '-':
            oper = "difference between ";
            result = val1-val2; 
            break;
        case '*':
            oper = "product of ";
            result = val1*val2; 
            break;
        case '/':
            oper = "ratio of ";
            if (val2==0) error("trying to divide by zero");
            result = val1/val2; 
            break;
        case '%':
            oper = "remainder of ";
            if (val2==0) error("trying to divide by zero (%)");
            result = val1%val2; 
            break;
        default:
                error("bad operator");
        }
        cout << oper << val1 << " and " << val2 << " is " << result << '\n';
        cout << "Try again: ";
    }
}
catch (runtime_error e) {   // this code is to produce error messages; it will be described in Chapter 5
    cout << e.what() << '\n';
    keep_window_open("~");  // For some Windows(tm) setups
}
catch (...) {   // this code is to produce error messages; it will be described in Chapter 5
    cout << "exiting\n";
    keep_window_open("~");  // For some Windows(tm) setups
}

//========================================================================================

// 4.8 Not my solution

#include "/Users/michael/CLionProjects/std_lib_facilities.h" // Loads the library

int main() {
    vector<int> naDesiredRice{1000, 1'000'000, 1'000'000'000};

    int nSquare {1};

    int nRiceOnCurrSquare {1};
    int nRiceOnPrevSquares {0};

    for (int i = 0; i < naDesiredRice.size(); ++i) {
        while (naDesiredRice[i] > nRiceOnPrevSquares + nRiceOnCurrSquare) {


            cout << "Square: " << nSquare++ << '\n';
            cout << "\tGrains at current square: " << nRiceOnCurrSquare << '\n';
            cout << "\tRice on previous squares: " << nRiceOnPrevSquares << '\n';
            cout << "\tTotal rice grains: " << nRiceOnPrevSquares + nRiceOnCurrSquare << '\n';

            nRiceOnPrevSquares += nRiceOnCurrSquare;
            nRiceOnCurrSquare *= 2;
        }

        cout << "To give the inventor at least " << naDesiredRice[i] << " grains, " << nSquare << " squares are required.\n";
        cout << "Grains at square " << nSquare << ": " << nRiceOnCurrSquare << '\n';
        cout << "With the rice on the previous squares this results in " << nRiceOnPrevSquares + nRiceOnCurrSquare << " total grains for the inventor.\n\n";

        nSquare = 1;

        nRiceOnCurrSquare = 1;
        nRiceOnPrevSquares = 0;
    }
    return 0;
}

//========================================================================================

// 4.9

#include "/Users/michael/CLionProjects/std_lib_facilities.h" // Loads the library

int main() {

    constexpr double increase = 2;

    vector<int> square(64);
    for (int i = 0; i < 64; ++i) {
        square[i] = i + 1;
        cout << square[i] << '\n';
    }

    vector<double> rice(64);
    rice[0] = 1;
    for (int i = 1; i < 64; ++i) {
        rice[i] = rice[i - 1] * increase;
        cout << rice[i] << '\n';
    }
    
    keep_window_open();
    return 0;
}

//========================================================================================

// 4.10 No mine

#include "/Users/michael/CLionProjects/std_lib_facilities.h" // Loads the library


int v1 = 1;
int v2 = 2;

int fib()   // generate the next element of a (Fibbonacci) series:
// 1 2 3 5 8 13 21 34
{
    int s = v1+v2;
    if (s<=0) s = 1;    // how could s become less than zero?
    v1 = v2;
    v2 = s;
    return s;
}

void generate(int seed)
// use the seed to choose where in the sequence the game starts
{
    if (seed<0) seed = -seed;   // don't want a negative number
    seed %=10;                  // don't want a number larger than 9
    if (seed==0) return;        // don't bother: use the default
    for (int i=0 ; i<seed; ++i) fib();  // move seed steps forward
}

int next_play() // generate a reasonably obscure sequence of 0s, 1s, and 2s
{
    return fib()%3; // we are only interested in a value 0, 1, or 2 (% is the modulus/remainder operation)
}


int main()
try
{
    cout << "enter an integer \"seed\" to help me play: ";
    int seed = 0;
    cin >> seed;
    generate(seed); // get the computer ready to play

    // let's keep track of who's winning:
    int count1 = 0; // user's score
    int count2 = 0; // computer's score
    int draws = 0;  // number of draws/ties

    cout << "enter \"rock\", \"paper\", or \"scissors\"\n"
         << "(I'll do the same and promises not to cheat by peeping at your input): ";
    string s;
    while(cin >> s) {   // we'll as long as we get "good" input and then stop

        // the computer prefers numbers, so convert string representations to numbers
        // we prefer strings (except when wet ype), so convert abbreviations to full words
        int x = 0;
        if (s=="scissors" || s=="s") {
            x = 0;
            s = "scissors";
        }
        else if (s=="rock" || s=="r") {
            x = 1;
            s = "rock";
        }
        else if (s=="paper" || s=="p") {
            x = 2;
            s = "paper";
        }
        else error("sorry: bad operator: ",s);

        int xx = next_play();
        string ss;  // computers play
        switch(xx) {    // we prefer strings, so convert numeric representations to strings
            case 0: ss = "scissors"; break;
            case 1: ss = "rock"; break;
            case 2: ss = "paper"; break;
        }

        if (x==xx) {
            cout << "a draw!\n";
            ++draws;
        }
        else {
            string res = "I win!";
            if (xx==0 && x==1) {
                res = "You win!";   // rock beats sissors
                ++count1;
            }
            else if (xx==1 && x==2) {
                res = "You win!";   // paper beats rock
                ++count1;
            }
            else if (xx==2 && x==0) {
                res = "You win!";   // scissors beat paper
                ++count1;
            }
            else
                ++count2;

            cout << "you said \"" << s << "\" I said \"" << ss << "\": " << res ;
            cout << " score: you==" << count1 << " me==" << count2 << " same==" << draws << "\n";
        }
        cout << "Please try again: ";
    }
    cout << "exit because of bad input\n";
    keep_window_open("~");  // For some Windows(tm) setups
}
catch (runtime_error e) {   // this code is to produceerror messages; it will be described in Chapter 5
    cout << e.what() << '\n';
    keep_window_open("~");  // For some Windows(tm) setups
}

/*
    Did you have trouble remembering that
        0 means "scissors"
        1 means "rock"
        2 means "paper"
    ?

    I did. We could have avoided most of the use of numbers. Alternatively, we could have introduced
    synbolic names for the numbers 0, 1, 2 - we'll get to that in chapters 7 and 8.
*/

//========================================================================================

// 4.11

#include "/Users/michael/CLionProjects/std_lib_facilities.h" // Loads the library

constexpr int up_to = 100;

int main() {

    vector<int> primes;
    int total_primes = 0;
    int d = 0;

    for (int i = 2; i <= up_to; ++i) {
        for (int j = 1; j < i; ++j) {
            if (i % j == 0) {
                d += 1;
            }

        }
        if (d == 1) {
            primes.push_back(i);
            total_primes +=1;
        }
        d = 0;
    }

    cout << "Number of primes smaller or equal to " << up_to << " : " << total_primes << '\n';
    for (int i = 0; i < primes.size(); ++i) {
        cout << primes[i] << "  ";
    }
    cout << '\n';

    keep_window_open();
    return 0;
}

//========================================================================================

// 4.12 Find prime numbers up to an integer (simple method modulo (i/2)+1)

#include "/Users/michael/CLionProjects/std_lib_facilities.h" // Loads the header


int main() {

    cout << "the program calculates all prime number smaller or equal to the integer value you enter \n";

    int up_to;
    while (cin >> up_to) {
        if (up_to >= 2) {
            vector<int> primes;
            int total_primes = 0;
            int d = 0;

            for (int i = 2; i <= up_to; ++i) {
                for (int j = 1; j < (i/2)+1; ++j) {
                    if (i % j == 0) {
                        d += 1;
                    }

                }
                if (d == 1) {
                    primes.push_back(i);
                    total_primes += 1;
                }
                d = 0;
            }

            cout << "Number of prime numbers smaller or equal to " << up_to << " : " << total_primes << '\n';
            for (int i = 0; i < primes.size(); ++i) {
                cout << primes[i] << "  ";
            }
            cout << '\n';
        } else {
            cout << "enter an integer equal or higher than 2 \n";
        }
    }

    keep_window_open();
    return 0;
}

//========================================================================================

// 4.13 Sieve of Eratosthenes 

#include "/Users/michael/CLionProjects/std_lib_facilities.h" // Loads the header

int main() {
    constexpr int up_to{107};
    int total_primes = 0;
    vector<int> is_prime(up_to+1);

    for (int i = 2; i < is_prime.size(); ++i) {
        is_prime[i] = 1;
    }

    for (int i = 2; i < is_prime.size(); ++i) {
        if (is_prime[i] == 1) {
            for (int j = 2; i * j < is_prime.size(); ++j) {
                is_prime[i * j] = 0;
            }
        }
    }

    for (int i = 2; i < is_prime.size(); ++i) {
        if (is_prime[i] == 1) {
            total_primes += 1;
            cout << i << ' ';
        }
    }

    cout << '\n' << "Number of primes smaller than or equal to " << up_to << ": " << total_primes << '\n';

    return 0;
}

//========================================================================================

// 4.14

#include "/Users/michael/CLionProjects/std_lib_facilities.h" // Loads the header

int main() {

    cout << "the program calculates all prime number smaller than  or equal to the integer value you enter \n";

    int up_to;

    while(cin>>up_to) {
        if (up_to > 1) {
            int total_primes = 0;
            vector<int> is_prime(up_to + 1);

            for (int i = 2; i < is_prime.size(); ++i) {
                is_prime[i] = 1;
            }

            for (int i = 2; i < is_prime.size(); ++i) {
                if (is_prime[i] == 1) {
                    for (int j = 2; i * j < is_prime.size(); ++j) {
                        is_prime[i * j] = 0;
                    }
                }
            }

            for (int i = 2; i < is_prime.size(); ++i) {
                if (is_prime[i] == 1) {
                    total_primes += 1;
                    cout << i << ' ';
                }
            }

            cout << '\n' << "Number of primes smaller than or equal to " << up_to << ": " << total_primes << '\n';
        } else {
            cout << "Please enter and integer larger than 1" << '\n';
        }
    }
    return 0;
}

//========================================================================================

// 4.15 First n primes

#include "/Users/michael/CLionProjects/std_lib_facilities.h" // Loads the header

int main() {

    cout << "enter integer n to calculate the first n prime numbers \n";

    int n;
    while (cin >> n) {
        if (n > 0) {
            vector<int> primes;
            int total_primes = 0;
            int number = 2;

            while (total_primes < n) {
                int d = 1;

                for (int j = 2; j < (number / 2) + 1; ++j) {
                    if (number % j == 0) {
                        d += 1;
                    }
                }
                if (d == 1) {
                    primes.push_back(number);
                    total_primes += 1;
                }
                number += 1;

            }
            for (int i = 0; i < primes.size(); ++i) {
                cout << primes[i] << '\n';
            }
        } else {
            cout << "enter an integer larger than zero \n";
        }
    }

    keep_window_open();
    return 0;
}

//========================================================================================

// 4.16 Mode of integers

#include "/Users/michael/CLionProjects/std_lib_facilities.h" // Loads the header

int main() {

    cout << "Enter a series of positive integers to get the mode\n";
    vector<int> sequence;

    for (int number; cin >> number;) {
        sequence.push_back(number); // add input numbers in vector
    }

    sort(sequence);

    int last_value = sequence[0];
    int max_freq = 0;
    int freq = 1;
    int mode;

    for (int i = 1; i < sequence.size(); ++i) {
        if (sequence[i] == last_value) {
            freq++;
            if (freq > max_freq) {
                mode = sequence[i];
                max_freq = freq;
            }
        } else {
            freq = 1;
        }
        last_value = sequence[i];
    }

    cout << "mode: " << mode << "\nappears: " << max_freq << " times \n";

    return 0;
}

//========================================================================================

// 4.17 Mode, min, max of strings

#include "/Users/michael/CLionProjects/std_lib_facilities.h" // Loads the header

int main() {

    cout << "Enter a series of words to get the mode\n";
    vector<string> sequence;

    for (string word; cin >> word;) {
        sequence.push_back(word); // add input numbers in vector
    }

    sort(sequence);

    string last_word = sequence[0];
    int max_freq = 0;
    int freq = 1;
    string mode;

    for (int i = 1; i < sequence.size(); ++i) {
        if (sequence[i] == last_word) {
            freq++;
            if (freq > max_freq) {
                mode = sequence[i];
                max_freq = freq;
            }
        } else {
            freq = 1;
        }
        last_word = sequence[i];
    }
    cout << "min: " << sequence[0] << "\nmax: " << sequence[sequence.size() - 1] << '\n'
         << "mode: " << mode << "\nappears: " << max_freq << " times \n";
    
    return 0;
}

//========================================================================================

// 4.18

#include "/Users/michael/CLionProjects/std_lib_facilities.h" // Loads the header

int main() {

    cout << "enter a, b, c parameters of quadratic equation\n";
    double a, b, c, x1, x2;

    while (cin >> a >> b >> c) {

        x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

        x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

        if (isnan(x1) == 1 || isnan(x2) == 1) {
            cout << "solution is imaginary number\n";
        } else {
            cout << "x1 = " << x1 << "\nx2 = " << x2 << '\n';
        }
    }

    return 0;
}

//========================================================================================

// 4.19

#include "/Users/michael/CLionProjects/std_lib_facilities.h" // Loads the header

int main() {

    cout << "Enter name and score\n";
    vector<string> names;
    vector<double> scores;
    string name;
    double score;

    while (cin >> name >> score && name != "NoName") {
        for (int i = 0; i < names.size(); ++i) {
            if (name == names[i]) {
                 error("duplicate: ", name);
            }
        }
        names.push_back(name);
        scores.push_back(score);

    }

    for (int i = 0; i < names.size(); ++i) {
        cout << names[i] << ' ' << scores[i] << '\n';
    }

    keep_window_open();
    return 0;
}

//========================================================================================

// 4.20

#include "/Users/michael/CLionProjects/std_lib_facilities.h" // Loads the header

int main() {

    cout << "Enter name and score\n";
    vector<string> names;
    vector<double> scores;
    string name;
    double score;

    while (cin >> name >> score && name != "NoName") {
        for (int i = 0; i < names.size(); ++i) {
            if (name == names[i]) {
                error("duplicate: ", name);
            }
        }
        names.push_back(name);
        scores.push_back(score);

    }

    string record;
    while (cin >> record) {
        bool found = false;
        for (int i = 0; i < names.size(); ++i) {
            if (names[i] == record) {
                cout << "score: " << scores[i] << '\n';
                found = !found;
            }
        }
        if (found == false) {
            cout << "name not found\n";
        }
    }

    keep_window_open();
    return 0;
}

//========================================================================================

// 4.21

#include "/Users/michael/CLionProjects/std_lib_facilities.h" // Loads the header

int main() {

    cout << "Enter name and score\n";
    vector<string> names;
    vector<double> scores;
    string name;
    double score;

    while (cin >> name >> score && name != "NoName") {
        for (int i = 0; i < names.size(); ++i) {
            if (name == names[i]) {
                error("duplicate: ", name);
            }
        }
        names.push_back(name);
        scores.push_back(score);

    }

    int record;
    while (cin >> record) {
        bool found = false;
        for (int i = 0; i < scores.size(); ++i) {
            if (scores[i] == record) {
                cout << "name: " << names[i] << '\n';
                found = !found;
            }
        }
        if (found == false) {
            cout << "score not found\n";
        }
    }

    keep_window_open();
    return 0;
}
