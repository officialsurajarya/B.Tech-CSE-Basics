
## Chapter 1: Set Theory
*   **Set:** An unordered, well-defined collection of distinct objects.
    *   **Example:** $A = \{0, 2, 4, 6\}$ is a finite set with a cardinality of $4$ ($|A| = 4$).
*   **Representations:** 
    *   **Tabular/Roster:** Listing members, e.g., $A = \{a, e, i, o, u\}$.
    *   **Set Builder:** Specifying properties, e.g., $A = \{x | x \text{ is an odd positive number less than } 10\}$.
*   **Subset ($\subseteq$) & Proper Subset ($\subset$):** 
    *   **Example:** If $A = \{1,2,3\}$ and $B = \{1,2,3,4,5\}$, then $A \subseteq B$ because every element of $A$ is in $B$, and $A \subset B$ because there are elements in $B$ not in $A$.
*   **Power Set ($P(A)$):** The set of all subsets.
    *   **Example:** If $A= \{1,2,3\}$, then $P(A) = \{\emptyset, \{1\}, \{2\}, \{3\}, \{1,2\}, \{2,3\}, \{1,3\}, \{1,2,3\}\}$.

## Chapter 2: Relations
*   **Cartesian Product ($A \times B$):**
    *   **Example:** If $A = \{a, b\}$ and $B = \{1, 2, 3\}$, then $A \times B = \{(a, 1), (a, 2), (a, 3), (b, 1), (b, 2), (b, 3)\}$.
*   **Inverse Relation ($R^{-1}$):**
    *   **Example:** If $R = \{(a, 1), (a, 3), (b, 2)\}$, then the inverse relation $R^{-1}$ reverses the pairs.
*   **Properties of Relations:**
    *   **Reflexive Example:** For a set $A = \{1, 2, 3\}$, the relation $R = \{(1,1), (2,2), (3,3)\}$ is reflexive.
*   **Equivalence Relation:** Must be Reflexive, Symmetric, and Transitive.
    *   **Example:** A relation over integers where $(a, b)$ is related if and only if $(a + b)$ is even.

## Chapter 3: POSET & Lattices
*   **Partial Ordering Set (POSET):** A set with a partial ordering relation (Reflexive, Anti-Symmetric, Transitive).
    *   **Examples:** $[A, \le]$ or $[P(S), \subseteq]$.
*   **Hasse Diagram:** A graphical representation of a POSET with transitive and reflexive edges removed.
*   **Lattice / Boolean Algebra:** A lattice where every element has exactly one complement is a Boolean Algebra. 

## Chapter 4: Functions
*   **Function vs. Relation:**
    *   **Example of a non-function:** If $X = \{1, 2, 3, 4, 5\}$ and $Y = \{2, 3, 4, 5, 6, 7\}$, a relation where the element "5" maps to more than one element in $Y$, or where an element in $X$ doesn't participate at all, is not a valid function.
*   **Function Composition ($f \circ g(x)$):**
    *   **Example:** If $f = \{(1, 3), (2, 1), (3, 4), (4, 6)\}$ and $g = \{(1, 5), (2, 3), (3, 4), (4, 1), (5, 3), (6, 2)\}$, then $g \circ f = \{(1, 4), (2, 5), (3, 1), (4, 2)\}$.
*   **Inverse Function ($f^{-1}$):**
    *   **Example:** If $f(x) = 5x - 7$, then its inverse is $f^{-1}(y) = (y + 7)/5$.

## Chapter 5: Theory of Logics
*   **Propositions:** Declarative sentences that are strictly true or false.
    *   **Examples:** "Delhi is the capital of USA" (False) or "$5 \le 11$" (True).
*   **Negation ($\neg$):** 
    *   **Example:** If $p$ is “Michael’s PC runs Linux”, then $\neg p$ is “Michael’s PC does not run Linux”.
*   **First-Order Predicate Logic:**
    *   **Universal Quantifier ($\forall$) Example:** "Every Indian likes cricket" can be written as $\forall x \text{ Cricket}(x)$, where the universe of discourse is restricted to Indians.
    *   **Existential Quantifier ($\exists$) Example:** "Some Indians like samosa" can be written as $\exists x \text{ Samosa}(x)$.

## Chapter 6: Algebraic Structures
*   **Basic Structures:** 
    *   **Examples:** The set of integers under addition $(Z, +)$ forms an Abelian Group, but the set of natural numbers under subtraction $(N, -)$ fails the basic closure property.
*   **Finite Groups & Modulo Arithmetic:**
    *   **Example:** The set $\{0, 1, 2, 3\}$ under the operator "addition modulo 4" ($+_{4}$) satisfies the properties to be a group.
*   **Rings and Fields:**
    *   **Examples:** The set of integers under addition and multiplication $(Z, +, \times)$ is an Integral Domain, while the set of real numbers $(R, +, \times)$ forms a Field.

## Chapter 7: Graphs
*   **Planar vs. Non-Planar Graphs:** A planar graph can be drawn without crossing edges.
    *   **Examples of Non-Planar:** The complete graph $K_{5}$ (Kuratowski’s case I) and the complete bipartite graph $K_{3,3}$ (Kuratowski’s case II) are the simplest non-planar graphs.
*   **Euler's Formula for Planar Graphs:** Number of regions $r = e - v + 2$.

## Chapter 8: Combinatorics
*   **Permutation (Order Matters):**
    *   **Example:** Arranging 3 distinct books (Physics, Chemistry, Mathematics) on a shelf yields 6 permutations (PCM, PMC, CMP, CPM, MPC, MCP) using the formula $3! = 6$.
*   **Combination (Order Doesn't Matter):**
    *   **Example:** Selecting 2 fruits from a basket containing an Apple (A), Banana (B), and Cherry (C) yields 3 combinations (AB, AC, BC).
*   **Pigeonhole Principle:**
    *   **Example 1:** If you have 10 pairs of socks (20 individual socks) and only 19 drawers, at least one drawer must hold more than one sock.
    *   **Example 2:** In a classroom of 30 students, at least 3 students will share a birth month because $\lceil 30/12 \rceil = 3$.

***
