# Egg-Drop-Problem

The Egg drop problem is as the name suggests a problem where we have to drop eggs from multiple floors and find the threshold floor i.e from which the egg can be dropped without it breaking.
Suppose there are N eggs and we want to determine from which floor in a K-floor building you can drop an egg such that it doesn't break. We have to determine the minimum number of attempts we need in order find the critical floor in the worst case while using the best strategy.There are few rules given below. 

An egg that survives a fall can be used again.
A broken egg must be discarded.
The effect of a fall is the same for all eggs.
If the egg doesn't break at a certain floor, it will not break at any floor below.
If the eggs breaks at a certain floor, it will break at any floor above.

The strategy we have applied is not the most optimal but it gets the job done using brute force and a recursive function.
The building is divided into half segments until we have only one egg remaining after which we search for the threshold floor through a linearly ascending search.
The program deals with cases where there are 1 to n eggs available and 1 to k floors and finds the breaking floor i.e the lowest floor from the egg breaks if dropped.
The program uses binary search method which is not optimal for finding the thresold floor in least tries as long as the number of eggs is not too low.

There are multiple approaches involving this problem including Binomail Expansion, Recursive relation, Segmentation etc.
Dynamic programming approach using the recursive function f(n,x)=1 + min{max((f(n-1,x-1),f(n,k-x)):x=1,2,...k} where n is the number of eggs and x is the number of the highest floor to obtain the minimum trials required in the worst case scenario.

Dynamic programming is both a mathematical optimization method and a computer programming method. The method was developed by Richard Bellman in the 1950s and has found applications in numerous fields, from aerospace engineering to economics.
In both contexts it refers to simplifying a complicated problem by breaking it down into simpler sub-problems in a recursive manner.
There are two key attributes that a problem must have in order for dynamic programming to be applicable: optimal substructure and overlapping sub-problems. If a problem can be solved by combining optimal solutions to non-overlapping sub-problems, the strategy is called "divide and conquer" instead.
This is why merge sort and quick sort are not called dynamic programming problems.

It is utilised in cases where threshold is unknown and is required like in the case of finding pressure fault in a solid using a pnuematic drill, finding the fault due to stress in a solid, finding tensile stress of an object
It was implemented by NASA in the Range Rover sent to mars to determine the max height of descent without causing structural damage.
