**Chapter 1 focuses entirely on Set Theory**, which serves as the fundamental foundation for all discrete structures. 

Here is a detailed breakdown of the concepts, types, relationships, operations, and laws of Set Theory covered in the chapter, complete with examples.

### **1. Fundamental Concepts and Notation**
*   **Definition**: Formally, a set is an **"unordered, well-defined, collection of distinct objects of same type,"** where the individual defining the set determines the "type". These objects are called the elements or members of the set.
*   **Notation**: Sets are usually denoted by capital letters (e.g., A, B, C), while lowercase letters are used to denote the elements within them. 
    *   $x \in A$ means element $x$ is a member of set A.
    *   $x \notin A$ means element $x$ is not a member of set A.
*   **Cardinality**: This is the number of elements present in a set, denoted by $|A|$. 
    *   *Example:* If $A = \{0, 2, 4, 6\}$, then the cardinality $|A| = 4$.

### **2. Representation of Sets**
Sets can be defined primarily in two ways:
*   **Tabular/Roster Representation**: The set is defined by physically listing its members. 
    *   *Example:* $A = \{a, e, i, o, u\}$ or $B = \{1, 2, 3, 4\}$.
*   **Set Builder Representation**: The set is defined by specifying a property or rule that all elements must satisfy. 
    *   *Example:* $A = \{x | x \text{ is an odd positive number less than 10}\}$ or $C = \{x | x \in Z \text{ \&\& } x\%2 = 0\}$.

### **3. Types of Sets**
*   **Finite Set**: Contains a specific, finite number of elements ($n$, where $n$ is a nonnegative integer). *Example:* $A = \{1, 2, 3, 4\}$.
*   **Infinite Set**: Contains an infinite number of elements where the counting does not come to an end. *Example:* The set of natural numbers.
*   **Null / Empty Set**: A unique set having no elements whatsoever. Its cardinality is exactly zero ($|\phi| = 0$). It is denoted by the symbol $\phi$ or empty brackets $\{\}$.
*   **Singleton Set**: A set that contains exactly one element.
*   **Universal Set ($U$)**: If all sets being investigated are subsets of a fixed set, that fixed comprehensive set is the universal set. In Venn diagrams, it is represented by a rectangle.

### **4. Relationships Between Sets**
*   **Subset ($A \sqsubseteq B$)**: Set A is a subset of B if every element of A is also an element of B. 
    *   *Important Rules:* The empty set ($\phi$) is a subset of every set, every set is a subset of the Universal set ($U$), and every set is a subset of itself.
    *   *Example:* If $A = \{1, 2, 3\}$ and $B = \{1, 2, 3, 4, 5\}$, then A is a subset of B.
*   **Proper Subset ($A \subset B$)**: Set A is a proper subset of B if it is a subset of B, but $A \neq B$ (meaning B has at least one element that is not in A).
*   **Equality of Sets ($A = B$)**: Two sets are equal if they have the exact same elements. This is proven if $A \sqsubseteq B$ and $B \sqsubseteq A$.
*   **Power Set ($P(A)$ or $2^A$)**: The set containing all possible subsets of a given set A. If a set has $n$ elements, its power set has a cardinality of $2^n$.
    *   *Example:* If $A = \{1, 2, 3\}$, then $P(A) = \{\phi, \{1\}, \{2\}, \{3\}, \{1, 2\}, \{2, 3\}, \{1, 3\}, \{1, 2, 3\}\}$.

### **5. Operations on Sets**
*   **Complement ($A^c$)**: The set of all elements that are in the universal set $U$, but not in set A ($x \notin A \text{ and } x \in U$).
*   **Union ($A \cup B$)**: The set of all elements that belong to A, or B, or both.
*   **Intersection ($A \cap B$)**: The set of all elements that belong strictly to both A and B.
*   **Disjoint Sets**: Two sets are disjoint if they do not share any common elements. Their intersection is empty ($A \cap B = \phi$).
*   **Set Difference ($A - B$)**: The set of all elements that belong to A but do not belong to B.
*   **Symmetric Difference ($A \oplus B$)**: The set of elements that are in A or in B, but *not in both*. Mathematically, it is defined as $(A \cup B) - (A \cap B)$ or $(A - B) \cup (B - A)$.

### **6. Important Laws of Set Theory**
Set operations are governed by several fundamental laws:
*   **Idempotent Law:** $A \cup A = A$ and $A \cap A = A$
*   **Associative Law:** $(A \cup B) \cup C = A \cup (B \cup C)$ and $(A \cap B) \cap C = A \cap (B \cap C)$
*   **Commutative Law:** $A \cup B = B \cup A$ and $A \cap B = B \cap A$
*   **Distributive Law:** $A \cup (B \cap C) = (A \cup B) \cap (A \cup C)$ and $A \cap (B \cup C) = (A \cap B) \cup (A \cap C)$
*   **De Morgan’s Law:** $(A \cup B)^c = A^c \cap B^c$ and $(A \cap B)^c = A^c \cup B^c$
*   **Identity Law:** $A \cup \phi = A$, $A \cap \phi = \phi$, $A \cup U = U$, and $A \cap U = A$
*   **Complement Law:** $A \cup A^c = U$, $A \cap A^c = \phi$, $U^c = \phi$, and $\phi^c = U$
*   **Involution Law:** $((A)^c)^c = A$