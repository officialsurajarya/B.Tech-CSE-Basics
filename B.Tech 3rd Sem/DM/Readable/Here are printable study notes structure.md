Here are printable study notes structured by chapter, summarizing the key concepts, definitions, and formulas from your discrete mathematics and algebraic structures material:

# Foundations of Discrete Mathematics and Algebraic Structures

## Chapter 1: Set Theory
*   **Set:** An unordered, well-defined collection of distinct objects, called elements or members.
*   **Representations:** Tabular/Roster (listing members) and Set Builder (specifying properties).
*   **Types of Sets:**
    *   **Finite/Infinite:** A set with a specific number of elements is finite, otherwise infinite.
    *   **Null/Empty Set ($\emptyset$):** A unique set having no elements, with a cardinality of zero.
    *   **Universal Set (U):** The set containing all objects under investigation.
    *   **Subset ($\subseteq$):** Set $A$ is a subset of $B$ if every element of $A$ is also in $B$.
    *   **Proper Subset ($\subset$):** $A$ is a proper subset of $B$ if $A \subseteq B$ but $A \neq B$.
    *   **Power Set ($P(A)$):** The set of all subsets of $A$. If $|A| = n$, then $|P(A)| = 2^n$.
*   **Operations:**
    *   **Union ($A \cup B$):** Elements in $A$ or $B$ or both.
    *   **Intersection ($A \cap B$):** Elements belonging to both $A$ and $B$.
    *   **Disjoint:** Sets with no common elements ($A \cap B = \emptyset$).
    *   **Set Difference ($A - B$):** Elements in $A$ but not in $B$.
    *   **Symmetric Difference ($A \oplus B$):** Elements in $A$ or $B$, but not both.
*   **Laws of Set Theory:** Includes Idempotent, Associative, Commutative, Distributive, De Morgan’s, Identity, Complement, and Involution laws.

## Chapter 2: Relations
*   **Cartesian Product ($A \times B$):** The set of all ordered pairs where the first member is from $A$ and the second is from $B$.
*   **Relation:** Any subset of a Cartesian product $A \times B$.
*   **Properties of Relations:**
    *   **Reflexive:** Every element relates to itself; $\forall x \in A, (x,x) \in R$.
    *   **Irreflexive:** No element relates to itself; $\forall x \in A, (x,x) \notin R$.
    *   **Symmetric:** If $(a,b) \in R$, then $(b,a) \in R$.
    *   **Anti-Symmetric:** If $(a,b) \in R$ and $(b,a) \in R$, then $a = b$.
    *   **Asymmetric:** If $(a,b) \in R$, then $(b,a) \notin R$.
    *   **Transitive:** If $(a,b) \in R$ and $(b,c) \in R$, then $(a,c) \in R$.
*   **Equivalence Relation:** Must be Reflexive, Symmetric, and Transitive.
*   **Partial Order Relation (POSET):** Must be Reflexive, Anti-Symmetric, and Transitive.

## Chapter 3: POSET & Lattices
*   **Hasse Diagram:** A graphical drawing of a partially ordered set representing its transitive reduction (reflexive and transitive edges are removed).
*   **Lattice:** A POSET or Hasse diagram where every pair of elements has a Join and a Meet.
*   **Types of Lattices:**
    *   **Bounded/Unbounded:** Bounded lattices have a finite number of elements with clear upper and lower bounds.
    *   **Distributive Lattice:** Every element has at most one complement.
    *   **Complemented Lattice:** Every element has at least one complement.
    *   **Boolean Algebra:** A lattice that is both complemented and distributive (exactly one complement per element).

## Chapter 4: Functions
*   **Function:** A relation where each element of a first set (domain) maps to exactly one unique element of a second set (codomain).
*   **Types of Functions:**
    *   **Injective (One-to-One):** Maps distinct elements of the domain to distinct elements of the codomain.
    *   **Surjective (Onto):** Every element in the codomain is mapped by at least one element in the domain.
    *   **Bijective:** A function that is both One-to-One and Onto.
*   **Inverse Function:** Only exists if and only if the function is bijective.
*   **Function Composition:** An operation $(f \circ g)(x) = f(g(x))$ that is always associative.

## Chapter 5: Theory of Logics
*   **Proposition:** A declarative sentence that is strictly either true or false.
*   **Connectives:** Negation ($\neg$), Conjunction ($\land$, AND), Disjunction ($\lor$, OR), Implication ($\rightarrow$, If-Then), and Bi-conditional ($\leftrightarrow$, If and only if).
*   **Implication Forms:** For $p \rightarrow q$, the Converse is $q \rightarrow p$, Inverse is $\neg p \rightarrow \neg q$, and Contrapositive is $\neg q \rightarrow \neg p$.
*   **Truth Value Cases:**
    *   **Tautology:** Always true.
    *   **Contradiction:** Always false.
    *   **Contingency:** Neither a tautology nor a contradiction.
*   **First-Order Predicate Logic:** Uses quantifiers to express statements about groups:
    *   **Universal Quantifier ($\forall$):** Asserts a property is true for all values in the universe of discourse.
    *   **Existential Quantifier ($\exists$):** Asserts a property is true for at least one value.

## Chapter 6: Algebraic Structures
*   **Key Properties:**
    *   **Closure:** Operating on any two elements in the set yields an element within the set.
    *   **Associative:** $a * (b * c) = (a * b) * c$.
    *   **Identity:** There exists an element $e$ such that $a * e = e * a = a$.
    *   **Inverse:** Every element $a$ has a unique $a^{-1}$ such that $a * a^{-1} = e$.
    *   **Commutative:** $a * b = b * a$.
*   **Hierarchy of Structures:**
    *   **Semi-Group:** Closure + Associative.
    *   **Monoid:** Semi-group + Identity.
    *   **Group:** Monoid + Inverse.
    *   **Abelian Group:** Group + Commutative.
*   **Cyclic Group:** Contains a generating element where every element in the group is an integral power of that generator.
*   **Rings and Fields:**
    *   **Ring:** An abelian group under addition, a semigroup under multiplication, and multiplication is distributive over addition.
    *   **Integral Domain:** A commutative ring with unity and no zero divisors.
    *   **Field:** An abelian group under both addition and multiplication (excluding zero), with distributive properties.

## Chapter 7: Graphs
*   **Basic Elements:** Vertices (objects) and Edges (unordered pairs of vertices connecting them).
*   **Degree:** The number of edges associated with a vertex. The sum of all degrees equals twice the number of edges ($\sum d(v_i) = 2|E|$).
*   **Types of Graphs:**
    *   **Complete Graph ($K_n$):** Every vertex is adjacent to every other vertex.
    *   **Bi-partite Graph:** Vertices partitioned into two disjoint subsets where edges only connect vertices between subsets, not within.
    *   **Regular Graph:** All vertices have the same degree.
*   **Planar Graph:** Can be drawn on a plane with no crossing edges. Follows Euler's formula: $r = e - v + 2$ (where $r$ is regions, $e$ is edges, $v$ is vertices).
*   **Walks and Circuits:**
    *   **Euler Graph:** Contains a closed walk traversing every edge of the graph exactly once (requires all vertices to have an even degree).
    *   **Hamiltonian Graph:** Contains a closed walk traversing every vertex exactly once.

## Chapter 8: Combinatorics
*   **Permutation:** Arrangement of items in a specific order. Formula: $P(n, m) = \frac{n!}{(n-m)!}$.
*   **Combination:** Selection of items where order does not matter. Formula: $^nC_r = \frac{n!}{(n-r)!r!}$.
*   **Pigeonhole Principle:** If $n$ items are distributed into $m$ containers and $n > m$, at least one container will hold more than one item.

Would you like me to create a downloadable tailored report or a set of flashcards based on this material to further assist your studying?