This project has been created as part of the 42 curriculum by <marcsan2>

Push swap is a c program that takes as an argument the stack
formed by a list of integers and sorts the stack with the lowest possible number of operations.If no parameters are specified the program wont display anything.
If some number is not correct or some number is repeated the program it will display "Error"

For moving the numbers there is 11 posible movements:
sa (swap a): Swap the first 2 elements at the top of stack a.
Do nothing if there is only one element or none.
sb (swap b): Swap the first 2 elements at the top of stack b.
Do nothing if there is only one element or none.
ss : sa and sb at the same time.
pa (push a): Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.
pb (push b): Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.
ra (rotate a): Shift up all elements of stack a by 1.
The first element becomes the last one.
rb (rotate b): Shift up all elements of stack b by 1.
The first element becomes the last one.
rr : ra and rb at the same time.
rra (reverse rotate a): Shift down all elements of stack a by 1.
The last element becomes the first one.
rrb (reverse rotate b): Shift down all elements of stack b by 1.
The last element becomes the first one.
rrr : rra and rrb at the same time.

### Sorting example
```
-------------------------------------------------------------------------------------------------------
Init a and b:
2
1
3
6
8
5
_ _
a b
-------------------------------------------------------------------------------------------------------
Exec sa:
1
2
3
6
8
5
_ _
a b
-------------------------------------------------------------------------------------------------------
Exec pb pb pb:
6 3
5 2
8 1
_ _
a b
-------------------------------------------------------------------------------------------------------
Exec ra rb (equiv. to rr):
5 2
8 1
6 3
_ _
a b
-------------------------------------------------------------------------------------------------------
Exec rra rrb (equiv. to rrr):
6 3
5 2
8 1
_ _
a b
-------------------------------------------------------------------------------------------------------
Exec sa:
5 3
6 2
8 1
_ _
a b
-------------------------------------------------------------------------------------------------------
Exec pa pa pa:
1
2
3
5
6
8
_ _
a b 
-------------------------------------------------------------------------------------------------------
```


Resources:
I´ve used: https://42-cursus.gitbook.io/guide/2-rank-02/push_swap/algorithms to understand the diferent algorithms and to start planning the project.