#include <iostream>
using namespace std;

void printv(int v[], int sz)
{
    for (int i = 0; i < sz; i++)
        cout << v[i] << ' ';
    cout << endl;
}

void cyclicMove(int arr[], int size, bool clock);
int StrLength(char s[]);
int Compare(char s[], char t[]);
void StrCopy(char t[], char s[]);
int PStrLen(char s[]);
int PCompare(char* s, char* t);
void PStrCopy(char* t, char* s);

int main() {
    
    {
        cout << "------Clock move------" << endl;
        const int n = 12;
        int arr[n] = {1, 2, 3, 4, 5, 6};
        int* ptr = arr;
        printv(ptr, n);
        
        int t;
        cout << "Clock forward -- 1, Clock backward -- 0" << endl; cin >> t;
        bool tt = t == 1 ? true : false;
        
        cyclicMove(ptr, n, tt);  // perform clockwise permutation
        cout << "Clock move: ";
        for (int i = 0; i < n; i++) { cout << arr[i] << " "; }
        cout << endl;
    }

    {
        cout << "------String operations------" << endl;
        char s[16] = "12345";
        cout << s << endl;
        cout << strlen(s) << endl;

        char t[] = "12345";
        cout << strlen(t) << ' ' << sizeof(t) << endl; 	// увидим 5 6

    /*    {
            string str1 = "abcde"; string str2 = "abz";
            int result = str1.compare(str2);
            if (result == 0) { cout << "The strings are equal." << endl; }
            else if (result < 0) { cout << "str1 is less than str2." << endl; }
            else { cout << "str1 is greater than str2." << endl; }
        }*/
        
        int length = StrLength(t);
        cout << "Length of |"<< t <<"| is" << length << endl;

        char str1[] = "abcde";
        char str2[] = "abz";
        int result = Compare(str1, str2);
        if (result == 0) { cout << "The strings are equal." << endl; }
        else if (result < 0) { cout << "str1 is less than str2." << endl; }
        else { cout << "str1 is greater than str2." << endl; }
        
        StrCopy(str1, str2);
        cout << "str2: " << str2 << ";   str1: " << str1 << endl;
    }
    
    {
        cout << "------Pointers------" << endl;
        char str1[] = "abcde";
        char* p = str1;
        cout << PStrLen(p) << endl;

        char str2[] = "abcde";
        char str3[] = "abcde";
        int result = PCompare(str2, str3);
        cout << "Result of Compare: " << result << endl;

        char str4[] = "abcde";
        char str5[] = "abz";
        cout << "Before copy: str4: " << str4 << ";   str5: " << str5 << endl;

        PStrCopy(str4, str5);

        cout << "After copy: str4: " << str4 << ";   str5: " << str5 << endl;
    }

    return 0;
}

void cyclicMove(int arr[], int size, bool time) {
    if (time) {
        int temp = arr[size - 1];
        for (int i = size - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = temp;
    }
    else {
        int temp = arr[0];
        for (int i = 0; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[size - 1] = temp;
    }
}

int StrLength(char s[])
{
    int length = 0;
    while (s[length] != '\0') { length++; }
    return length;
}

int Compare(char s[], char t[]) {
    int i = 0;
    while (s[i] != '\0' || t[i] != '\0')
    {
        if (s[i] < t[i]) { return -1; }
        else if (s[i] > t[i]) { return 1; }
        i++;
    }
}

void StrCopy(char t[], char s[])
{
    int i = 0;
    while (s[i] != '\0') { t[i] = s[i];
        i++;
    }
    t[i] = '\0';
}

int PStrLen(char s[])
{
    char* t = s;
    while (*t != 0) t++;
    return t - s;
}

int PCompare(char* s, char* t) {
    while (*s && *t && *s == *t) {
        s++;
        t++;
    }
    return *s - *t;
}

void PStrCopy(char* t, char* s) {
    while (*s) { *t++ = *s++; }
    *t = '\0';
}