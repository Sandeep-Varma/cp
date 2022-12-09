# CSES Introductory Problems

## Weird Algorithm

Assert whether n is even or odd using the % operator and transform n accordingly. This can be repeated untill n is not one using a while loop.

#

## Missing Number

Create an array of length n of boolenan type where value at each index indicating the presence or absence of that index in the given list. Iterate over the list of given numbers and set value at those indices to true. Then, the only position in the array not containing true is the missing number

### A better solution:
Another solution which uses constant memory and lesser time though of same time complexity is by computing a cumulative sum of all the n-1 numbers and subtracting it from n*(n+1)/2 which is sum of all n numbers, so the difference gives the required number.

#

## Repititions

Iterate over the string character by character and store the previous character, previous contiguous length and maximum previous contiguous character length. Increment the length if the character is same as its predecessor else make it zero. After the computation at each character, update the previous maximum contiguous character length.

#

## Increasing Array

Iterate over the array left to right and at every position, if the value is lower than its predecessor, then increment it to make them equal as that's the minimum increment to be done.

#

## Permutations

Check all the bases cases untill n is 4. For any greater n, we can print all the even numbers and then all the odd numbers.

#

## Number Spiral

We can infer that a number z in row x and column y lies in the n<sup>th</sup> layer of the spiral where n=max(x,y) and it lies in the range ( (n-1)<sup>2</sup> , n<sup>2</sup> ] and it's value can be calculated by computing the number of squares in that layer before this number.

#

## Two Knights

At each step, compute the number of new possibilities added by incrementing k by 1 and add it to the cumulative sum.

#

## Two Sets

When n is of the form 4m, it is separable as follows. Put all numbers of form 4x and 4x+1 in a set and those of form 4x+2 and 4x+3 in the other set.
When n is of the form 4m+3, it is separable as follows. Put 1 and 2 in a set and 3 in the other set. There are 4m numbers remaining. Put those of form 3+(4m) and 3+(4m+1) in a set and those of form 3+(4m+2) and 3+(4m+3) in the other set.
When n is of other forms i.e., 4m+1 and 4m+2, it isn't separable into two sets.

#

## Bit Strings

2<sup>29</sup> < 10<sup>9</sup> + 7 < 2<sup>30</sup><br/>
So, if n < 30, we can directly compute 2<sup>n</sup> and return it. Else, we can call the function recursively to compute product of the remainder of 2<sup>n/2</sup> and remainder of 2<sup>n-n/2</sup> and then apply the remainder operator again.

### A better solution:
Dynamic programming can be used here

#

## Trailing Zeros

In n!, there would be more 2s than 5s. So, counting the number of 5s would give us the number of trailing zeros which is as follows:<br/>
= 1 * number of numbers with 5<sup>1</sup> in their prime factorization<br/>
\+ 2 * number of numbers with 5<sup>2</sup> in their prime factorization<br/>
\+ 3 * number of numbers with 5<sup>3</sup> in their prime factorization<br/>
... and so on<br/>
which is same as<br/>
= number of multiples of 5<sup>1</sup><br/>
\+ number of multiples of 5<sup>2</sup><br/>
\+ number of multiples of 5<sup>3</sup><br/>
... and so on

#

## Coin Piles

To make these piles empty, we might use the following strategy which always works if it is a valid pair:<br/>
First, without loss of generality, I assume a>=b. Now, I remove 2 from pile a and 1 from pile b repeatedly for a-b times so that both piles become equal. So, if b < a-b, it is not possible. And then, after making both piles equal, we can repeat removing 2 from a and 1 from b and then 1 from a and then 2 from b untill they become zero. Again there must be a multiple of 3 coins in each pile for this strategy to work i.e., b-(a-b) which is 2b-a must be a multiple of 3.<br/>
From this, we conclude that, (2b-a)%3 == 0 and (2b-a) >= 0 are the two conditions required to be able to empty both of the piles.

#

## Palindrome Reorder

Count the number of times each character appears in the string. Atmost only one of these characters can appear odd number of times else there is no solution. Now, when there is a solution, just put the character which has been there odd number of times at the centre and put the remaining characters on both sides.

#
