### Main Difference between pass by value and pass by reference.

## pass by value

```
 1. A copy of the variable is sent to the function.

 2. original variable does NOT change






```

## pass by reference

```
 1. Instead of sending a copy,
 you send the address of the variable.

 2. Function can directly modify original variable.


```

### Explain the calculation of how an array finds its 3rd index. [what will happen if we try to print a[3] ]

```
 int a[5] = {1 , 2, 3, 4 , 5}
 size of int 4 bytes
 base address: 1000

 so,
 1000 + (3*4)
 = 1012
 which is a[3] value.

```
