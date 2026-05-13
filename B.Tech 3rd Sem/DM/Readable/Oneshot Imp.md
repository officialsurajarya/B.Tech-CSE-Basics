Here are the solutions for each question from your Discrete Mathematics assignment:

****(a) Symmetric difference $A \Delta B$****
Given $A = \{1, 2, 3\}$ and $B = \{3, 4, 5\}$.
The symmetric difference $A \Delta B$ is the set of elements that are in either $A$ or $B$, but not in both. 
*   Formula: $A \Delta B = (A - B) \cup (B - A)$
*   $A - B = \{1, 2\}$
*   $B - A = \{4, 5\}$
*   **Answer:** $A \Delta B = \{1, 2, 4, 5\}$

****(b) Bijective function with a suitable example****
A **bijective function** (or bijection) is a function that is both injective (one-to-one) and surjective (onto). This means every element in the domain maps to a unique element in the codomain, and every element in the codomain is mapped to by exactly one element in the domain.
*   **Example:** Let $f: \mathbb{R} \rightarrow \mathbb{R}$ be defined by $f(x) = 2x + 1$. 
    *   It is *one-to-one* because if $2x_1 + 1 = 2x_2 + 1$, then $x_1 = x_2$.
    *   It is *onto* because for any real number $y$, there exists a real number $x = (y - 1) / 2$ such that $f(x) = y$.

****(c) The Pigeonhole Principle****
**Statement:** If $n$ items are put into $m$ containers, with $n > m$, then at least one container must contain more than one item.

****(d) GCD of 124 and 52 using the Euclidean Algorithm****
Divide the larger number by the smaller number, and then repeatedly divide the previous divisor by the remainder until the remainder is 0.
*   $124 = 52 \times 2 + 20$
*   $52 = 20 \times 2 + 12$
*   $20 = 12 \times 1 + 8$
*   $12 = 8 \times 1 + 4$
*   $8 = 4 \times 2 + 0$
The last non-zero remainder is 4. 
*   **Answer:** $\text{GCD}(124, 52) = 4$

****(e) Tautology and Contradiction in Propositional Logic****
*   **Tautology:** A propositional statement that is always *true*, regardless of the truth values of its individual propositional variables (e.g., $P \lor \neg P$).
*   **Contradiction:** A propositional statement that is always *false*, regardless of the truth values of its individual propositional variables (e.g., $P \land \neg P$).

****(f) Number of vertices in the graph****
According to the Handshaking Lemma, the sum of the degrees of all vertices in a graph is equal to twice the number of edges.
*   Let $V$ be the number of vertices.
*   Number of edges ($E$) = 10
*   Degree of each vertex = 2
*   Sum of degrees = $V \times 2$
*   $2V = 2 \times 10$
*   $2V = 20 \implies V = 10$
*   **Answer:** The graph has **10 vertices**.

****(g) Abelian group****
An **Abelian group** (or commutative group) is a group $(G, *)$ that, in addition to satisfying the standard group axioms of closure, associativity, identity, and inverse, also satisfies the property of **commutativity**. This means that for all elements $a$ and $b$ in $G$, the operation yields the same result regardless of the order: $a * b = b * a$.

****(h) Cantor's Diagonal Argument****
**Statement:** Cantor's Diagonal Argument is a mathematical proof demonstrating that there are infinite sets that cannot be put into a one-to-one correspondence with the infinite set of natural numbers (i.e., some sets are uncountably infinite). It proves that the set of real numbers is uncountable by assuming a complete, countable list of real numbers exists between 0 and 1, and then constructing a new real number by altering the diagonal digits of that list, thereby showing a number was missing from the "complete" list.

****(i) Chromatic number of a Complete Graph $K_n$****
The chromatic number of a graph is the minimum number of colors needed to color the vertices so that no two adjacent vertices share the same color. In a complete graph $K_n$, every vertex is connected to every other vertex. 
*   **Answer:** The chromatic number of $K_n$ is **$n$**.

****(j) Representing the statement using quantifiers****
Statement: "For every integer, there exists an integer $y$ such that $x + y = 0$"
Let the domain be the set of all integers, denoted by $\mathbb{Z}$. 
*   **Answer:** $\forall x \in \mathbb{Z}, \exists y \in \mathbb{Z} \ (x + y = 0)$