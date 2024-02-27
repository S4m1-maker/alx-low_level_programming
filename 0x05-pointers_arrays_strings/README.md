# 0x05. C - Pointers, arrays and strings Project

========================================================================================

## 0. 98 Battery st.

* Write a function that takes a pointer to an int as parameter and updates the value it points to to 97.

    * Prototype: void reset_to_98(int \*n);

```markdown
* Declare and define the function
    * Dereference the pointer n and update the value
    * return is void
```

## 1. Don't swap horses in crossing a stream

* Write a function that swaps the values of two integers.

    * Prototype: void swap_int(int \*a, int \*b);

```markdown
* Declare and define the function
    * Declare int variable 'p'
    * Assign '*a' to 'p'
    * Assign '*b' to '*a'
    * Assign 'p' to '*b'
```

## 2. This report, by its very length, defends itself against the risk of being read

* Write a function that returns the length of a string.

    * Prototype: int \_strlen(char \*s);

```markdown
* Declare and define the fucntion
    * Declare int len variable
    * Iterate through the string s
    * len++
    * s++
    * return len
```

## 3. I do not fear computers. I fear the lack of them

* Write a function that prints a string, followed by a new line, to stdout.

    * Prototype: void \_puts(char \*str);

```markdown
* Declare and define the function
    * Declare int i varialbe
    * Iterate through the string str
    * i++
    * putchar *str++
    * putchar new line
```

## 4. I can only go one way. I've not got a reverse gear

* Write a function that prints a string, in reverse, followed by a new line.

    * Prototype: void print_rev(char \*s);

```md
* Declare and define the function
    * Declare int i, len variables
    * find the length of the string s
    * Iterate through the string from last character less the '\0'
    * i--
    * putchar s[i]
```

