/*
 * assign4_acd21.cpp
 *
 *  Created on: Mar 27, 2015
 *      Author: Adam C. De Leon
 *      Class: CS3358 Spring 2015 - Data Structures
 *      Section #: 253
 *      Instructor: Jill Seaman
 *      Assignment #: 4
 *      Description:This program uses recursion in five separate functions to
 *      generate results and returns those results to main. Main uses an array
 *      for the isMemeber function and as a set of values that will be used to
 *      populate the linked list. The first function that is called is
 *      tableOfSquares, followed by, powerFunc, isMemeber, maxNode, and
 *      finally isPalindrome. A description of each of these functions is
 *      located above each function definition respectively.
 ****************************************************************************/
#include<iostream>
#include<string>
#include<cctype>
#include<cassert>
#include<locale>

using namespace std;

//Struct for linked lists
struct Node {
    int value;
    Node *next;
};

//Prototypes for functions.
void tableOfSquares(int);

float powerFunc(float, int);

bool isMember(int[], int, int);

int maxNode(Node *);

bool isPalindrome(string);


int main() {
    //Create necessary variables.
    float num;
    bool ans1;
    bool ans2;
    int arr[10] = {22, 8, 34, 33, 29, 50, 88, 9, 21, 12};
    int max;
    string phrase1 = "";
    string phrase2 = "";
    bool ans3;
    bool ans4;

    //Perform table of squares formatting.
    cout << "Table of squares: " << endl;
    cout << "N" << "    " << "N Squared" << endl;
    //Call table of squares and pass 10 as nth number.
    tableOfSquares(10);
    cout << endl;


    //call powerFunc and return to num variable.
    num = powerFunc(2, 3);
    //Format result
    cout << "Power Function result is: " << num << endl;
    cout << endl;

    //Output array to console.
    cout << "Array is: " << endl;
    for (int j = 0; j < 10; j++) {
        cout << arr[j] << " ";
    }
    cout << endl;

    //Call isMember and return result to ans1 and format result.
    ans1 = isMember(arr, 10, 88);
    if (ans1 == 1) {
        cout << "First isMemeber call is true." << endl;
    } else {
        cout << "First isMember call is false." << endl;
    }

    //Call isMember again and return result to ans2 and format result.
    ans2 = isMember(arr, 10, 27);
    if (ans2 == 1) {
        cout << "Second isMemeber call is true." << endl;
    } else {
        cout << "Second isMember call is false." << endl;
    }
    cout << endl;

    //initialize head pointer as NULL and size for loop to 10.
    int l_size = 10;
    Node *head = NULL;

    //Fill linked list with values from array.
    for (int i = 0; i < l_size; i++) {
        Node *newNode = new Node;
        newNode->value = arr[i];
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            Node *p = head;

            while (p->next) {
                p = p->next;
            }
            p->next = newNode;
        }
    }

    //Output list to console.
    cout << "List is:";
    Node *c = head;
    while (c) {
        cout << " " << c->value;
        c = c->next;
    }
    cout << endl;

    //Set q pointer to head and call maxNode function, sending q as parameter.
    //Return result to max variable and format result.
    Node *q = head;
    max = maxNode(q);
    cout << "max is: " << max << endl;
    cout << endl;

    //Assign phrase1 a string and output to console.
    phrase1 = "A man A plan A canal Panama";
    cout << phrase1;
    //Call isPalindrome function and assign ans3 the value of the return.
    ans3 = isPalindrome(phrase1);
    //Format result.
    if (ans3 == 1) {
        cout << " is a palindrome." << endl;
    } else {
        cout << " is not a palindrome." << endl;
    }

    //Assign phrase2 a string and output to console.
    phrase2 = "No one";
    cout << phrase2;
    //Call isPalindrome function and assign the ans4 the value of the return.
    ans4 = isPalindrome(phrase2);
    //Format result.
    if (ans4 == 1) {
        cout << " is a palindrome." << endl;
    } else {
        cout << " is not a palindrome." << endl;
    }

    return 0;
}

/*****************************************************************************
 * tableOfSquares - is a recursive function that takes an integer variable
 * from main and recursively calculates and outputs the squared value of every
 * integer from 1 to the number sent from main.
 ****************************************************************************/
void tableOfSquares(int n) {
    if (n > 0) {
        tableOfSquares(n - 1);
        cout << n << "         " << n * n << endl;
    }
}

/****************************************************************************
 * powerFunc - is a function that takes a two parameters. One is the number
 * to be raised and the other is the exponent value. The function then
 * recursively calculates the result and returns the result to main.
 ****************************************************************************/
float powerFunc(float num, int exp) {
    if (exp == 0) {
        return 1;
    } else if (exp == 1) {
        return num;
    } else {
        return (num * powerFunc(num, exp - 1));
    }
}

/****************************************************************************
 * isMember - function takes in three parameters to determine whether or not.
 * a target value is in the array. The first is an integer array, the next is
 * the size of the array, and the last is the target value. The result is a
 * boolean variable, either one or zero, and is returned to main. First the
 * size is reduced by one. Then the function checks to see if the size of the
 * array is 0 which means that either the array is empty or the target is not
 * in the array. Then the function checks to see if the target is the last in
 * the last index of the array and returns true if it is. If both previous
 * conditions are not met the function recursively call the function until one
 * of the first to conditions are satisfied.
 ****************************************************************************/
bool isMember(int array[], int sz, int trgt) {
    sz = sz - 1;
    if (sz < 0) {
        return false;
    } else if (array[sz] == trgt) {
        return true;
    } else {
        return isMember(array, sz, trgt);
    }
}

/*****************************************************************************
 * maxNode - This function takes a pointer node pointer from main as the head
 * of the list then traverses the list to determine the maximum value in the
 * list. This integer value is then returned to main. First the function
 * checks to see if the pointer is at NULL if so we return 0. Then we check to
 * see if the pointer at next is pointing to NULL for the last value of the
 * list. If it has reached this point in the list then the max number is the
 * value at p. Then if the first two conditions have not been satisfied the
 * function creates an integer variable to hold the value of the next node in
 * order to compare it with the value at the current node. This is where the
 * recursive call happens. if the value at the current value is greater than
 * the next value then max is assign the value at p otherwise it returns the
 * value already stored in max.
 ****************************************************************************/
int maxNode(Node *p) {
    if (p == NULL) {
        cout << "The list is empty!";
        return 0;
    }

    if (p->next == NULL) {
        return p->value;
    } else {
        int max = maxNode(p->next);

        if (p->value > max) {
            return p->value;
        } else {
            return max;
        }
    }
}

/****************************************************************************
 * isPalindrome - is a function that takes a string from main as its parameter
 * to determine whether or not the string is a palindrome. First the function
 * checks to see if the string length is less than or equal to one and returns
 * true because if it has reached this point then the string is a palindrome.
 * Then the function checks to see if there is a space at the begginning of
 * the string if so it returns a substring from the next character index to
 * the end of the string. Then the function checks to see if there is a space
 * at the end of the string if so it returns a substring of the string that
 * excludes the last character index of the string. Then the function checks
 * to see if the character at the begginning of the string is the same as the
 * character at the end of the string, if so it returns a recursive call on
 * a substring that removes the first and last characters of the string and
 * continues the this operation until either the first condition is met or
 * all of the mentioned conditions are not met. If none of the conditions are
 * satisfied the function returns false to main.
 */
bool isPalindrome(string str) {
    if (str.length() <= 1) {
        return true;
    }

    if (isspace(str[0])) {
        return isPalindrome(str.substr(1, str.length() - 1));
    }
    if (isspace(str[str.length() - 1])) {
        return isPalindrome(str.substr(0, str.length() - 1));
    }

    if (tolower(str[0]) == tolower(str[str.length() - 1])) {
        return isPalindrome(str.substr(1, str.length() - 2));

    } else {
        return false;
    }
}
