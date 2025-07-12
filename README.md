---


# 🧵 String Library for C++ 🚀

Welcome to the **String Library**, a powerful and easy-to-use C++ class designed to extend and simplify string manipulation.

> 📦 Single-header string utility toolkit built for learning and convenience.

---

## 📚 Features

- 🔠 Convert string cases (Upper, Lower, Invert)
- 🧮 Count words, letters, vowels
- ✂️ Trim whitespace (left, right, both)
- 🧩 Split & join strings
- 🔁 Reverse word order
- 🔄 Replace or remove words/punctuation
- 📢 Print helper functions

---

## 📁 File Structure

```bash
📦 String-Library
 ┣ 📄 clsString.h          # Main header file with all class methods
 ┣ 📄 String-Library.cpp   # Example usage (entry point)
 ┗ 📜 README.md            # Project documentation


---

## 🧪 Usage

```cpp
#include "clsString.h"

clsString s("hello world");

s.UpperFirstLetterOfEachWord();
cout << s.Value; // Output: Hello World

cout << s.CountWords(); // Output: 2

s.Trim();
cout << s.Value;

s.ReverseWordsInString();
cout << s.Value; // Output: World Hello
```

Check `String-Library.cpp` for a full demo 📜

---

## 🧠 Key Methods

| Method                                | Description                           |
| ------------------------------------- | ------------------------------------- |
| `UpperAllString()`                    | Converts all characters to UPPERCASE  |
| `LowerAllString()`                    | Converts all characters to lowercase  |
| `InvertAllLettersCase()`              | Inverts each character's case         |
| `CountWords()`                        | Returns number of words in string     |
| `PrintWords()`                        | Prints each word in a new line        |
| `Trim()`, `TrimLeft()`, `TrimRight()` | Removes whitespace                    |
| `Split()`                             | Splits a string into vector of tokens |
| `JoinString()`                        | Joins vector or array to a string     |
| `ReplaceWord()`                       | Replaces specific word                |
| `RemovePunctuations()`                | Removes all punctuation marks         |

---

## 📦 Installation

No setup required! Just include the header file in your project:

```cpp
#include "clsString.h"
```

Make sure to compile with a C++11 (or later) compatible compiler.

---

## 🙏 Acknowledgments

Special thanks to ***Dr. Mohammed Abu-Hadhoud*** — for another phenomenal course that shapes strong, fearless developers! 🔥🎓

---

## 📜 License

MIT License

---

## ©️ Copyright

**© 2025 Taha Mahrous. All rights reserved.**

---

## 💬 Feedback

Feel free to contribute or raise issues via GitHub Issues 🛠️
We welcome pull requests and improvements! 🙌

---