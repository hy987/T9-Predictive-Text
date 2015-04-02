# T9
Implementation written in C on Linux Platform:

Cellphone text predictive technology

Remember how texting used to work on a standard keypad on a phone? Well here is the implementation of how the T9 texting system works. A text input mode available on many cell phones and keypads. Each number from 2-9 on the keypad represent three or four letters, the number 0 represents a space, and 1 represents a set of symbols such as { , . ! ? } etc. By typing the corresponding number for the corresponding word, the cellphone predicts the word you are about to write. By pressing the "#" key you can cycle through the words that correspond to the given number input sequence, which can be found for the same input sequence. Example the input sequence '23' would lead to the words: "ad", "be", and "cd".

2 ABC 
3 DEF 
4 GHI 
5 JKL 
6 MNO
7 PQRS 
8 TUV 
9 WXYZ

Implemented using the trie data structure.

http://en.wikipedia.org/wiki/Trie
