# DSA with C++

Welcome to the **DSA with C++** repository! This project, maintained by **udayraut128**, is focused on implementing various data structures and algorithms using C++. Whether you're learning or reviewing concepts, this repository provides clean and well-documented implementations to help you understand and practice DSA.

## Table of Contents

- [Introduction](#introduction)
- [Getting Started](#getting-started)
- [Data Structures](#data-structures)
  - [Arrays](#arrays)
  - [Linked Lists](#linked-lists)
  - [Stacks](#stacks)
  - [Queues](#queues)
  - [Trees](#trees)
  - [Graphs](#graphs)
  - [Hash Tables](#hash-tables)
- [Algorithms](#algorithms)
  - [Sorting](#sorting)
  - [Searching](#searching)
  - [Dynamic Programming](#dynamic-programming)
  - [Greedy Algorithms](#greedy-algorithms)
  - [Divide and Conquer](#divide-and-conquer)
- [Contributing](#contributing)
- [License](#license)

## Introduction

This repository contains implementations of common data structures and algorithms in C++. The goal is to provide a comprehensive resource for anyone looking to improve their understanding of DSA.

## Getting Started

To get started, clone this repository to your local machine:

```bash
git clone https://github.com/udayraut128/DSA-with-CPP.git
cd DSA-with-CPP

 
 ## Data Structures

### Arrays
**Definition:** An array is a collection of elements of the same type stored in contiguous memory locations. The elements can be accessed randomly by using indices.

**Key Operations:**
- **Traversal:** Accessing each element of the array.
- **Insertion:** Adding an element at a specific index.
- **Deletion:** Removing an element from a specific index.
- **Searching:** Finding the location of an element in the array.

### Linked Lists
**Definition:** A linked list is a linear data structure where each element is a separate object called a node. Each node contains the data and a reference (or link) to the next node in the sequence.

**Types:**
- **Singly Linked List:** Each node points to the next node and the last node points to `NULL`.
- **Doubly Linked List:** Each node points to both the next and previous nodes.
- **Circular Linked List:** The last node points to the first node, forming a circle.

**Key Operations:**
- **Insertion:** Adding a node at the beginning, middle, or end.
- **Deletion:** Removing a node from the beginning, middle, or end.
- **Traversal:** Visiting each node in the linked list.

### Stacks
**Definition:** A stack is a linear data structure that follows the Last In First Out (LIFO) principle. The last element added is the first one to be removed.

**Key Operations:**
- **Push:** Adding an element to the top of the stack.
- **Pop:** Removing the top element from the stack.
- **Peek:** Viewing the top element without removing it.
- **isEmpty:** Checking if the stack is empty.

### Queues
**Definition:** A queue is a linear data structure that follows the First In First Out (FIFO) principle. The first element added is the first one to be removed.

**Types:**
- **Simple Queue:** Basic FIFO queue.
- **Circular Queue:** The last position is connected to the first position to make a circle.
- **Priority Queue:** Each element has a priority, and elements with higher priorities are dequeued before those with lower priorities.

**Key Operations:**
- **Enqueue:** Adding an element to the end of the queue.
- **Dequeue:** Removing the element from the front of the queue.
- **Peek:** Viewing the front element without removing it.
- **isEmpty:** Checking if the queue is empty.

### Trees
**Definition:** A tree is a non-linear data structure that simulates a hierarchical tree structure with a root node and child nodes, represented as a set of linked nodes.

**Types:**
- **Binary Tree:** Each node has at most two children (left and right).
- **Binary Search Tree (BST):** A binary tree where the left child is less than the parent node, and the right child is greater.
- **AVL Tree:** A self-balancing binary search tree.

**Key Operations:**
- **Insertion:** Adding a node in the tree while maintaining its properties.
- **Deletion:** Removing a node from the tree.
- **Traversal:** Visiting all the nodes in a specific order (Inorder, Preorder, Postorder).

### Graphs
**Definition:** A graph is a non-linear data structure consisting of nodes (vertices) and edges that connect pairs of nodes.

**Types:**
- **Directed Graph:** Edges have a direction.
- **Undirected Graph:** Edges have no direction.
- **Weighted Graph:** Edges have weights or costs associated with them.

**Key Operations:**
- **Traversal:** Visiting all the nodes in the graph (BFS, DFS).
- **Insertion:** Adding a vertex or edge.
- **Deletion:** Removing a vertex or edge.

### Hash Tables
**Definition:** A hash table is a data structure that maps keys to values using a hash function. It allows for fast data retrieval.

**Key Operations:**
- **Insertion:** Adding a key-value pair.
- **Deletion:** Removing a key-value pair.
- **Searching:** Finding the value associated with a key.

## Algorithms

### Sorting
**Definition:** Sorting is the process of arranging elements in a specific order, either ascending or descending.

**Common Algorithms:**
- **Bubble Sort:** Repeatedly swapping adjacent elements if they are in the wrong order.
- **Selection Sort:** Selecting the smallest element from the unsorted portion and swapping it with the first unsorted element.
- **Insertion Sort:** Building a sorted portion by repeatedly inserting unsorted elements into their correct position.
- **Merge Sort:** Dividing the array into halves, sorting them, and then merging them.
- **Quick Sort:** Selecting a pivot and partitioning the array into elements less than and greater than the pivot, then sorting recursively.

### Searching
**Definition:** Searching is the process of finding the location of an element in a data structure.

**Common Algorithms:**
- **Linear Search:** Scanning each element sequentially until the desired element is found.
- **Binary Search:** Dividing the sorted array into halves to find the element in logarithmic time.

### Dynamic Programming
**Definition:** Dynamic programming is a method for solving complex problems by breaking them down into simpler subproblems and storing the results of these subproblems to avoid redundant computations.

**Common Algorithms:**
- **Fibonacci Sequence:** Computing Fibonacci numbers using memoization or tabulation.
- **Knapsack Problem:** Determining the most valuable combination of items without exceeding the weight capacity.

### Greedy Algorithms
**Definition:** Greedy algorithms make the locally optimal choice at each step with the hope of finding the global optimum.

**Common Algorithms:**
- **Huffman Coding:** Compressing data by creating a binary tree where the path to each character is as short as possible.
- **Kruskal's Algorithm:** Finding the minimum spanning tree for a graph by selecting the shortest edges first.

### Divide and Conquer
**Definition:** Divide and conquer is an algorithmic paradigm that works by recursively breaking down a problem into subproblems, solving them independently, and combining their solutions.

**Common Algorithms:**
- **Merge Sort:** Dividing the array into halves, sorting them, and merging them.
- **Quick Sort:** Dividing the array around a pivot and sorting the partitions.

## Contributing
Contributions are welcome! If you would like to contribute to this repository, please fork the repository and submit a pull request.

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.
