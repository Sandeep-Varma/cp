# CSES Sorting and Searching

## Distinct Numbers

Create an empty set and insert all the n numbers into the set. Since set doesn't allow duplicates, it has only the number of elements that are distinct. Thus, the size of the set is the numner of distinct numbers in the list.

## Apartments

First sort the list of apartments and the list of applicants. Initialize the count to zero. Take the leftmost numbers in both the list. Check if they are within a difference of k. If they are, increment the count by one and move one step to the right in both lists. If not, check the least of the two numbers and move to the right in that list. This is because if a number is less than x in a sorted list, then it's difference from all elements after x will be even higher and can't be mapped to any. In this way iterate till the end of the lists (untill either of the list ends). Now we get the maximum count.

## Ferris Wheel

Sort the list of weights of children. Now take the leftmost and rightmost i.e., minimum and maximum weights and add them to see if the sum exceeds the limit. If it doesn't, then these two children can take 1 gondola (increment count) and move the left pointer one step right and the right pointer one step left. If it exceeds, it means that the weight at right pointer (maximum of current list) can't be added to any other as all the other weights are atleast as large as the weight at left pointer (minimum of current list). Hence move only the right pointer one step left and increment counter. Repeat this untill the list becomes empty (i.e., left pointer and right pointer cross each other). We got the count of gondolas.

## Concert Tickets

###############

## Josephus II

advance() function is O(n) for a set