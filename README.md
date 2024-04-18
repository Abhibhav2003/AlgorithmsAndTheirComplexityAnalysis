# Practical -01: Selection Sort Analysis
This practical implements the selection sort algorithm. It iterates through the array, finds the minimum element in the unsorted part, 
and swaps it with the first element of the unsorted part.
This process is repeated until the entire array is sorted

Working of the algorithm:
1)	Iterates through the complete array.

2)	Finds the minimum element.

3)	Swaps the minimum element with the first element of the unsorted part.

4)	This process is repeated until the entire array is sorted.
   
Time Complexity of the Algorithm:
For every ith element the next (n-i) are iterated, therefore the time complexity of the algorithm is O(n2).

Graph:

<img width="429" alt="image" src="https://github.com/Abhibhav2003/AlgorithmsAndTheirComplexityAnalysis/assets/139039304/7140ad5e-576b-43af-81b2-8cc170204185">

# Practical -02: Sum of n numbers
The algorithm used here is a straightforward summing of the elements in an array. 
The sum_numbers function iterates through each element of the array and accumulates the sum.

Working of the Algorithm:
1)	Initialise a variable to store the sum
2)	Iterate through the complete array
3)	The sum is stored in this way: sum = sum + arr[i] 
4)	The loop runs till the last element is reached 

Time Complexity:
As the complete array is being iterated over, n elements are being traversed, therefore the time complexity is O(n).

Graph:

<img width="406" alt="image" src="https://github.com/Abhibhav2003/AlgorithmsAndTheirComplexityAnalysis/assets/139039304/a825b9d9-46ce-4fe9-a09d-18d6bcab62c8">

# Practical -03: Towers of Hanoi
The Tower of Hanoi algorithm is a classical recursive problem.

The objective is to move the entire stack to another tower, obeying the following rules:
1)	Only one disk can be moved at a time.
2)	Each move consists of taking the top disk from one stack and placing it onto another stack.
3)	No disk may be placed on top of a smaller disk.

Working of the Algorithm:
1)	Base Case: If n = 1, simply move the disk from the source tower to the destination tower.
2)	Move n-1 disks from Source to Auxiliary tower: Use the destination tower as the auxiliary tower.
3)	Move the nth disk from Source to Destination tower.
4)	Move n-1 disks from Auxiliary to Destination tower: Use the source tower as the auxiliary tower.

Time Complexity:
The number of moves required for n disks can be represented by the recurrence relation T(n) = 2T(n-1) + 1.
Solving this recurrence relation we get => T(n) = 2n – 1.
Therefore, the time complexity is O(2n).

Graph:

<img width="453" alt="image" src="https://github.com/Abhibhav2003/AlgorithmsAndTheirComplexityAnalysis/assets/139039304/e7b5895f-a6b2-4e8c-9088-fe466c5daeba">

# Practical -04: Permutation Generator
This PRACTICAL generates all permutations of the given array using recursive backtracking. 

Working of the Algorithm:
1)	Base case: when the current position(k) reaches the end of the array(n).
2)	Recursive Step: Iterate through each element of the input array. 
For each element:
3)	Swap the current element with the first element.
4)	Recursively generate permutations for the subarray starting from the second element.
5)	Swap back the elements to maintain the original order.
6)	Backtrack: After exploring all permutations with the current element at the first position, backtrack by swapping elements back to their original positions.

Time Complexity:

Since, the total number of permutations of n elements is n!, therefore the time complexity is O(n!).
Recursive Relation => P(n) = n*P(n-1)

Graph:

<img width="420" alt="image" src="https://github.com/Abhibhav2003/AlgorithmsAndTheirComplexityAnalysis/assets/139039304/ca418eeb-e910-4206-9076-0f0e575feba1">

# Practical -05: Merging of Two Sorted Lists
This function merges the two sorted lists into a single sorted list, by comparing each element of the two lists and storing the smaller one in the list.

Working of the Algorithm:
1)	Initialise a list in which the result is going to be stored.
2)	Start comparing each element of listA with that of listB.
3)	Loop stops when any one of the list gets completely iterated over.
4)	Push the remaining elements(if any) of the list as it is in the resultant list.
  
Time Complexity:
Since, n elements are being compared and iterated over, the time complexity is O(n).

<img width="408" alt="image" src="https://github.com/Abhibhav2003/AlgorithmsAndTheirComplexityAnalysis/assets/139039304/caae64a0-2a0b-4be5-93a7-37aa6edc604f">


# Practical -6: Correct Position
This algorithm helps in finding out the correct position of an element in the array such that all the elements preceding the given element are smaller than it
and all the elements suceeding it are greater than it.

Working of the Algorithm:
1)	Count all the elements smaller than the given element.
2)	The count is the right index for the element
3)	Swap the element present at that index with the given element
4)	Now to the right and the left of the element using two pointers start comparing
5)	If the element is smaller than the given element move forward and similarly for the right side move backwards.
6)	If the element is larger than the element then swap it
7)	Loop runs till i<j.

Time Complexity : Since, a single loop is being used and all the ‘n’ elements are being traversed, therefore time complexity of this algorithm is: O(n).

<img width="412" alt="image" src="https://github.com/Abhibhav2003/AlgorithmsAndTheirComplexityAnalysis/assets/139039304/479d0765-af5d-4c64-b744-fd76cdebd9bf">

# Practical -07: True False
About the Algorithm:
This algorithm generates all the True False combinations for the given length.

Working of the Algorithm:
1) Base Case: If length of string equals the given length.
2) Else: Concatenate ‘T’
3) Make a recursive call for next character
4) Concatenate ‘F’
5) Again make recursive call for the next character
   
Graph:

![image](https://github.com/Abhibhav2003/AlgorithmsAndTheirComplexityAnalysis/assets/139039304/eebb36af-2c98-40f4-b6fc-304b9961e1d0)

# Practical -08: Linear Search
About the Algorithm:
This algorithm helps in finding an element in an array by traversing through the complete array and comparing each element with the element to find.

Working of the Algorithm:
1) Using looping traverse the whole array linearly.
2) Compare each element with the element to find.
3) If element found then return the element.
4) Else return -1.

Time Complexity: Since, ‘n’ elements are being iterated over in worst case, therefore, the worst case time complexity is O(n). 

Graph:

![image](https://github.com/Abhibhav2003/AlgorithmsAndTheirComplexityAnalysis/assets/139039304/82de1c51-613c-4e03-bd66-6a0c1a3b1161)

# Practical -09: Power Function
1.	Method-1:
 This algorithm implements a simple recursive algorithm to calculate the power of 'm' raised to the 'n'-th exponent. It uses the recursive property of exponentiation.

Working of the Algorithm:
1)	Initialisation of a variable to store the result
2)	The power is calculated using: power = power*m
3)	Loop till the power becomes 1.

Time Complexity:
Since the loop is being executed for ‘n’ times i.e., power, the time Complexity using this method comes out to be O(n).

Graph:
 ![image](https://github.com/Abhibhav2003/AlgorithmsAndTheirComplexityAnalysis/assets/139039304/9b17fb9c-22c5-439f-a76d-e61b901575b0)


2.	Method-2:
The algorithm uses a recursive approach to calculate the power of 'm' raised to the 'n'-th exponent. It takes advantage of the fact that if 'n' is even, the exponentiation can be expressed as the square of the power of 'm' raised to half of 'n'.

Working of the Algorithm:

Pseudo-code:
power(m, n) {
    if (n == 0) {
        return 1;
    } else if (n % 2 == 0) {
         temp = power(m, n / 2);
        return temp * temp;
    } else {
        return m * power(m, n - 1);
    }
}

Time Complexity:
Using this approach the time complexity comes out to be O(logn).

Graph:
![image](https://github.com/Abhibhav2003/AlgorithmsAndTheirComplexityAnalysis/assets/139039304/c4fa69d1-576b-4eaa-b07f-59576a27fed1)



# Practical -10: Merge Sort
This practical implements the merge sort algorithm recursively. It divides the array into two halves, 
sorts each half independently, and then merges the sorted halves.

Working of the Algorithm:
Divide: Divide the unsorted array into two halves recursively until each sub-array has only one element. Split the array into halves by finding the middle index.
Conquer: Sort each sub-array recursively by applying Merge Sort to each half of the array.
Merge: Merge the sorted sub-arrays back into one sorted array by comparing the elements of the two sub-arrays and merging them in sorted order.

Time Complexity:
The recursive relation for merge sort is: T(n) = 2T(n/2) + O(n)
Solving this recursive relation, we get time complexity : O(nlogn).

<img width="417" alt="image" src="https://github.com/Abhibhav2003/AlgorithmsAndTheirComplexityAnalysis/assets/139039304/f481521a-fbd6-48a6-b5cd-74f4a341471f">

# Practical -11: Quick Sort
This function implements the partition operation of the QuickSort algorithm.
It selects a pivot element (here, the first element), rearranges the array elements such that elements smaller than the pivot come before it,
and elements greater than the pivot come after it. The function returns the index of the pivot after partitioning.

Working of the Algorithm:
1)	Choose Pivot: Select a pivot element from the array. This pivot will be used to partition the array.
2)	Partitioning: Rearrange the array elements such that all elements smaller than the pivot are moved to its left, and all elements greater than the pivot are moved to its right.
3)	Recursion: Recursively apply the above steps to the sub-arrays on the left and right of the pivot.
4)	Base Case: The recursion terminates when the sub-array size becomes 1 or 0.
5)	Combine: No explicit combination step is needed as the array is sorted in place during the partitioning step.
6)	Repeat: Repeat steps 1-5 for each sub-array until the entire array is sorted.

Time Complexity:
The recursive relation for quick sort is : T(n)=T(k)+T(n−k−1)+O(n)
Therefore on solving this we get the time complexity: O(nlogn)

<img width="450" alt="image" src="https://github.com/Abhibhav2003/AlgorithmsAndTheirComplexityAnalysis/assets/139039304/1b47b02c-1939-436a-97fa-38fa12f5fa62">


# Practical -12: Iterative Quick Sort
The QuickSort algorithm sorts an array by selecting a pivot element, partitioning the other elements into two subarrays, 
and then recursively sorting the subarrays. The iterative version uses a stack to manage the partitioning process without using recursion.

Working of the Algorithm:
Choose a Pivot: Choose a pivot element from the array. This can be done in various ways, such as selecting the first, last, or middle element.

Partitioning:
Partition the array into two subarrays: elements less than the pivot and elements greater than or equal to the pivot. This is done by rearranging the elements so that all elements less than the pivot are on its left and all elements greater than or equal to the pivot are on its right.

Push Ranges to Stack:
Instead of making recursive calls to sort the subarrays, we keep track of the ranges of subarrays using a stack. Initially, we push the range of the entire array onto the stack.

Iterative Process:
While the stack is not empty:
Pop a range from the stack.
Partition the subarray within this range using the pivot element.
If there are subarrays on the left and right of the pivot, push their ranges onto the stack.
Repeat until the stack is empty.

Complete Sort:
Once the stack is empty, all subarrays have been partitioned and sorted. The array is now fully sorted.

Time Complexity : O(nlogn)

# Practical -13: Activity Select
About the Algorithm:
Activity select is a problem in which there are n classes which are to be held in a fixed time period, this algorithm helps in providing maximum number of such classes that can be held in a given time period.

Working of the Algorithm:
Initialization:
1)	Create an array containing duration of each class.
Sorting:
2)	Sort the array.
Minimum Duration:
3)	Start selecting the class durations from left to right.
Avoiding Clash:
4)	In order to avoid a clash between any two classes check for the condition : s[j] > s[i].
Computation:
5)	Keep on subtracting the duration selected from the time period.
Termination:
6)	The loop ends when time period becomes equal to 0.

Time Complexity:
Since, for sorting n elements time taken is O(nlogn) and for iterating over ‘n’ elements it is O(n), therefore the time complexity is : O(nlogn).

Graph:

![image](https://github.com/Abhibhav2003/AlgorithmsAndTheirComplexityAnalysis/assets/139039304/a11c74de-8685-4eb0-b301-7007cf44f2c0)


# Practical -14: Cycle Detection
The algorithm uses the Union-Find algorithm for detecting cycles in an undirected graph. 
It employs the concept of connected components and checks whether adding an edge forms a cycle by examining the roots of the vertices involved

Working of the Algorithm:
Initialization: Initialize an array of size V (number of vertices) to represent disjoint sets. Each vertex is initially in its own set.

Define a data structure for Union-Find: Define a data structure that supports two main operations: union() to merge two sets, and find() to determine the set to which a particular element belongs.

Iterate through each edge: For each edge (u, v) in the graph, perform the following steps:

If find(u) equals find(v), it means that u and v belong to the same set, which indicates the presence of a cycle.
Otherwise, merge the sets containing u and v using the union() operation.
Implementation of union and find operations:

find(x): This operation finds the representative of the set that x belongs to.
union(x, y): This operation merges the sets containing x and y.

Detecting a cycle:
Iterate through each edge in the graph.
For each edge, find the representative (root) of both its vertices using find() operation.
If both vertices have the same representative, it means they belong to the same set, and adding this edge creates a cycle.
If they have different representatives, merge the sets using union() operation.

Detecting cycles in the entire graph:
Initialize an array to keep track of the parent of each vertex.
Iterate through each edge of the graph.
For each edge, find the representative of its source and destination vertices.
If the representatives are the same, it indicates that the vertices are already in the same set, and adding this edge creates a cycle.
If the representatives are different, merge the sets by updating the parent of one representative to the other.

Final Step:
If during the above steps, a cycle is detected, then the graph contains a cycle.
If no cycle is detected after iterating through all edges, then the graph is acyclic

# Practical -15: Binary Search
Practical-09 is the implementation of binary search in which we go on checking for the element in the half portion of the array, because of which the time complexity 
is equal to O(logn).

Working of the Algorithm:
1)	Define the search range, usually the entire sorted array, and set two pointers, low and high, to the start and end of the range, respectively.
2)	Calculate the midpoint of the current range as mid = (low + high) / 2.
3)	Compare the element at the midpoint with the target value.
4)	If the middle element is equal to the target, the search is successful. If the middle element is greater than the target, update high = mid - 1 to search in the left sub-array. If the middle element is less than the target, update low = mid + 1 to search in the right sub-array.
5)	Repeat steps 2-4 until the target is found or until the search range becomes empty (low > high).
6)	If the target is found, return its index. Otherwise, indicate that the target is not present in the array.

Time Complexity:
Since, we are always searching either in the right side of the middle element or the left side, therefore the number of iterations reduce to half every time and time complexity comes out to be O(logn).

<img width="426" alt="image" src="https://github.com/Abhibhav2003/AlgorithmsAndTheirComplexityAnalysis/assets/139039304/26ad95e2-e88c-4c19-8c09-39e67712d3fb">

# Practical -16: Knapsack(By weight)
About the Algorithm:
The knapsack problem is a classic optimization problem in computer science where the goal is to maximize the total value of items that can be put into a knapsack, given a set of items each with a weight and a value, and a maximum weight capacity for the knapsack.

Working of the Algorithm:

Initialization: Create an array, to store the maximum value achievable for different combinations of items and weights. Initialize the array with zeros.

Sorting: Sort the items by non- decreasing order of their weights.

Go on selecting the items from left to right.

Select till the weight limit is reached.


# Practical -17: Knapsack(By Profit)
Working of the Algorithm:
1) Initialization: Create an array and initialize it with 0.
2)Sort the items by decreasing order of their profit: Go on selecting the maximum profit and pushing it in the array.
3) Stop when the weight limit is reached.

# Practical -18: Knapsack(By ratio)

Working of the Algorithm:
Compute the profit-to-weight ratio for each item: Calculate the profit-to-weight ratio for each item by dividing the value of the item by its weight.
Sort the items based on their profit-to-weight ratio: Sort the items in decreasing order of their profit-to-weight ratio. This step is crucial as it helps prioritize items with higher value relative to their weight.
Initialize the dynamic programming table: Create an array similar to the previous approach, but instead of storing values based on individual items, store values based on the ratio-sorted items.
Iterate through the sorted items and weights: Iterate through each item in the sorted order and for each weight from 0 to the maximum capacity of the knapsack.
Value computation and table update: For each combination of item and weight, compute the maximum value achievable by considering the current item along with previously considered items, and update the array accordingly.
Final result: Once the iteration is complete, the maximum value achievable considering all items and weight capacities will be stored in the last cell of the array.


# Practical -19: Djikstra's

About the algorithm:
Dijkstra's algorithm is a greedy algorithm used for finding the single-source shortest paths in a weighted graph with non-negative weights. It starts with an empty set of vertices and repeatedly selects the vertex with the minimum distance from the source, adding it to the set. The algorithm then updates the distance values of the neighbouring vertices based on the newly added vertex. This process continues until all vertices are included in the set, and the algorithm finds the shortest paths from the source to all other vertices.

Working of the algorithm:
Initialization:

Create a set of unvisited vertices and mark all vertices as unvisited.
Assign a distance value to every vertex. Initialize the distance of the source vertex to 0 and the distance of all other vertices to infinity.

Selecting the Next Vertex:
Pick the unvisited vertex with the smallest known distance from the source vertex. Initially, this will be the source vertex itself.

Update Distances:
For the selected vertex, update the distance value of its adjacent vertices. The new distance is calculated by adding the weight of the edge from the selected vertex to its adjacent vertices to the distance of the selected vertex.
If the new distance is smaller than the current distance value of the adjacent vertex, update the distance value of the adjacent vertex.

Marking Visited:
After updating the distances of all adjacent vertices, mark the selected vertex as visited.

Repeat:
Repeat steps 2 to 4 until all vertices are visited. In each iteration, select the unvisited vertex with the smallest distance and update its adjacent vertices' distances.

Time Complexity:  O (V + E l o g V) {E: Number of Edges and V: number of vertices}

# Practical -20: Prim's Algorithm

About the Algorithm:
Prim's algorithm for finding the minimum spanning tree of a weighted undirected graph is often implemented with a priority queue (heap) to efficiently select the next vertex to add to the tree.

Working of the Algorithm:

Initialize:
Create an empty priority queue to store vertices keyed by their minimum edge weight to the growing tree.
Initialize a boolean array visited to keep track of visited vertices. Initially, all vertices are unvisited.
Initialize a minimum spanning tree MST to store the edges of the minimum spanning tree.

Choose a starting vertex:
Pick any vertex as the starting vertex (usually the first one).

Update priority queue:
Add all edges connected to the chosen vertex to the priority queue. Each edge is keyed by its weight.

Iterate until all vertices are visited:

While the priority queue is not empty:
Extract the vertex with the minimum edge weight from the priority queue.
Mark the extracted vertex as visited.
Add the corresponding edge to the minimum spanning tree MST.

Update the priority queue:
For each unvisited neighbour of the extracted vertex:
If the weight of the edge connecting the neighbour to the MST is less than the current key (weight) of the neighbour in the priority queue, update the key.

Finalize:
Once all vertices are visited, the MST will contain all edges of the minimum spanning tree.


Time Complexity:  O ((V + E) l o g V) {E: Number of Edges, V: Number of Vertices}.



# Practical -21: Multistage Graph

About the Algorithm:
This algorithm helps in providing the minimum distance and shortest path from source to destination.

Working of the Algorithm:

Initialize distances:
Create an array dist of size n, where n is the number of vertices in the multistage graph.
Initialize dist[i] to represent the shortest distance from the source vertex to vertex i. Set dist[source] = 0 and all other dist[i] = INF (infinity), where INF is a sufficiently large value to represent infinity.

Dynamic Programming Iteration:
Iterate through each stage of the multistage graph in a forward manner, starting from the first stage and proceeding to the last stage.

At each stage k:
For each vertex v in stage k, update its distance dist[v] based on the minimum distance from any vertex in the previous stage that has an outgoing edge to v.
Specifically, update dist[v] by taking the minimum of dist[v] and dist[u] + weight (u, v) for all vertices u in the previous stage that have an edge to v.

Final Result:
After iterating through all stages, dist[destination] will represent the shortest distance from the source vertex to the destination vertex.

Time Complexity: O(V + E).


# Practical -22: Kruskal's

About the Algorithm:

Kruskal's algorithm is a popular greedy algorithm used to find the minimum spanning tree (MST) of a connected, undirected graph. A minimum spanning tree of a graph is a subgraph that is a tree (a connected graph with no cycles) and spans all the vertices of the original graph while minimizing the total edge weight.

Working of the Algorithm:

Initialize:
Create an empty list MST to store the edges of the minimum spanning tree.
Sort all the edges of the graph in non-decreasing order of their weights.

Create Disjoint Sets:
Initialize a disjoint-set data structure to keep track of connected components. Each vertex is initially in its own set.

Iterate through sorted edges:
Iterate through each edge in the sorted list of edges:
Let the current edge be (u, v) with weight w.
Check if adding this edge creates a cycle in the minimum spanning tree. You can do this by checking if u and v belong to the same set in the disjoint-set data structure.
If adding the edge (u, v) does not create a cycle:
Add the edge (u, v) to the minimum spanning tree MST.
Merge the sets containing vertices u and v in the disjoint-set data structure.
If adding the edge (u, v) creates a cycle, skip this edge.

Finalize:
After iterating through all edges, the MST will contain the edges of the minimum spanning tree.

Time Complexity: O(E log V).

# Practical -23: Matrix Chain Multiplication

About the Algorithm:
Matrix Chain Multiplication problem can be stated as "find the optimal parenthesization of a chain of matrices to be multiplied such that the number of scalar multiplications is minimum”.
And this algorithm helps in finding the sequence in which the matrices should be multiplied in order to have minimum number of scalar multiplications.

Working of the Algorithm:
      Pseudo Code:
        P(s,i,j){
               if(i == j) print “Ai”;
               else{
                       print “(“
                         P(s,i,s[i,j]);
                         P(s,s[i,j]+1,j);
                        print “)”
                       }
                }

m[i,j] = min{m[i,k] + m[k+1,j] + Pi-1PkPj} [i<= k < j].

Recursive Tree:

![image](https://github.com/Abhibhav2003/AlgorithmsAndTheirComplexityAnalysis/assets/139039304/33b07daa-f549-4e6a-9ef1-351bdbcdc509)

Time Complexity:  O(2^n)

Graph:

![image](https://github.com/Abhibhav2003/AlgorithmsAndTheirComplexityAnalysis/assets/139039304/c75eff19-8f8b-4e86-998b-ecbd5dcc4cd0)

# Practical -24: Assembly Line Problem

About the Algorithm:

The Assembly Line Scheduling problem is a classical problem in dynamic programming that arises in manufacturing scenarios where items need to be produced on multiple assembly lines. Each assembly line consists of a series of stations, and items move from station to station along the line. This algorithm helps in finding the optimal sequence of stations for each assembly line so that the total time to produce all items is minimized.


Working of the Algorithm:
Define two arrays to store the optimal time to reach each station on each assembly line.
Initialize the entry times for both assembly lines.
Iterate through each station on both assembly lines, calculating the optimal time to reach that station from the previous station on the same line or from the previous station on the other line (if switching lines is beneficial).
Keep track of the optimal times to exit each assembly line.
Finally, select the minimum of the exit times as the optimal total time.



