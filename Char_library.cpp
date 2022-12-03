#include <iostream>

// function to count the length of string

int StrLength(char* word)
{
    int count = 0;
    while (*word != '\0')
    {
        word++;
        count++;
    }
    return count;
}

// function to count  mentioned char quantity in string

int CharQuantity(char* word, char symbol)
{
    int count = 0;
    while (*word != '\0')
    {
        if (*word == symbol)
        {
            count++;
        }
        word++;
    }
    return count;
}

// function to add char front of inputted char symbol

char* AddChar(char* word, char fixedChar, char addFront )
{
    int lenWord = StrLength(word);
    int len = CharQuantity(word, fixedChar) + StrLength(word) + 1;

    char* NewWord = new char[len];

    int count = 0;
    for (int i = 0; i < lenWord; i++)
    {
        if (word[i] == fixedChar)
        {
            NewWord[count] = addFront;
            count++;
        }

        NewWord[count] = word[i];
        count++;
    }
    NewWord[len - 1] = '\0';

    return NewWord;
}

//function to reverse char array
void Reverse(char* Word, char* copy, int length)
{
    for (int i = 0; i < length; i++)
    {
        copy[i] = Word[length - 1 - i];
    }
    copy[length] = '\0';
}

// function to concatenate two strings

char* ConcatenateStr(char* word1, char* word2)
{
    int count = 0;
    int len1 = StrLength(word1);
    int len2 = StrLength(word2);
    char* container = new char[len1 + len2 + 1 ];
    while (*word1 != '\0')
    {
        container[count] = *word1;
        word1++;
        count++;
    }
    while (*word2 != '\0')
    {
        container[count] = *word2;
        word2++;
        count++;
    }
    container[count] = '\0';

    return container;
}

// function to print char array

void PrintChar(char* word)
{
    for (int i = 0; i < StrLength(word); i++)
    {
        std::cout << word[i];
    }
    std::cout << std::endl;
}

//function to delete the word that has created on heap

void Delete(char* word)
{
    delete[] word;
}

 // function to check word palindrome or not

bool WordPalindromOrNot(char* word)
{
    int len = StrLength(word);

    for (int i = 0; i < len / 2; i++)
    {
        if (word[i] == word[len - i - 1])
        {
            return true;
        }
    }
    return false;
}

// function to find the char value when we have char code
char Symbol(int s)
{
    while (s > 127)
    {
        s++;
    }
    return s;
}

// function to replace the char number or array wanted char
char* Replace(char* word, char symbol1, char symbol2)
{
    int len = StrLength(word);

    for (int i = 0; i < len; i++)
    {
        if (word[i] == symbol1)
        {
            word[i] = symbol2;
        }
    }
    return word;
    
}

// function to add the ? in the middle of char array
char* AddElemenetInMiddle(char* word, char letter)
{
    int len = StrLength(word);
    char* newword = new char[len + 2];
    int index = 0;
    for (int i = 0; i < len; i++)
    {
        if (i == len/2)
        {
            newword[index] = letter;
            index++;  
        }
        newword[index] = word[i];
        index++;
    }
    newword[index] = '\0';

    return newword ;
      
}

//function to insert the char array
char* Splice(char* word, int position, char letter)
{
    int len = StrLength(word);
    if (position > len - 1 && position > -1)
    {
        std::cout << "Out of range " << std::endl;
        return 0;
    }
    char* newWord = new char[len + 2];
    int index = 0;
    for (int i = 0; i < len; i++)
    {
        
        if (i == position)
        {
            newWord[index] = letter;
            index++;
        }
        newWord[index] = word[i];
        index++;
    }
    newWord[index] = '\0';

    return newWord;
}

// function to slice the char array
char* Splice(char* word, int position)
{
    int len = StrLength(word);

    if (position > len - 1 && position > -1)
    {
        std::cout << "Out of range " << std::endl;
        return 0;
    }

    char* NewSlice = new char[len];
    int index = 0;
    for (int i = 0; i < len; i++)
    {
        if (i != position)
        {
            NewSlice[index] = word[i];
            index++;
        }
    }
    NewSlice[len - 1] = '\0';

    return NewSlice;


}








 

